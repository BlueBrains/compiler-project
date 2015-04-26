#pragma once
#include "node.h"

class ElseNode :
	public Node
{
protected:
	Node* _scoop;

public:
	static	int 	else_label;
	ElseNode(Node* son, Node* next, Node* scoop) :Node(son,next), _scoop(scoop)
	{


	}
	virtual void print()
	{
		cout << "else node" << endl;
	}
	virtual string getNodeType()
	{
		return "ElseNode";
	}

};