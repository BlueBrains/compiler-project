#pragma once
#ifndef __CALLFUNCTIONNODE__
#define __CALLFUNCTIONNODE__
#include"CallVariableNode.h"
#include"..\ST\Function.h"
//#include"ast/CallVariableNode.h"
//#include"ast/callVariableNode.h"

class CallFunctionNode :public Node
{
private:
	string ID;
	vector <Node*> arguments;
	Function* Function_call = NULL;
public:
	void set_function(Function* f)
	{
		this->Function_call = f;
	}

	int arg_len(){	
		return this->arguments.size();
	}
	virtual void before_generateCode(){

		if (Function_call)
		{
			func_vec.push_back(this->Function_call->get_FunctionNode());
			this->Function_call->get_FunctionNode()->before_generateCode();
			this->my_type = this->Function_call->get_FunctionNode()->my_type;
			if (this->my_type == "string")
			{
				this->string_val = this->Function_call->get_FunctionNode()->string_val;
			}
		}
		
	}
	virtual void generateCode()
	{
		//this->Function_call->get_FunctionNode()->setOffset(this->getFrameSize());
		if (Function_call)
		{
			//MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
			MIPS_ASM::jal(this->Function_call->get_label());

			
			func_vec.push_back(this->Function_call->get_FunctionNode());
			this->Function_call->get_FunctionNode()->before_generateCode();
			this->my_type = this->Function_call->get_FunctionNode()->my_type;
			if (this->Function_call->has_return)
				MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
			else
				MIPS_ASM::add_instruction("add $sp,$sp,4\n");
			if (this->my_type == "string")
			{
				this->string_val = this->Function_call->get_FunctionNode()->string_val;
			}
		}
		else
		{

		}
		/*
		this->Function_call->get_FunctionNode()->generateCode();
		this->my_type = this->Function_call->get_FunctionNode()->my_type;
		if (this->my_type == "string")
		{
			this->string_val = this->Function_call->get_FunctionNode()->string_val;
		}
		MIPS_ASM::printComment(((this->Function_call->get_name())+ this->my_type));*/
	}
	bool check_para(Function*f)
	{

		for (int i = 0; i < f->getparameters().size(); i++)
		{
			/*
			if (arguments->getNodeType() == "CallVariableNode")
			{
				if (f->getparameters().at(i)->get_isarray() != static_cast<CallVariableNode*>(arguments)->get_variable()->get_isarray())
					return false;
			}*/
		}
		return false;
	}
	Function* get_function()
	{
		return Function_call;
	}
	string getID()
	{
		return ID;
	}
	CallFunctionNode() :Function_call(NULL), Node(NULL, NULL)
	{

	}
	CallFunctionNode(string id, vector <Node*> args, Function* f, Node* son, Node*next) :ID(id), Function_call(f), arguments(args), Node(son, next)
	{

	}
	CallFunctionNode(string id, vector <Node*> args, Function* f, Node* son, Node*next, int l, int c) :ID(id), Function_call(f), arguments(args), Node(son, next, l, c)
	{

	}
	virtual void print()
	{
		cout << getNodeType() << "  " << "the id is " << ID;
		if (Function_call)
		{
			cout << Function_call->get_name();
		}
		cout << endl;
	}
	virtual string getNodeType()
	{
		return "CallFunctionNode";
	}
};
#endif