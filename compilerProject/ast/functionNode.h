#pragma once
#ifndef __FUNCTIONNODE__
#define __FUNCTIONNODE__
#include"..\ST\Function.h"
#include"AssignmentNode.h"
class FunctionNode :public Node
{
private:
	Function* function_node;
	vector<Node*> df_par;
	vector<AssignmentNode *> Just_defualt;
	bool has_return=false;
public:
	Function* get_function()
	{
		return this->function_node;
	}
	vector<Node*> get_parameter()
	{
		return this->df_par;
	}
	void set_hasReturn(bool r)
	{
		this->has_return = true;
	}
	vector<AssignmentNode *> get_defualt(){
		return this->Just_defualt;
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
		shallow_cpy();
	}
	virtual void print()
	{
		cout << getNodeType() << function_node->get_name() << endl;
	}
	virtual string getNodeType()
	{
		return "FunctionNode";
	}
	void shallow_cpy(){
		if (df_par.size() > 0){
			Node *temp = this->df_par.at(0);
			while (temp->Next != NULL){
				if (temp->Next->getNodeType() == "AssignmentNode")
				{
					AssignmentNode *tempA = new AssignmentNode(static_cast<AssignmentNode*>(temp->Next));
					this->Just_defualt.push_back(tempA);
				}
				temp = temp->Next;
			}
		}
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
		if (!function_node->get_static())
		{
			//for self 
			this->getNextOffset(4);
		}
		if (temp)
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
		MIPS_ASM::move("fp", "sp");
		int off_set = 0;
		for (int i = 0; i < function_node->getparameters().size(); i++)
		{
			if (!function_node->get_static())
			{
				off_set = 4;
			}
			//off_set += -function_node->getparameters().at(i)->getOffset() + 2 * function_node->getparameters().size() * 4 + 8;
			MIPS_ASM::lw("t0", off_set - function_node->getparameters().at(i)->getOffset(), "s5");
			MIPS_ASM::sw("t0", function_node->getparameters().at(i)->getOffset(), "fp");
			off_set = 0;
		}
		//MIPS_ASM::add_instruction("move $fp, $sp\n");
		
		if (!function_node->get_static())
		{
			//for self 
			MIPS_ASM::sw("a0", 0, "fp");
		}
		temp = this->Son;
		//here generate code
		while (temp)
		{
			//temp->setOffset(this->getFrameSize());
			temp->generateCode();
			temp = temp->Next;
		}
		//
		if (strcmp(function_node->get_name(), "__init__") == 0)
		{
			MIPS_ASM::lw("s1", 0, "fp");
		}
		MIPS_ASM::releaseStack(getFrameSize());
		/*
		MIPS_ASM::add_instruction("add $sp, $sp, 4\n");
		MIPS_ASM::add_instruction("lw $ra,0($sp)\n");
		MIPS_ASM::add_instruction("add $sp, $sp, 4\n");
		MIPS_ASM::add_instruction("lw $fp 0($sp)\n");*/
		MIPS_ASM::pop("fp");
		MIPS_ASM::pop("ra");
		//MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
		//MIPS_ASM::push("v0");
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
			//cout << temp->getNodeType() << endl;
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