#pragma once
#ifndef __FUNCTIONNODE__
#define __FUNCTIONNODE__
#include"..\ST\Function.h"
class FunctionNode :public Node
{
private:
	Function* function_node;
	vector<Node*> df_par;
	bool has_return=false;
public:
	Function* get_function()
	{
		return function_node;
	}
	void set_hasReturn(bool r)
	{
		this->has_return = true;
	}
	bool get_hasReturn()
	{
		return this->has_return;
	}
	FunctionNode() :function_node(NULL), Node(NULL, NULL)
	{

	}
	FunctionNode(Function* f, Node* son, Node*next) :function_node(f), Node(son, next)
	{

	}
	FunctionNode(Function* f, Node* son, Node*next, int l, int c, vector<Node*> dfpar) :function_node(f), Node(son, next, l, c)
	{
		this->function_node = f;
		this->df_par = dfpar;
	}
	virtual void print()
	{
		cout << getNodeType() << function_node->get_name() << endl;
	}
	virtual string getNodeType()
	{
		return "FunctionNode";
	}
	void researve_var(Node* node)
	{
		if (node->getNodeType() == "IDNode")
		{
			static_cast<IDNode*>(node)->get_variable()->setOffset(this->getNextOffset(4));
		}
		if (node->Next)
		{
			researve_var(node->Next);
		}
		if (node->Son)
		{
			researve_var(node->Son);
		}
	}
	virtual void generateCode()
	{
		Node* temp = this->Son;
		this->researve_var(temp);
		/*
		MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
		MIPS_ASM::add_instruction("sw $fp, 0($sp)\n");
		MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
		MIPS_ASM::add_instruction("sw $ra, 0($sp)\n");*/
		MIPS_ASM::printComment("begin function call");
		MIPS_ASM::push("ra");
		MIPS_ASM::push("fp");
		MIPS_ASM::reserveStack(getFrameSize());
		//MIPS_ASM::add_instruction("move $fp, $sp\n");
		MIPS_ASM::move("fp", "sp");
		temp = this->Son;
		//here generate code
		while (temp)
		{
			//temp->setOffset(this->getFrameSize());
			temp->generateCode();
			temp = temp->Next;
		}
		//
		MIPS_ASM::releaseStack(getFrameSize());
		/*
		MIPS_ASM::add_instruction("add $sp, $sp, 4\n");
		MIPS_ASM::add_instruction("lw $ra,0($sp)\n");
		MIPS_ASM::add_instruction("add $sp, $sp, 4\n");
		MIPS_ASM::add_instruction("lw $fp 0($sp)\n");*/
		MIPS_ASM::pop("fp");
		MIPS_ASM::pop("ra");
		MIPS_ASM::push("v0");
		MIPS_ASM::jr();
		MIPS_ASM::printComment("end function call");
		//MIPS_ASM::push("v0");
	}
	virtual void before_generateCode(){
		Node* temp = this->Son;
		//here generate code
		while (temp)
		{
			//temp->setOffset(this->getFrameSize());
			temp->before_generateCode();
			temp = temp->Next;
		}
		//
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