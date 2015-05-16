#pragma once
#include "node.h"

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
		_condtion->generateCode();
		Node* temp = this->Son;
		while (temp)
		{
			if (temp->getNodeType() == "IDNode")
			{
				static_cast<IDNode*>(temp)->get_variable()->setOffset(this->getNextOffset(4));
			}
			temp = temp->Next;
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