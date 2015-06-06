#pragma once
#ifndef __NODE__
#define __NODE__
#include<string>
#include<vector>
#include<iostream>
#include "../mips_asm.h"
//#include"../ST/Type.h"
using namespace std;
class Node;
extern pair<void*, string>pi;
extern vector<Node*>func_vec;
extern vector<pair<string,string>>lastLabel;
class Node
{
private:

	static int NodeCount;
	int _id = -1;
	int _currentInnerOffset;
	int frame_size = 0;
public :
	Node* Next;

	Node* Son;
	int _lineNo = 0;
	int _colNo = 0;
	string my_type="NULL";
	string _offsetReg = "fp";
	
	string string_val="";
	void* type_val = NULL;
	Node(Node* son, Node* next) :Next(next), Son(son)
	{
		getId();
		_currentInnerOffset = 0;
	}
	Node(Node* other)
	{
		this->Next = NULL;
		_lineNo = other->_lineNo;
		_colNo = other->_colNo;
		my_type = other->my_type;
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
	void setOffset(int offset)
	{
		this->_currentInnerOffset = offset;
	}
	int getNextOffset(int newSize){
		int t = _currentInnerOffset;
		_currentInnerOffset += newSize;
		frame_size += newSize;
		return t;
	}
	int getFrameSize(){
		return frame_size;
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
	virtual void before_generateCode(){
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