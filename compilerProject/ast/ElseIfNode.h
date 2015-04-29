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
	ElseIfNode(Node* son, Node* next, Node* condition, Node* scoop) :Node(son,next), _condtion(condition),_scoop(scoop)
	{



	}
	ElseIfNode(Node* son, Node* next, Node* condition, Node* scoop,int l,int c) :Node(son, next,l,c), _condtion(condition), _scoop(scoop)
	{



	}
	virtual void print()
	{
		cout << "elseif node" << endl;
	}
	virtual string getNodeType()
	{
		return "ElseIfNode";
	}

};