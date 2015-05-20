#pragma once
#ifndef __WHILENODE__
#define __WHILENODE__
#include"Node.h"
#include"..\ST\Type.h"
class WhileNode :public Node
{
private:
	Node* conditionNode;
	Node* _scoop;
public:
	static	int while_label;
	Node* get_condition()
	{
		return conditionNode;
	}
	WhileNode() :conditionNode(NULL), Node(NULL, NULL)
	{

	}
	WhileNode(Node* son, Node* next, Node* condition, Node* scoop) :conditionNode(condition), _scoop(scoop), Node(son, next)
	{

	}
		virtual void generateCode()
	{
		Node* temp = this->Son;
		while (temp)
		{
			if (temp->getNodeType() == "IDNode")
			{
				static_cast<IDNode*>(temp)->get_variable()->setOffset(this->getNextOffset(4));
			}
			temp = temp->Next;
		}
		
		if ((conditionNode->getNodeType() == "ValueNode") && ((static_cast<ValueNode*>(conditionNode)->get_types() != 5) || (static_cast<ValueNode*>(conditionNode)->get_types() != 6)))
		{
			
			return;
		}
		string cc = "";
		cc = std::to_string(WhileNode::while_label++);

		string ccc = "While";
		ccc += cc;

		string ccc2 = "endWhile";
		ccc2 += cc;

		/*Break::set_label(ccc2);

		strcpy(this->loop_end,ccc2);*/


		MIPS_ASM::label(ccc);


		conditionNode->generateCode();
		MIPS_ASM::pop("t0");


		MIPS_ASM::beq("t0", "0", ccc2);
		temp = this->Son;
		while (temp)
		{
			temp->generateCode();
			temp = temp->Next;
		}

		MIPS_ASM::jump(ccc);
		MIPS_ASM::label(ccc2);
	}
	virtual void print()
	{
		cout << "WHILE NODE !" << endl;

	}
	virtual string getNodeType()
	{
		return "WhileNode";
	}

};
int WhileNode::while_label = 0;
#endif