#pragma once
#ifndef __ARRAYELEMNODE__
#define __ARRAYELEMNODE__
#include"Node.h"
#include"..\ST\Variable.h"
class ArrayElementNode :public Node
{
private:
	string ID;
	Variable* v;
	Node* index;
public:
Node* get_index()	{
		return index;
	}
Variable* get_variable()
{
	return v;
}
void set_variable(Variable* v)
{
	this->v = v;
}
	ArrayElementNode() :v(NULL),index(NULL), Node(NULL, NULL)
	{

	}
	ArrayElementNode(Variable*v,Node* index, Node* son, Node* next) :ID(""),v(v), index(index), Node(son, next)
	{

	}
	ArrayElementNode(Variable*v, Node* index, Node* son, Node* next, int line_no, int col_no) :ID(""), v(v), index(index), Node(son, next,line_no,col_no)
	{

	}
	ArrayElementNode(string id,Variable*v, Node* index, Node* son, Node* next) :ID(id),v(v), index(index), Node(son, next)
	{

	}
	ArrayElementNode(string id, Variable*v, Node* index, Node* son, Node* next,int line_no,int col_no) :ID(id), v(v), index(index), Node(son, next,line_no,col_no)
	{

	}
	virtual void print()
	{
		cout << "ARRAY Enelment NODE !" << endl;
		if (v)
		{
			cout << "array name is " << v->get_name() << endl;
			index->print();
		}
	
	}
	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		if (!v->get_isarray())
		{
			cout << "Error: variable is not array" << v->get_name() << " at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
		}
		pi = make_pair(v, "Variable");
		return pi;
	}
	virtual string getNodeType()
	{
		return "ArrayElementNode";
	}
	string getID()
	{
		return ID;
	}
};
#endif