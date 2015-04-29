#pragma once
#ifndef __GLOBALNODE__
#define __GlobalNODE__
#include "node.h"

class GlobalNode :
	public Node
{
protected:
	Node* _scoop;

public:
	static	int 	global_label;
	GlobalNode(Node* son, Node* next, Node* scoop) :Node(son,next),_scoop(scoop)
	{

	}

};
#endif;