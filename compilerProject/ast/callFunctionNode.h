#pragma once
#ifndef __FUNCTIONNODE__
#define __FUNCTIONNODE__
#include"Node.h"
#include"..\ST\Function.h"
class CallFunctionNode :public Node
{
private:
	string ID;
	Function* Function_call = NULL;
public:
	Function* get_function()
	{
		return Function_call;
	}
	CallFunctionNode() :Function_call(NULL), Node(NULL, NULL, FunctionCall)
	{

	}
	CallFunctionNode(string id, Function* f, Node* son, Node*next) :ID(id), Function_call(f), Node(son, next, FunctionCall)
	{

	}
};
#endif