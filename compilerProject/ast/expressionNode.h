#pragma once
#ifndef __EXPRESSIONNODE__
#define __EXPRESSIONNODE__
#include"Node.h"
#include"..\ST\Type.h"
enum operand {
	PLUS, MINUS, MULT, DIV,MOD,GREATHER,LESS,EQUALGREATHER,EQUALLESS,EQUALS,NOTEQUAL
};
class ExpressionNode :public Node
{
private:
	Node* first;
	operand op;
	Node* second;
	Variable* checkVarFromCurrentNode(string id, vector<Node*>outer_node)
	{
		int i = outer_node.size() - 1;
		Node* temp = outer_node.back();
		Node* temp2;
		Variable* v = NULL;
		if (outer_node.at(i)->getNodeType() == "ClassNode")
		{
			Type* tt = static_cast<ClassNode*>(outer_node.at(i))->get_type();
			temp2 = outer_node.at(i)->Son;
			while (temp2->Next)
			{
				if ((temp2->getNodeType() == "IDNode"))
				{
					if (strcmp(id.c_str(), static_cast<IDNode*>(temp2)->get_variable()->get_name()) == 0)
					{
						v = static_cast<IDNode*>(temp2)->get_variable();
						break;
					}
				}
				temp2 = temp2->Next;
			}
		}
		else
		{
			bool found = false;
			while (outer_node.at(i)->getNodeType() != "ClassNode")
			{
				temp2 = outer_node.at(i)->Son;
				while (temp2->Next)
				{
					if ((temp2->getNodeType() == "IDNode"))
					{
						if (strcmp(id.c_str(), static_cast<IDNode*>(temp2)->get_variable()->get_name()) == 0)
						{
							v = static_cast<IDNode*>(temp2)->get_variable();
							found = true;
							break;
						}
					}
					temp2 = temp2->Next;
					if (found)
						break;
				}
				i--;
			}
		}

		return v;

	}
public:
	operand get_operand()
	{
		return op;
	}
	ExpressionNode() :op(PLUS), Node(NULL, NULL)
	{

	}
	ExpressionNode(operand op, Node* son, Node*next) : op(op), Node(son, next)
	{

	}
	ExpressionNode(operand op, Node* son, Node*next,int l,int c ) : op(op), Node(son, next,l,c)
	{

	}
	ExpressionNode(Node* first,Node* second,operand op, Node* son, Node*next, int l, int c) :first(first),second(second), op(op), Node(son, next, l, c)
	{

	}
	virtual void print()
	{
		string x;
		if (op == 0)
		{
			x = "+";
		}
		else if (op == 1)
		{
			x = "-";
		}
		else if (op == 2)
		{
			x = "*";
		}
		else if (op == 3)
			x = "/";
		else
			x = "ANOTHER ";
		cout << getNodeType() << x<<endl;
		first->print();
		second->print();
	}
	virtual string getNodeType()
	{
		return "BinaryNODE";
	}

	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		pair<void*, string> p1;
		pair<void*, string> p2;
		p1=first->check(n,from_right);
		p2=second->check(n,from_right);
		//pi here is the output of symbol table for types
		return pi;
	}
};
#endif