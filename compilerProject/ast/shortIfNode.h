#pragma once
#ifndef __SHORTIFNODE__
#define __SHORTIFNODE__
#include"Node.h"
#include"..\ST\Type.h"

class shortIfNode :public Node
{
private:
	Node* first;
	Node* condition;
	Node* second;
public:
	
	shortIfNode() : Node(NULL, NULL)
	{

	}
	shortIfNode( Node* son, Node*next) :  Node(son, next)
	{

	}
	shortIfNode(Node* first,  Node* condition, Node* second, Node* son, Node*next, int l, int c) :first(first), second(second), condition(condition), Node(son, next, l, c)
	{

	}
	virtual void print()
	{
		
		cout << getNodeType() <<endl;
		cout << "First :";
		first->print();
		cout << "condetion is ";
		condition->print();
		cout << "second :";
		second->print();
	}
	virtual string getNodeType()
	{
		return "shortIfNODE";
	}

	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		pair<void*, string> p1;
		pair<void*, string> p2;
		condition->check(n);
			p1=first->check(n,from_right);
		p2=second->check(n,from_right);
		//pi here is the output of symbol table for types
		return pi;
	}
};
#endif