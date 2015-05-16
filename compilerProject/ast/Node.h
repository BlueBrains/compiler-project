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
	string my_type="NULL";
	string _offsetReg = "fp";
	int _currentInnerOffset;
	string string_val="";
	Node(Node* son, Node* next) :Next(next), Son(son)
	{
		getId();
		_currentInnerOffset = 0;
	}
	Node(Node* son, Node* next, int line_no, int col_no) :Next(next), Son(son), _lineNo(line_no), _colNo(col_no)
	{
		getId();
		_currentInnerOffset = 0;
	}
	Node()
	{
		Next = nullptr;
		Son = nullptr;
		_currentInnerOffset = 0;
	}
	int getNextOffset(int newSize){
		int t = _currentInnerOffset;
		_currentInnerOffset += newSize;
		return t;
	}
	int getFrameSize(){
		return _currentInnerOffset;
	}
	virtual string getOffsetRegister()
	{
		return _offsetReg;
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