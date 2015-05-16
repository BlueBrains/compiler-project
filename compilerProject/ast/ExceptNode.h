#pragma once
#include "node.h"

class ExceptNode :
	public Node
{
protected:
	Node* _scoop;
	Node* _exception;

public:
	static	int 	try_label;
	ExceptNode(Node* son, Node* next, Node* exception, Node* scoop) :Node(son,next), _exception(exception), _scoop(scoop)
	{

	}
	virtual void print()
	{
		cout << "except node " << endl;
		if (_exception)
			_exception->print();
	}
	virtual string getNodeType()
	{
		return "ExceptNode";
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

};