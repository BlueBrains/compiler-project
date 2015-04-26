#pragma once
#ifndef __NODE__
#define __NODE__
#include<string>
#include<string>
using namespace std;
class Node
{
private:
	int _id=-1;
public :
	Node* Next;
	Node* Son;
	int _lineNo = 0;
	int _colNo = 0;
	static int NodeCount;
	Node(Node* son, Node* next) :Next(next), Son(son)
	{
		getId();
	}
	Node(Node* son, Node* next, int line_no, int col_no) :Next(next), Son(son), _lineNo(line_no), _colNo(col_no)
	{
		getId();
	}
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
	int getId(){
		if (_id == -1){
			_id = ++NodeCount;
		}
		return _id;
	}
	
};
int Node::NodeCount = 0;
#endif