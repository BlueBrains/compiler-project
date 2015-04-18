#pragma once
#ifndef __IDNODE__
#define __IDNODE__
#include"Node.h"
#include"ST\Variable.h"
class IDNode :public Node
{
private:
	Variable* variable_node;
public:
	Variable* get_variable()
	{
		return variable_node;
	}
	IDNode() :variable_node(NULL), Node(NULL, NULL)
	{

	}
	IDNode(Variable* v, Node* son, Node*next) :variable_node(v), Node(son, next)
	{

	}
	virtual void print()
	{
		cout << getNodeType() << "   " << variable_node->get_name() << endl;
	}
	virtual string getNodeType()
	{
		return "IDNode";
	}
};
#endif