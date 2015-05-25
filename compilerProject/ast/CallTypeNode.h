#pragma once
#ifndef __CALLNODE__
#define __CALLNODE__
#include"..\ST\Type.h"
#include"..\ST\Function.h"
#include "AssignmentNode.h"
#include<string>
using namespace std;
class CallTypeNode :public Node
{
private:
	string ID;
	vector<char*>argument;
	Type* t;
	Function* f;
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
	Type* checkType(char* name, vector<Node*>outer_node)
	{
		Type*t;
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
public:
	CallTypeNode() :ID(NULL), Node(NULL, NULL)
	{
		t = NULL;
		f = NULL;
	}
	string getID()
	{
		return ID;
	}
	CallTypeNode(string id, vector<char*>arg, Node* son, Node*next) :ID(id), argument(arg), Node(son, next)
	{

	}
	CallTypeNode(string id, vector<char*>arg, Node* son, Node*next,int l_no,int c) :ID(id), argument(arg), Node(son, next,l_no,c)
	{

	}
	void setType(Type* t)
	{
		this->t = t;
	}
	Type* getType()
	{
		return t;
	}
	void getFunction(Function* f)
	{
		this->f = f;
	}
	Function* getFunction()
	{
		return f;
	}
	virtual void generateCode()
	{
		this->my_type = "type";
		this->type_val = t;
		MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
		t->type_node->getNextOffset(4);
		t->type_node->generateCode();
		MIPS_ASM::li("v0", 9);
		MIPS_ASM::li("a0", t->type_node->getFrameSize());
		MIPS_ASM::move("t0", "v0");
		MIPS_ASM::la("t9", MIPS_ASM::getStringAdressLabel(t->get_name()));
		MIPS_ASM::sw("t9", 0, "t0");
		Node* temp = this->Son;
		while (temp)
		{
			 if (temp->getNodeType() == "AssignmentNode")
			{
				 if (static_cast<AssignmentNode*>( temp)->get_left()->getNodeType() == "CallVariableNode")
				 {
					 static_cast<AssignmentNode*>(temp)->get_left()->_offsetReg = "t0";
				 }
				temp->generateCode();
			}
		}
		MIPS_ASM::jal(f->get_label());
		func_vec.push_back(this->f->get_FunctionNode());
		MIPS_ASM::push("t0");
	}
	virtual void print()
	{
		cout << getNodeType() << " type name is " << ID;
		if (t)
		{
			cout << " real " << t->get_name();
		}
		cout << endl;
	}
	virtual string getNodeType()
	{
		return "CallTypeNode";
	}
	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		string x = this->getID();
		char* p = const_cast<char *>(x.c_str());
		Type* t1 = checkType(p,n);
		if (!t1)
			cout << "Error: Type not found " << x << " at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
		else
		{
			this->setType(t1);

		}
		pi = make_pair(t1,"type");

		return pi;
	}

};
#endif