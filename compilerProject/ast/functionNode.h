#pragma once
#ifndef __FUNCTIONNODE__
#define __FUNCTIONNODE__
#include"..\ST\Function.h"
class FunctionNode :public Node
{
private:
	Function* function_node;
	vector<Node*> df_par;
	vector<Node*> _par;
public:
	Function* get_function()
	{
		return function_node;
	}
	FunctionNode() :function_node(NULL), Node(NULL, NULL)
	{

	}
	FunctionNode(Function* f, Node* son, Node*next) :function_node(f), Node(son, next)
	{

	}
	FunctionNode(Function* f, Node* son, Node*next, int l, int c, vector<Node*> dfpar, vector<Node*> par) :function_node(f), Node(son, next, l, c)
	{
		this->function_node = f;
		this->df_par = dfpar;
		this->_par = par;
	}
	virtual void print()
	{
		cout << getNodeType() << function_node->get_name() << endl;
	}
	virtual string getNodeType()
	{
		return "FunctionNode";
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
		MIPS_ASM::reserveStack(getFrameSize());
		temp = this->Son;
		//here generate code
		while (temp)
		{
			temp->setOffset(this->getFrameSize());
			temp->generateCode();
			temp = temp->Next;
		}
		//
		MIPS_ASM::releaseStack(getFrameSize());

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
#endif