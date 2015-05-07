#pragma once
#ifndef __NODE__
#define __NODE__
#include<string>
#include<vector>
#include<iostream>
#include "../mips_asm.h"
using namespace std;
extern pair<void*, string>pi;

class Node
{
private:

	static int NodeCount;
	int _id = -1;
public :
	Node* Next;
	Node* Son;
	int _lineNo = 0;
	int _colNo = 0;

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
	virtual pair<void*, string> check(vector<Node*>n,bool from_right=false)
	{
		int* o = NULL;
		pi = make_pair(o, "NULL");
		return pi;
	}
	virtual void generateCode(){
		cout << "Not implmented yet!!!!!!!!!!\n";
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

#endif