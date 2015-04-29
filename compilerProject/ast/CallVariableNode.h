#pragma once
#ifndef __VARIABLENODE__
#define __VARIABLENODE__
#include"Node.h"
#include"..\ST\Variable.h"
//#include"ast\CallVariableNode.h"
#include"callFunctionNode.h"
#include"ArrayElementNode.h"
#include"IDNode.h"
#include"ClassNode.h"
using namespace std;
class CallVariableNode :public Node
{
private:
	string ID;

	Variable* variable_node;
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
	void set_variable(Variable* v)
	{
		variable_node = v;
	}
	Variable* get_variable()
	{
		return variable_node;
	}
	string getID()
	{
		return ID;
	}
	CallVariableNode() :variable_node(NULL), Node(NULL, NULL)
	{
		variable_node = NULL;
	}
	CallVariableNode(string id, Variable* v, Node* son, Node*next) :ID(id), variable_node(v), Node(son, next)
	{

	}
	CallVariableNode(string id, Variable* v, Node* son, Node*next,int l_no,int c_no) :ID(id), variable_node(v), Node(son, next,l_no,c_no)
	{

	}
	virtual void print()
	{
		cout << getNodeType() << "  " << ID;
		if (variable_node)
		{
			cout << "   variable name "<<variable_node->get_name();
		}
		
		cout << endl;
	}
	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		Variable*v;
			string h = this->getID();
			v = checkVarFromCurrentNode(h, n);
			if (!v)
				cout << "Error :variable Not found " << h << " at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
			pi = make_pair(v, "Variable");

		return pi;
	}
	virtual string getNodeType()
	{
		return "CallVariableNode";
	}
};
#endif