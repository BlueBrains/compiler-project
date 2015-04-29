#pragma once
#include "node.h"

class FinallyNode :
	public Node
{
protected:
	Node* _scoop;

public:
	static	int 	finally_label;
	FinallyNode(Node* son, Node* next, Node* scoop) :Node(son,next), _scoop(scoop)
	{


	}
	virtual void print()
	{
		cout << "finally node";
	}
	virtual string getNodeType()
	{
		return "FinallyNode";
	}
	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		return pi;
	}

};