#pragma once
#ifndef __BOOLEANNODE__
#define __BOOLEANNODE__
#include"Node.h"
#include"..\ST\Type.h"
enum boolean_operand {
	AND_OP,OR_OP,NOT_OP
};
class BooleanNode :public Node
{
private:
	Node* first;
	boolean_operand op;
	Node* second;
public:
	boolean_operand get_operand()
	{
		return op;
	}
	BooleanNode() :op(AND_OP), Node(NULL, NULL)
	{

	}
	BooleanNode(boolean_operand op, Node* son, Node*next) : op(op), Node(son, next)
	{

	}
	BooleanNode(boolean_operand op, Node* son, Node*next, int l, int c) : op(op), Node(son, next, l, c)
	{

	}
	BooleanNode(Node* first,Node* second,boolean_operand op, Node* son, Node*next, int l, int c) :first(first),second(second), op(op), Node(son, next, l, c)
	{

	}
	virtual void print()
	{
		string x;
		if (op == 0)
		{
			x = "AND";
		}
		else if (op == 1)
		{
			x = "OR";
		}
		else if (op == 2)
		{
			x = "NOT";
		}
		cout << getNodeType() << x<<endl;
		if ((op==0)||(op==1))
			first->print();
		second->print();
	}
	virtual string getNodeType()
	{
		return "BooleanNODE";
	}

	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		pair<void*, string> p1;
		pair<void*, string> p2;
		if ((op == 0) || (op == 1))
			p1=first->check(n,from_right);
		p2=second->check(n,from_right);
		//pi here is the output of symbol table for types
		return pi;
	}
};
#endif