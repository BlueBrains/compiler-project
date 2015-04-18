#pragma once
#ifndef __WHILENODE__
#define __WHILENODE__
#include"Node.h"
#include"ST\Type.h"
class WhileNode :public Node
{
private:
	Node* conditionNode;
public:
	Node* get_condition()
	{
		return conditionNode;
	}
	WhileNode() :conditionNode(NULL), Node(NULL, NULL)
	{

	}
	WhileNode(Node* t, Node* son, Node*next) :conditionNode(t), Node(son, next)
	{

	}
	virtual void print()
	{
		cout << getNodeType()<<endl;
	}
	virtual string getNodeType()
	{
		return "WhileNode";
	}
};
#endif