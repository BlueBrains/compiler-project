#pragma once
#ifndef __ARRAYNODE__
#define __ARRAYNODE__
#include<string>
#include<vector>
#include<iostream>
#include"ast/Node.h"
using namespace std;
class ArrayNode:public Node
{
public:
	vector<Node*> element;
	ArrayNode(vector<Node*> elem, Node* son, Node* next) :element(elem), Node(son,next)
	{}
	ArrayNode(vector<Node*> elem, Node* son, Node* next,int line_no,int col_no) :element(elem), Node(son, next,line_no,col_no)
	{}
	ArrayNode()
	{
		
	}
	~ArrayNode()
	{

	}
	Node* getonid(int id)
	{
		if (id < element.size())
			return element.at(id);
		else//with error
			return NULL;
	}
	virtual void print()
	{
		cout << getNodeType()<<" and the element is  :"<<endl;
		for (int i = 0; i < element.size(); i++)
			element.at(i)->print();
	}
	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		for (int i = 0; i < element.size(); i++)
			element.at(i)->check(n,true);
		return pi;
	}
	virtual string getNodeType()
	{
		return "ArrayNode";
	}
};
#endif