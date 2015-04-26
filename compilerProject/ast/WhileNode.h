#pragma once
#ifndef __WHILENODE__
#define __WHILENODE__
#include"Node.h"
#include"..\ST\Type.h"
class WhileNode :public Node
{
private:
	Node* conditionNode;
	Node* _scoop;
public:
	Node* get_condition()
	{
		return conditionNode;
	}
	WhileNode() :conditionNode(NULL), Node(NULL, NULL)
	{

	}
	WhileNode(Node* son, Node* next, Node* condition, Node* scoop) :conditionNode(condition), _scoop(scoop), Node(son, next)
	{

	}
	virtual void print()
	{
		cout << "WHILE NODE !" << endl;

	}
	virtual string getNodeType()
	{
		return "WhileNode";
	}

};
#endif