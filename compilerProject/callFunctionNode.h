#pragma once
#ifndef __CALLFUNCTIONNODE__
#define __CALLFUNCTIONNODE__
#include"Node.h"
#include"ST\Function.h"
class CallFunctionNode :public Node
{
private:
	string ID;
	Node* arguments;
	Function* Function_call = NULL;
public:
	Function* get_function()
	{
		return Function_call;
	}
	CallFunctionNode() :Function_call(NULL), Node(NULL, NULL)
	{

	}
	CallFunctionNode(string id,Node*args, Function* f, Node* son, Node*next) :ID(id), Function_call(f), arguments(args), Node(son, next)
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