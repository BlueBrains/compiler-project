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
	IfNode(Node* son, Node* next, Node* condition, Node* scoop) :Node(son,next), _condtion(condition),_scoop(scoop)
	{


	}
	IfNode(Node* son, Node* next, Node* condition, Node* scoop,int l,int c) :Node(son, next,l,c), _condtion(condition), _scoop(scoop)
	{


	}
	virtual void print()
	{
		cout << "IF NODE !" << endl;

	}
	virtual string getNodeType()
	{
		return "IfNode";
	}

};