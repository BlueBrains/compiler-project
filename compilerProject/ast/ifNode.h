#pragma once
#include "node.h"

class IfNode :
	public Node
{
protected:
	Node* _condtion;
	Node* _scoop;

public:
	static	int 	if_label;
	IfNode(Node* son, Node* next, Node* condition, Node* scoop) :Node(son,next,ifNode), _condtion(condition),_scoop(scoop)
	{


	}

};