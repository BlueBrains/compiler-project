#pragma once
#include "node.h"

class DelNode :
	public Node
{
protected:
	Node* _scoop;

public:
	static	int 	del_label;
	DelNode(Node* son, Node* next, Node* scoop) :Node(son,next),_scoop(scoop)
	{

	}

};