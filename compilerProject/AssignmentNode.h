#pragma once
#ifndef __ASSIGNNODE__
#define __ASSIGNNODE__
#include"Node.h"
#include"ST\Variable.h"
class AssignmentNode :public Node
{
private:
	
public:

	AssignmentNode() : Node(NULL, NULL, assignNode)
	{

	}
	AssignmentNode( Node* son, Node*next) : Node(son, next, assignNode)
	{

	}
};
#endif