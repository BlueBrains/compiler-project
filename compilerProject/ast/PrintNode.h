#pragma once
#include "node.h"

class PrintNode :
	public Node
{
protected:
	Node* _scoop;

public:
	static	int 	print_label;
	PrintNode(Node* son, Node* next, Node* scoop) :Node(son,next,printNode),_scoop(scoop)
	{


	}

};