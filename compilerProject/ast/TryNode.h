#pragma once
#include "node.h"

class TryNode :
	public Node
{
protected:
	Node* _scoop;

public:
	static	int 	try_label;
	TryNode(Node* son, Node* next, Node* scoop, int l, int c) :Node(son, next,l,c), _scoop(scoop)
	{


	}
	virtual void print()
	{
		cout << "try" << endl;
	}
	virtual string getNodeType()
	{
		return "TryNode";
	}

};