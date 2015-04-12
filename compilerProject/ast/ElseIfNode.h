#pragma once
#include "node.h"

class ElseIfNode :
	public Node
{
protected:
	Node* _condtion;
	Node* _scoop;

public:
	static	int 	elseIf_label;
	ElseIfNode(Node* son, Node* next, Node* condition, Node* scoop) :Node(son,next,elseIfNode), _condtion(condition),_scoop(scoop)
	{


	}

};