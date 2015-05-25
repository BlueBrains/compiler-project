#pragma once
#ifndef __DOTEDNODE__
#define __DOTEDNODE__
#include"ast\Node.h"

#include"ST\Type.h"
#include"ast\CallVariableNode.h"
#include"ast\callFunctionNode.h"
#include"ast\ArrayElementNode.h"
#include"ast\ClassNode.h"
#include "ast\CallTypeNode.h"
#include"ast\functionNode.h"
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
	Type* checkType(char* name, Type* t)
	{
		Type * v = (Type*)t->getScope()->m->get(name, "Class");
		string s;
		int x = 0;
		if (!v){
			v = checkTypeFromInhertanceLoop(t, name, s, x);
			if (v)
			{
				if (x > 1)
					cout << "ambigious type in parents types " << s << endl;
			}
			else
			{
				Scope * temp = t->getScope()->parent;
				while (temp && !v){
					v = (Type*)temp->m->get(name, "Class");
					temp = temp->parent;
				}
			}
		}
		return v;
	}
	vector<Node*>my_outer;
	bool myfrom_right = false;
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
		for (int i = 0; i < dot_vector.size(); i++)
			dot_vector.at(i)->print();
		
	}
	virtual string getNodeType()
	{
		return "DotNode";
	}
	virtual pair<void*, string> check(vector<Node*>outer_node, bool from_right)
	{
		this->my_outer = outer_node;
		this->myfrom_right = from_right;
		return pi;
	}
	 pair<void*,string> check2(vector<Node*>outer_node,bool from_right)
	{
		bool by_self = false;
		bool is_static = false;
		Type* t1 = NULL;
		Type* t = NULL;
		Function *f = NULL;
		Function *outer_f = NULL;
		Variable* v = NULL;
		void* temp_void;
		int i = outer_node.size() - 1;
		if (outer_node.at(i)->getNodeType() != "ClassNode")
		{
			Node* temp2 = outer_node.at(i);
			while (outer_node.at(i)->getNodeType() != "ClassNode")
			{
				if (outer_node.at(i)->getNodeType() == "FunctionNode")
				{
					outer_f = static_cast<FunctionNode*>(temp2)->get_function();
				}
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
						if (j+1 == dot_vector.size())
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
								if (from_right)
								{
									if (!v->init)
										cout << "Error: non-initialized variable " << x << "  at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
								}
							}
							else
							{
								cout << "Error: variable is not found" << x << " at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
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
								if (((v) && (!is_static)) || ((v) &&(v->get_static()) && (is_static)))
								{
									if ((v->getAccessModifier() == "private") || (v->getAccessModifier() == "protected"))
									{
										cout << "Error: variable should by public" << x << " at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
									}
									test->set_variable(v);
								}
								else if (v && !v->get_static()&& is_static)
								{
									cout << "Error: variable should by static" << x << " at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
								}

							}
							pi = make_pair(v, "Variable");

						}
						else{
							//on generating code (x.y.z)
							char* p = const_cast<char *>(x.c_str());
							v = checkVariable(t1, p, temp->_lineNo, temp->_colNo);
							if (!v)
							{
								t1=this->checkType(p, t1);
								if (!t1)
								{
									cout << "Error: variable is not found" << x << " at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
									t1 = NULL;
									break;
								}
								else
								{
									is_static = true;

								}
									
								
							}
							else
							{
								if (v->get_lastType() == "type")
								{
									t1 = (Type*)(v->get_lastTypes().second);
								}
								else
									cout << "Error: variable must have class type" << x << " at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
							}
							
							
						}

					}
				}
			}
			else if (temp->getNodeType() == "CallFunctionNode")
			{
				CallFunctionNode* test = static_cast<CallFunctionNode*>(temp);
				string x = test->getID();
				char* p = const_cast<char *>(x.c_str());
				if ((by_self))
				{
					f = checkFunction(t1, p, temp->_lineNo, temp->_colNo);
					if (f)
					{
						if (f->get_private())
						{
							cout << "Error: Function should by public" << x << " at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
						}
						static_cast<CallFunctionNode*>(temp)->set_function(f);
						if (f->getparameters().size() != 0)
						{

						}
					}
					by_self = false;
				}
				pi = make_pair(f, "Function");
			}
			else if (temp->getNodeType() == "CallTypeNode")
			{
				CallTypeNode* test = static_cast<CallTypeNode*>(temp);
				string x = test->getID();
				char* p = const_cast<char *>(x.c_str());
				t1 = this->checkType(p, t1);
				if (!t1)
				{
					cout << "Error: type is not found" << x << " at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
					t1 = NULL;
					break;
				}
				else
					static_cast<CallTypeNode*>(temp)->setType(t1);
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
	void checkForStatic(string id,Node* n)
	{

	}
	virtual void generateCode()
	{
		Node* temp;
		this->check2(my_outer, myfrom_right);
		for (int i = 0; i < dot_vector.size(); i++)
		{
			temp = dot_vector.at(i);
			if (temp->getNodeType() == "CallVariableNode")
			{
				CallVariableNode* test = static_cast<CallVariableNode*>(temp);
				string x = test->getID();
				if (x == "self")
				{
					continue;

				}
				else
				{
					if (i > 0)
						temp->_offsetReg = "t0";
					temp->generateCode();
				}
					
			}
			else
				if (temp)
					temp->generateCode();
			this->my_type = temp->my_type;
			if (temp->my_type == "string")
			{
				this->string_val = temp->string_val;
			}
		}
	}
};
#endif