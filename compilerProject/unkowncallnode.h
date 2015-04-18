#pragma once
#ifndef __UNKOWNNODE__
#define __UNKOWNNODE__
#include"Node.h"
#include<string>
using namespace std;
class UnkownNode :public Node
{
private:
	Node* realNode;
	string ID;
public:
	Node* get_realNode()
	{
		return realNode;
	}
	void set_RealNode(Node* n)
	{
		realNode = n;
	}
	UnkownNode() :realNode(NULL), Node(NULL, NULL, Unkown)
	{

	}
	UnkownNode(string id, Node* son, Node*next) :ID(id), Node(son, next, Unkown)
	{

	}
	virtual void print()
	{
		//cout << "unkown";
	}
};
#endif