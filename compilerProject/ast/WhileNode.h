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
	virtual void before_generateCode(){
			 Node* temp = this->Son;
		while (temp)
		{
			temp->generateCode();
			temp = temp->Next;
		}
	}
	virtual void generateCode()
	{
		/*
		Node* temp = this->Son;
		while (temp)
		{
			if (temp->getNodeType() == "IDNode")
			{
				static_cast<IDNode*>(temp)->get_variable()->setOffset(this->getNextOffset(4));
			}
			temp = temp->Next;
		}*/
		
		if ((conditionNode->getNodeType() == "ValueNode") && ((static_cast<ValueNode*>(conditionNode)->get_types() != 5) || (static_cast<ValueNode*>(conditionNode)->get_types() != 6)))
		{
			//TODO Add handling error for un boolean Condition
			return;
		}
		string cc = "";
		cc = std::to_string(WhileNode::while_label++);

		string ccc = "While";
		ccc += cc;

		string ccc2 = "endWhile";
		ccc2 += cc;
		lastLabel.push_back(make_pair(ccc,ccc2));
		/*Break::set_label(ccc2);

		strcpy(this->loop_end,ccc2);*/
		/*
		MIPS_ASM::printComment("begin while statment");
		MIPS_ASM::push("ra");
		MIPS_ASM::push("fp");
		MIPS_ASM::reserveStack(getFrameSize());
		//MIPS_ASM::add_instruction("move $fp, $sp\n");
		MIPS_ASM::move("fp", "sp");
		*/
		MIPS_ASM::add_instruction("addi $v0,$sp,0\n");
		MIPS_ASM::label(ccc);
		MIPS_ASM::move("sp", "v0");

		conditionNode->generateCode();
		MIPS_ASM::pop("t0");


		MIPS_ASM::beq("t0", "0", ccc2);
		Node* temp = this->Son;
		while (temp)
		{
			temp->generateCode();
			temp = temp->Next;
		}
		MIPS_ASM::add_instruction("addi $v0,$sp,0\n");
		MIPS_ASM::jump(ccc);
		MIPS_ASM::label(ccc2);
		lastLabel.pop_back();
		/*
		MIPS_ASM::releaseStack(getFrameSize());
	
		MIPS_ASM::add_instruction("add $sp, $sp, 4\n");
		MIPS_ASM::add_instruction("lw $ra,0($sp)\n");
		MIPS_ASM::add_instruction("add $sp, $sp, 4\n");
		MIPS_ASM::add_instruction("lw $fp 0($sp)\n");
		MIPS_ASM::pop("fp");
		MIPS_ASM::pop("ra");
		MIPS_ASM::push("v0");*/
		MIPS_ASM::printComment("end while statment");
	}
	virtual void print()
	{
		cout << "WHILE NODE !" << endl;
		if (conditionNode)
		{
			cout << "condition is" << conditionNode->getNodeType()<< endl;
			conditionNode->print();
		}
			
	}
	virtual string getNodeType()
	{
		return "WhileNode";
	}
	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		pi = conditionNode->check(n,true);
		return pi;
	}
};
int WhileNode::while_label = 0;
#endif