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
	CallVariableNode() :variable_node(NULL), Node(NULL, NULL, VariableCall)
	{

	}
	CallVariableNode(string id, Variable* v, Node* son, Node*next) :ID(id), variable_node(v), Node(son, next, VariableCall)
	{

	}
};
#endif