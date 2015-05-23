#pragma once
#include "node.h"

class ElseIfNode :
	public Node
{
protected:
	Node* _condtion;
	Node* _scoop;

public:
	int 	elseIf_label;
	int 	elseIf_label2=0;
	ElseIfNode(Node* son, Node* next, Node* condition, Node* scoop) :Node(son,next), _condtion(condition),_scoop(scoop)
	{



	}
	ElseIfNode(Node* son, Node* next, Node* condition, Node* scoop,int l,int c) :Node(son, next,l,c), _condtion(condition), _scoop(scoop)
	{



	}
		virtual void generateCode()
	{
			MIPS_ASM::printComment("elifNode");
			string i = "";
			string end = "endif_";
			end += std::to_string(elseIf_label);
			string endif = "else_";
			endif += std::to_string(elseIf_label);
			_condtion->generateCode();
			MIPS_ASM::pop("t0");

			if (this->Next->getNodeType() == "ElseNode")
			{
				static_cast<ElseNode*>(this->Next)->else_label = elseIf_label;
				MIPS_ASM::beq("t0", "0", endif);
			}
			else if (this->Next->getNodeType() == "ElseIfNode")
			{
				static_cast<ElseIfNode*>(this->Next)->elseIf_label = elseIf_label;
				static_cast<ElseIfNode*>(this->Next)->elseIf_label2 = elseIf_label2++;
				MIPS_ASM::beq("t0", "0", endif);
			}
			else
				MIPS_ASM::beq("t0", "0", end);
			Node* temp = this->Son;
			while (temp)
			{
				temp->generateCode();
				temp = temp->Next;
			}
	}
	virtual void before_generateCode(){
	}
	virtual void print()
	{
		cout << "elseif node" << endl;
	}
	virtual string getNodeType()
	{
		return "ElseIfNode";
	}

};