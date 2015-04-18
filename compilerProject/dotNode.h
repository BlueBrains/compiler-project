#pragma once
#ifndef __DOTEDNODE__
#define __DOTEDNODE__
#include"Node.h"
#include<string>
using namespace std;
class DotNode :public Node
{
private:
	
public:
	
	DotNode() : Node(NULL, NULL)
	{

	}
	DotNode( Node* son, Node*next) : Node(son, next)
	{

	}
	virtual void print()
	{
		cout << getNodeType() << endl;
	}
	virtual string getNodeType()
	{
		return "DotNode";
	}
};
#endif