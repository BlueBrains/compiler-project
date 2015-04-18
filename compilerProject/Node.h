#pragma once
#ifndef __NODE__
#define __NODE__
#include<string>
using namespace std;
class Node
{
public :
	Node* Next;
	Node* Son;
	Node(Node* son, Node* next) :Next(next), Son(son)
	{}
	Node()
	{
		Next = nullptr;
		Son = nullptr;
	}
	~Node()
	{
		
	}
	virtual void print()
	{

	}
	virtual string getNodeType()
	{
		return "Node";
	}
};
#endif