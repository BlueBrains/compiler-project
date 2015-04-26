#pragma once
#ifndef __CALLNODE__
#define __CALLNODE__
#include"Node.h"
#include"..\ST\Type.h"
#include"..\ST\Function.h"
#include<string>
using namespace std;
class CallTypeNode :public Node
{
private:
	string ID;
	vector<char*>argument;
	Type* t;
	Function* f;
public:
	
	CallTypeNode() :ID(NULL), Node(NULL, NULL)
	{
		t = NULL;
		f = NULL;
	}
	string getID()
	{
		return ID;
	}
	CallTypeNode(string id, vector<char*>arg, Node* son, Node*next) :ID(id), argument(arg), Node(son, next)
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
	void getFunction(Function* f)
	{
		this->f = f;
	}
	Function* getFunction()
	{
		return f;
	}
	virtual void print()
	{
		cout << getNodeType() << " type name is " << ID;
		if (t)
		{
			cout << " real " << t->get_name();
		}
		cout << endl;
	}
	virtual string getNodeType()
	{
		return "CallTypeNode";
	}

};
#endif