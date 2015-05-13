#pragma once
#ifndef __IDNODE__
#define __IDNODE__
#include"Node.h"
#include"..\ST\Variable.h"

class IDNode :public Node
{
private:
	Variable* variable_node;
	void* var_node;
	string type;
public:
	Variable* get_variable()
	{
		return variable_node;
	}
	void* get_var()
	{
		return var_node;
	}
	string get_type()
	{
		return type;
	}
	IDNode() :variable_node(NULL), Node(NULL, NULL)
	{

	}
	IDNode(Variable* v, Node* son, Node*next) :variable_node(v), Node(son, next)
	{

	}
	IDNode(Variable* v, Node* son, Node*next,int l,int c) :variable_node(v), Node(son, next,l,c)
	{

	}
	virtual void print()
	{
		if (variable_node)
			cout << getNodeType() << "   " << variable_node->get_name() << endl;
	}
	virtual string getNodeType()
	{
		return "IDNode";
	}
};
#endif