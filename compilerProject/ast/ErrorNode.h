#pragma once
#ifndef __ERRORNODE__
#define __ERRORNODE__
#include<string>
#include<vector>
#include<iostream>
#include "Node.h"
using namespace std;

class ErrorNode:public Node
{
private:

	string error;
public :
	ErrorNode(string error, Node* son, Node* next, int line_no, int col_no) :error(error), Node(son,next,line_no,col_no)
	{
	}
	virtual void print()
	{
		cout << getNodeType() << " the error is: " << error << " at " << this->_lineNo << endl;
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
		return "ErrorNode";
	}
};

#endif