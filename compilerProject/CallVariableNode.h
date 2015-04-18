#pragma once
#ifndef __VARIABLENODE__
#define __VARIABLENODE__
#include"Node.h"
#include"ST\Variable.h"
class CallVariableNode :public Node
{
private:
	string ID;
	Variable* variable_node=NULL;
public:
	Variable* get_variable()
	{
		return variable_node;
	}
	string getID()
	{
		return ID;
	}
	CallVariableNode() :variable_node(NULL), Node(NULL, NULL)
	{

	}
	CallVariableNode(string id, Variable* v, Node* son, Node*next) :ID(id), variable_node(v), Node(son, next)
	{

	}
	virtual void print()
	{
		cout << getNodeType() << "  " << ID;
		if (variable_node)
		{
			cout << "   variable name "<<variable_node->get_name();
		}
		cout << endl;
	}
	virtual string getNodeType()
	{
		return "CallVariableNode";
	}
};
#endif