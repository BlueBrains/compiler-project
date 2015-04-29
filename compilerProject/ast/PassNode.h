#pragma once
#include "node.h"

class PassNode :
	public Node
{
protected:
	Node* _scoop;

public:
	static	int 	pass_label;
	PassNode(Node* son, Node* next, Node* scoop) :Node(son,next),_scoop(scoop)
	{

	}

};