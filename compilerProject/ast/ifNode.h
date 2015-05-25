#pragma once
#ifndef __IFNODE__
#define __IFNODE__
#include "node.h"
#include"ElseNode.h"
#include"ElseIfNode.h"
using namespace std;
class IfNode :
	public Node
{
protected:
	Node* _condtion;
	Node* _scoop;

public:
	static	int 	if_label;
	IfNode(Node* son, Node* next, Node* condition, Node* scoop) :Node(son,next), _condtion(condition),_scoop(scoop) 
	{


	}
	IfNode(Node* son, Node* next, Node* condition, Node* scoop,int l,int c) :Node(son, next,l,c), _condtion(condition), _scoop(scoop)
	{


	}
	virtual void print()
	{
		cout << "IF NODE !" << endl;
		_condtion->print();
		this->generateCode();
	}
	virtual string getNodeType()
	{
		return "IfNode";
	}
	virtual void generateCode()
	{
		MIPS_ASM::printComment("ifNode");
		string i = "";
		int x = if_label++;
		i = std::to_string(x);

		string endif = "else_";
		string end = "endif_";
		endif += i;
		end += i;
		_condtion->generateCode();
		MIPS_ASM::pop("t0");
		
		if (this->Next->getNodeType() == "ElseNode")
		{
			static_cast<ElseNode*>(this->Next)->else_label = x;
			MIPS_ASM::beq("t0", "0", endif);
		}
		else if (this->Next->getNodeType() == "ElseIfNode")
		{
			static_cast<ElseIfNode*>(this->Next)->elseIf_label = x;
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
		MIPS_ASM::jump(end);
		MIPS_ASM::label(endif);
		if ((this->Next->getNodeType() != "ElseNode") && (this->Next->getNodeType() != "ElseIfNode"))
		{
			MIPS_ASM::label(end);
		}
		
		
	}
	void gcVars()
	 {
		 Node* temp = this->Son;
		 MIPS_ASM::printComment("gc vars");
		while (temp)
		{
			if (temp->getNodeType() == "IDNode")
			{
				Variable* v=static_cast<IDNode*>(temp)->get_variable();
				 MIPS_ASM::push("ra");
				 MIPS_ASM::lw("a0", -v->getOffset(), this->getOffsetRegister());
				 MIPS_ASM::jal("decrease_rc");//-4 is rc
				 MIPS_ASM::jal("global_dispose");
				 MIPS_ASM::pop("ra");

			 }
		 }
		 MIPS_ASM::printComment("gc done");

	 }

};
int IfNode :: if_label = 0;
#endif;