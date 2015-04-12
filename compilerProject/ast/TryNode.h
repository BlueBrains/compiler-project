#pragma once
#include "node.h"

class TryNode :
	public Node
{
protected:
	Node* _scoop;

public:
	static	int 	try_label;
	TryNode(Node* son, Node* next, Node* scoop) :Node(son,next,tryNode), _scoop(scoop)
	{


	}

};