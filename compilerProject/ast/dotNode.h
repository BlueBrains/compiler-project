#pragma once
#ifndef __DOTEDNODE__
#define __DOTEDNODE__
#include"AST/Node.h"
#include"ST\Type.h"

#include"ST/Variable.h"
#include"ST/Function.h"
#include<string>
using namespace std;

class DotNode :public Node
{
private:
	Variable* checkVariableFromInhertanceLoop(Type* t, char* name, string& toto, int& t_num)
	{
		Variable* v = NULL;
		int j = 0;
		vector<Type*>i_t = t->getInheritedType();
		string s = "";
		for (int i = 0; i < i_t.size(); i++)
		{
			v = (Variable*)i_t.at(i)->getScope()->m->get(name, "Variable");
			if (v)
			{
				toto = toto + v->get_name() + " ";
				t_num++;
			}
			else
			{
				checkVariableFromInhertanceLoop(i_t.at(i), name, toto, t_num);
			}

		}
		return v;
	}
	Variable* checkVariable(Type* t, char* name, int lineNo, int colNo)
	{
		Variable* v = (Variable*)t->getScope()->m->get(name, "Variable");
		if (!v){
			int j = 0;
			string s;
			v = checkVariableFromInhertanceLoop(t, name, s, j);
			if (v)
			{
				if (j > 1)
					cout << "ambigious variable in parents types " << s << endl;
			}
			else
			{
				cout << "Error :variable Not found " << name << " at Line No:" << lineNo << " Column No:" << colNo << endl;
			}
		}
		return v;
	}

	Function* checkFunction(Type* t, char* name, int lineNo, int colNo)
	{
		Function * f = (Function*)t->getScope()->m->get(name, "Function");
		if (!f){
			int j = 0;
			vector<Type*>i_t = t->getInheritedType();
			for (int i = 0; i < i_t.size(); i++)
			{
				f = (Function*)i_t.at(i)->getScope()->m->get(name, "Function");
				j++;
			}
			if (!f)
			{
				cout << "Error :Function Not found " << name << " at Line No:" << lineNo << " Column No:" << colNo << endl;
			}
			else
			{
				if (j > 1)
					cout << "ambigious function in parents types";
			}
		}
		return f;
	}
	Type* checkTypeFromInhertanceLoop(Type* t, char* name, string& toto, int& t_num)
	{
		Type* v = NULL;
		int j = 0;
		vector<Type*>i_t = t->getInheritedType();
		string s = "";
		for (int i = 0; i < i_t.size(); i++)
		{
			v = (Type*)i_t.at(i)->getScope()->m->get(name, "Class");
			if (v)
			{
				toto = toto + v->get_name() + " ";
				t_num++;
			}
			else
			{
				checkTypeFromInhertanceLoop(i_t.at(i), name, toto, t_num);
			}

		}
		return v;
	}
public:
	vector<Node*>dot_vector;
	DotNode() : Node(NULL, NULL)
	{
		
	}
	DotNode( Node* son, Node*next) : Node(son, next)
	{

	}
	DotNode(Node* son, Node*next, int line_no, int col_no) : Node(son, next, line_no, col_no)
	{

	}
	DotNode(vector<Node*>dot,Node* son, Node*next, int line_no, int col_no) :dot_vector(dot), Node(son, next, line_no, col_no)
	{

	}
	virtual void print()
	{
		cout << getNodeType() << endl;
	}
	virtual string getNodeType()
	{
		return "DotNode";
	}
	
	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		Type* t1 = NULL;
		Type* t = NULL;
		Function *f = NULL;
		Variable* v = NULL;
		void* temp_void;
		int i = outer_node.size() - 1;
		if (outer_node.at(i)->getNodeType() != "ClassNode")
		{
			Node* temp2 = outer_node.at(i);
			while (outer_node.at(i)->getNodeType() != "ClassNode")
			{
				i--;
				temp2 = outer_node.at(i);
			}
			t = static_cast<ClassNode*>(temp2)->get_type();
		}
		else
			t = static_cast<ClassNode*>(outer_node.back())->get_type();
		t1 = t;
		Node* temp = this->Son;
		Node* temp2 = dot_vector.front();
		int j = 0;
		while (j<dot_vector.size())
		{
			temp = dot_vector.at(j);
			if (temp->getNodeType() == "CallVariableNode")
			{
				CallVariableNode* test = static_cast<CallVariableNode*>(temp);
				string x = test->getID();
				if (x == "self")
				{
					by_self = true;

				}
				else
				{
					if ((by_self))
					{
						if (temp->Next == NULL)
						{
							char* p = const_cast<char *>(x.c_str());
							v = checkVariable(t, p, temp->_lineNo, temp->_colNo);
							if (v)
							{
								Function* fo;
								int i = outer_node.size() - 1;
								if (outer_node.at(i)->getNodeType() != "ClassNode")
								{
									Node* temp2 = outer_node.at(i);
									while (outer_node.at(i)->getNodeType() != "FunctionNode")
									{
										i--;
										temp2 = outer_node.at(i);
									}
									fo = static_cast<FunctionNode*>(temp2)->get_function();
									if (fo->get_static() && !v->get_static())
									{
										cout << "Error: non-static variable " << x << " cannot be referenced from a static context at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
									}
								}
								//cout << "v name is " << v->get_name() << endl;
								static_cast<CallVariableNode*>(temp)->set_variable(v);
								pi = make_pair(v, "Variable");
							}
						}
						else
						{
							//on generating code (self.x.y)
						}
						by_self = false;
					}
					else
					{
						if (temp->Next == NULL)
						{
							char* p = const_cast<char *>(x.c_str());
							if (t1)
							{
								v = checkVariable(t1, p, temp->_lineNo, temp->_colNo);
								if (v)
								{
									test->set_variable(v);
								}
							}
							pi = make_pair(v, "Variable");

						}
						else{
							t1 = NULL;
							//on generating code (x.y.z)
						}

					}
				}
			}
			else if (temp->getNodeType() == "callFunctionNode")
			{
				CallFunctionNode* test = static_cast<CallFunctionNode*>(temp);
				string x = test->getID();
				char* p = const_cast<char *>(x.c_str());
				if ((by_self))
				{
					f = checkFunction(t1, p, temp->_lineNo, temp->_colNo);
					if (f)
					{
						static_cast<CallFunctionNode*>(temp)->set_function(f);
						if (f->getparameters().size() != 0)
						{

						}
					}
					by_self = false;
				}
				pi = make_pair(f, "Function");
			}
			else if (temp->getNodeType() == "ArrayElementNode")
			{
				ArrayElementNode* test = static_cast<ArrayElementNode*>(temp);
				string x = test->getID();
				char* p = const_cast<char *>(x.c_str());
				if ((by_self))
				{
					v = checkVariable(t, p, temp->_lineNo, temp->_colNo);
					if ((v) && (v->get_isarray()))
					{
						//cout << "v name is " << v->get_name() << endl;
						static_cast<ArrayElementNode*>(temp)->set_variable(v);
					}
					else if (!v->get_isarray())
					{
						cout << "Error: variable is not array" << x << " at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
					}
					by_self = false;
				}
				pi = make_pair(v, "Variable");
			}
			//temp = temp->Next;
			j = j + 1;

		}
		return pi;
	}
};
#endif