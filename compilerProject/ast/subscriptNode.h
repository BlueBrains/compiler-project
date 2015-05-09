#pragma once
#ifndef __AUBSCRIPTNODE__
#define __AUBSCRIPTNODE__
#include"Node.h"
#include"..\ST\Variable.h"
#include <string>
class SubscriptNode :public Node
{
private:
	Node* first;
	Node* second;
public:

	SubscriptNode() : Node(NULL, NULL)
	{

	}
	SubscriptNode(Node* son, Node*next) : Node(son, next)
	{

	}
	SubscriptNode(Node* son, Node*next, int line_no, int col_no) : Node(son, next, line_no, col_no)
	{

	}
	SubscriptNode(Node* first, Node* second, Node* son, Node*next, int line_no, int col_no) :first(first), second(second), Node(son, next, line_no, col_no)
	{

	}
	virtual void print()
	{
		cout << getNodeType() << endl;
		cout << "left side :";
		first->print();
		cout << "right side :";
		second->print();
	}
	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		pair<void*, string> p1;
		pair<void*, string> p2;
		p1=first->check(n);
		p2=second->check(n,true);
		return p1;
	}
	virtual string getNodeType()
	{
		return "SubscriptNode";
	}
};
#endif