#pragma once
#ifndef __CALLNODE__
#define __CALLNODE__
#include"Node.h"
#include"ST\Type.h"
#include"ST\Function.h"
#include<string>
using namespace std;
class CallNode :public Node
{
private:
	string ID;
	vector<string>argument;
	Type* t = NULL;
	Function* f = NULL;
public:
	
	CallNode() :ID(NULL), Node(NULL, NULL, idNode)
	{

	}
	CallNode(string id,vector<string>arg, Node* son, Node*next) :ID(id),argument(arg), Node(son, next, idNode)
	{

	}
	void setType(Type* t)
	{
		this->t = t;
	}
	Type* getType()
	{
		return t;
	}
	void detFunction(Function* f)
	{
		this->f = f;
	}
	Function* getFunction()
	{
		return f;
	}

};
#endif