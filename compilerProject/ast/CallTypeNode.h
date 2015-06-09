#pragma once
#ifndef __CALLNODE__
#define __CALLNODE__
#include"..\ST\Type.h"
//#include"..\ST\Function.h"
#include "functionNode.h"
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
	bool is_object = false;
	void init_inhertance(Type* t)
	{
		Node* temp_class;
		for (int i = 0; i < t->getInheritedType().size(); i++)
		{
			temp_class = t->getInheritedType().at(i)->type_node;
			Node* temp = temp_class->Son;
			while (temp)
			{
				if (temp->getNodeType() == "AssignmentNode" && (!static_cast<AssignmentNode*>(temp)->coded))
				{
					if (static_cast<AssignmentNode*>(temp)->get_left()->getNodeType() == "CallVariableNode")
					{
						static_cast<AssignmentNode*>(temp)->get_left()->_offsetReg = "s1";
					}
					temp->generateCode();
				}
				temp = temp->Next;
			}
			init_inhertance(t->getInheritedType().at(i));
		}
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
	Type* checkTypeforinhertance(char* name, vector<Node*>outer_node)
	{
		Type*t, *t1=NULL;
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
		if (t->getInheritedType().size() == 0)
		{
			cout << "ERROR: there no inhertance types to call in line: " << _lineNo << endl;
		}
		else
		{
			int i;

			for ( i = 0; i < t->getInheritedType().size(); i++)
			{
				if (strcmp(t->getInheritedType().at(i)->get_name(), name) == 0)
				{
					t1 = t->getInheritedType().at(i);
					//check for argument
					break;

				}
			}
			if (i == t->getInheritedType().size())
			{
				cout << "ERROR: There no type name is " << name << "in inheratance list" << endl;
			}
		}
		return t1;
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
	virtual void before_generateCode(){

		if (f)
		{
			func_vec.push_back(this->f->get_FunctionNode());
			this->f->get_FunctionNode()->before_generateCode();
			//this->my_type = this->Function_call->get_FunctionNode()->my_type;
		}

	}
	virtual void generateCode()
	{
		if ((!this->f)||(!this->t))
		{
			return;
		}
		if (is_object)
		{
			this->my_type = "type";
			this->type_val = t;
			//MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
			t->type_node->getNextOffset(4);
			t->type_node->generateCode();
			MIPS_ASM::li("v0", 9);
			MIPS_ASM::li("a0", t->type_node->getFrameSize());
			MIPS_ASM::add_instruction("syscall\n");
			MIPS_ASM::move("s1", "v0");
			MIPS_ASM::la("t9", MIPS_ASM::getStringAdressLabel(t->get_name()));
			//MIPS_ASM::push("t9");
			MIPS_ASM::add_instruction("sw $t9,0($s1) \n");


			Node* temp = t->type_node->Son;
			while (temp)
			{
				if (temp->getNodeType() == "AssignmentNode" && (!static_cast<AssignmentNode*>(temp)->coded))
				{
					if ((static_cast<AssignmentNode*>(temp)->get_left()->getNodeType() == "CallVariableNode"))
					{
						static_cast<AssignmentNode*>(temp)->get_left()->_offsetReg = "s1";
					}
					temp->generateCode();
				}
				temp = temp->Next;
			}
			this->init_inhertance(t);
			MIPS_ASM::move("a0", "s1");
			MIPS_ASM::jal(f->get_label());
			func_vec.push_back(this->f->get_FunctionNode());
			this->f->get_FunctionNode()->before_generateCode();
			//MIPS_ASM::add_instruction("add $sp,$sp,4\n");
			MIPS_ASM::push("s1");
		}
		else
		{
			//MIPS_ASM::move("a0", "s1");
			MIPS_ASM::lw("a0", 0, "fp");
			MIPS_ASM::jal(f->get_label());
			MIPS_ASM::li("v0", 0);
			MIPS_ASM::add_instruction("add $sp,$sp,4\n");
			func_vec.push_back(this->f->get_FunctionNode());
			this->f->get_FunctionNode()->before_generateCode();
			//MIPS_ASM::add_instruction("add $sp,$sp,4\n");
			//MIPS_ASM::push("s1");
		}
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
		Type* t1;
		string x = this->getID();
		char* p = const_cast<char *>(x.c_str());
		if (from_right)
		{
			
			 t1 = checkType(p, n);
			if (!t1)
				cout << "Error: Type not found " << x << " at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
			else
			{
				this->setType(t1);
				f = (Function*)t1->getScope()->m->get("__init__", "Function");
			}
			is_object = true;
		}
		else
		{
			int i = n.size() - 1;
			char* gh = static_cast<FunctionNode*>(n.at(i))->get_function()->get_name();
			//((n.at(i)->getNodeType() == "FunctionNode") && (checkSuper(n.at(i)->Son)))
			if ((n.at(i)->getNodeType() != "FunctionNode") 
				|| ((n.at(i)->getNodeType() == "FunctionNode") && (strcmp(gh, "__init__")!=0)))
			{
				cout << "ERROR : call to super must be in constructor at line:" << _lineNo << endl;
				is_object = false;
			}
			else
			{
				is_object = false;
				t1 = checkTypeforinhertance(p, n);
				if (!t1)
					cout << "Error: Type not found " << x << " at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
				else
				{
					this->setType(t1);
					f = (Function*)t1->getScope()->m->get("__init__", "Function");
				}
			}
		}

		pi = make_pair(t1,"type");

		return pi;
	}
	bool checkSuper(Node* t)
	{
		bool found = false;
		while (t != this && (t->getNodeType() == "CallTypeNode"))
		{
			t = t->Next;
		}
		if (t == this)
			found = true;
		return found;
	}
};
#endif