#pragma once
#include "node.h"

class ExceptNode :
	public Node
{
protected:
	Node* _scoop;
	Node* _exception;

public:
	static	int 	try_label;
	ExceptNode(Node* son, Node* next, Node* exception, Node* scoop) :Node(son,next), _exception(exception), _scoop(scoop)
	{

	}
	virtual void print()
	{
		cout << "except node " << endl;
	}
	virtual string getNodeType()
	{
		return "ExceptNode";
	}

};