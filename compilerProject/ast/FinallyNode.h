#pragma once
#include "node.h"

class FinallyNode :
	public Node
{
protected:
	Node* _scoop;

public:
	static	int 	finally_label;
	FinallyNode(Node* son, Node* next, Node* scoop) :Node(son,next,finallyNode), _scoop(scoop)
	{


	}

};