#pragma once
#ifndef __ASSIGNNODE__
#define __ASSIGNNODE__
#include"Node.h"
#include"ST\Variable.h"
class AssignmentNode :public Node
{
private:
	
public:

	AssignmentNode() : Node(NULL, NULL)
	{

	}
	AssignmentNode( Node* son, Node*next) : Node(son, next)
	{

	}
	virtual void print()
	{
		cout << getNodeType() << endl;
	}
	virtual string getNodeType()
	{
		return "AssignmentNode";
	}
};
#endif