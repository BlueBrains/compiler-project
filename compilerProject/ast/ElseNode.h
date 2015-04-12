#pragma once
#include "node.h"

class ElseNode :
	public Node
{
protected:
	Node* _scoop;

public:
	static	int 	else_label;
	ElseNode(Node* son, Node* next, Node* scoop) :Node(son,next,elseNode), _scoop(scoop)
	{


	}

};