#pragma once
#include "node.h"

class FinallyNode :
	public Node
{
protected:
	Node* _scoop;

public:
	static	int 	finally_label;
	FinallyNode(Node* son, Node* next, Node* scoop) :Node(son,next), _scoop(scoop)
	{
		
	}
	virtual void print()
	{
		cout << "finally node";
	}
	virtual string getNodeType()
	{
		return "FinallyNode";
	}
	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		return pi;
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