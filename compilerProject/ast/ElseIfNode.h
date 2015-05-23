#pragma once
#include "node.h"

class ElseIfNode :
	public Node
{
protected:
	Node* _condtion;
	Node* _scoop;

public:
	static	int 	elseIf_label;
	ElseIfNode(Node* son, Node* next, Node* condition, Node* scoop) :Node(son,next), _condtion(condition),_scoop(scoop)
	{



	}
	ElseIfNode(Node* son, Node* next, Node* condition, Node* scoop,int l,int c) :Node(son, next,l,c), _condtion(condition), _scoop(scoop)
	{



	}
		virtual void generateCode()
	{
		Node* temp = this->Son;
		while (temp)
		{
			if (temp->getNodeType() == "IDNode")
			{
				static_cast<IDNode*>(temp)->get_variable()->setOffset(this->getNextOffset(4));
			}
			temp = temp->Next;
		}
	}
	virtual void before_generateCode(){
	}
	virtual void print()
	{
		cout << "elseif node" << endl;
	}
	virtual string getNodeType()
	{
		return "ElseIfNode";
	}

};