#pragma once
#include "node.h"

class ElseNode :
	public Node
{
protected:
	Node* _scoop;

public:
	static	int 	else_label;
	ElseNode(Node* son, Node* next, Node* scoop) :Node(son,next), _scoop(scoop)
	{


	}
	ElseNode(Node* son, Node* next, Node* scoop,int l,int c) :Node(son, next,l,c), _scoop(scoop)
	{


	}
	virtual void print()
	{
		cout << "else node" << endl;
	}
	virtual string getNodeType()
	{
		return "ElseNode";
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
};