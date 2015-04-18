#pragma once
#ifndef __FUNCTIONNODE__
#define __FUNCTIONNODE__
#include"Node.h"
#include"ST\Function.h"
class FunctionNode :public Node
{
private:
	Function* function_node;
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
	virtual void print()
	{
		cout << getNodeType() << function_node->get_name() << endl;
	}
	virtual string getNodeType()
	{
		return "FunctionNode";
	}
};
#endif