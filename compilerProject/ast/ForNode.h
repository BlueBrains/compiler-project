#pragma once
#include "node.h"

class ForNode :
	public Node
{
protected:
	Node* _expr;
	Node* _range;
	Node* _scoop;

public:
	static	int 	for_label;
	ForNode(Node* son, Node* next, Node* expr, Node* range, Node* scoop) :Node(son,next,forNode), _expr(expr), _range(range),_scoop(scoop)
	{


	}

};