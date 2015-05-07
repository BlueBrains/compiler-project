#pragma once
#ifndef __CALLFUNCTIONNODE__
#define __CALLFUNCTIONNODE__
#include"..\ST\Function.h"
//#include"ast/CallVariableNode.h"
//#include"ast/callVariableNode.h"
#include"CallVariableNode.h"
class CallFunctionNode :public Node
{
private:
	string ID;
	Node* arguments;
	Function* Function_call = NULL;
public:
	void set_function(Function* f)
	{
		this->Function_call = f;
	}

	int arg_len(){
		int i = 0;
		while (arguments->Next)
		{
			i++;
		}
		return i;
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
	CallFunctionNode(string id,Node*args, Function* f, Node* son, Node*next) :ID(id), Function_call(f), arguments(args), Node(son, next)
	{

	}
	CallFunctionNode(string id, Node*args, Function* f, Node* son, Node*next,int l,int c) :ID(id), Function_call(f), arguments(args), Node(son, next,l,c)
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