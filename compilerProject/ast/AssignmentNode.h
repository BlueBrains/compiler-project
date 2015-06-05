#pragma once
#ifndef __ASSIGNNODE__
#define __ASSIGNNODE__
#include"Node.h"
#include"..\ST\Variable.h"
#include<string>
using namespace std;
class AssignmentNode :public Node
{
private:
	Node* right_side;
	Node* left_side;
	void set_types(Variable* v,pair<void*,string>p)
	{
		if (p.second == "int")
		{
			v->set_lastTypes(*(int*)p.first);
		}
		else if (p.second == "float")
		{
			v->set_lastTypes(*(float*)p.first);
		}
		else if (p.second == "char")
		{
			v->set_lastTypes(*(char*)p.first);
		}
		else if (p.second == "long")
		{
			v->set_lastTypes(*(long*)p.first);
		}
		else if (p.second == "string")
		{
			std::ostringstream ss;
			char* s = reinterpret_cast<char*>(p.first);
			ss << s;
			v->set_lastTypes(ss.str());
		}
	}
public:
	bool coded=false;
	Node* get_right()
	{
		return right_side;
	}
	Node* get_left()
	{
		return left_side;
	}
	AssignmentNode() : Node(NULL, NULL)
	{

	}
	AssignmentNode( Node* son, Node*next) : Node(son, next)
	{

	}
	AssignmentNode(Node* son, Node*next,int line_no,int col_no) : Node(son, next,line_no,col_no)
	{

	}
	AssignmentNode(Node* first,Node* second,Node* son, Node*next, int line_no, int col_no) :left_side(first),right_side(second), Node(son, next, line_no, col_no)
	{

	}
	virtual void before_generateCode(){
		if (left_side->getNodeType() == "ArrayElementNode")
		{
			static_cast<ArrayElementNode*>(left_side)->from_left = true;
		}
		right_side->before_generateCode();
		left_side->before_generateCode();
		left_side->my_type = right_side->my_type;
		if (left_side->getNodeType() == "CallVariableNode")
		{
			static_cast<CallVariableNode*>(left_side)->get_variable()->strLasttype = right_side->my_type;
			if (left_side->my_type == "string")
			{
				static_cast<CallVariableNode*>(left_side)->get_variable()->set_lastTypes(right_side->string_val);
			}
			else if (left_side->my_type == "type")
			{
				static_cast<CallVariableNode*>(left_side)->get_variable()->set_lastTypes(right_side->type_val);
			}
		}
		
	}
	virtual void generateCode()
	{
		string t1 = "t1";
		string t0 = "t0";
		string mem_addr = "sp";
		if (left_side->getNodeType() == "ArrayElementNode")
		{
			static_cast<ArrayElementNode*>(left_side)->from_left = true;
		}
		MIPS_ASM::printComment("Assign node");
		
		MIPS_ASM::printComment("Assign node RHS:");

		right_side->generateCode();

		MIPS_ASM::printComment("LHS:");
		left_side->generateCode();

		MIPS_ASM::printComment("Assign node poping old val:");

		MIPS_ASM::pop("t1");
		MIPS_ASM::printComment("Assign node getting RHS val:");

		MIPS_ASM::top(t0);// not poping in order to keep value in stack
		// todo check if v0 isnot null in run time
		// todo check if we can assign 
		MIPS_ASM::printComment("Assign node storing in position val:");
		left_side->my_type = right_side->my_type;
		if (left_side->getNodeType() == "CallVariableNode")
		{
			static_cast<CallVariableNode*>(left_side)->get_variable()->strLasttype = right_side->my_type;
			if (left_side->my_type == "string")
			{
				static_cast<CallVariableNode*>(left_side)->get_variable()->set_lastTypes(right_side->string_val);
			}
			else if (left_side->my_type == "type")
			{
				static_cast<CallVariableNode*>(left_side)->get_variable()->set_lastTypes(right_side->type_val);
			}
		}
		if (left_side->my_type == "float")
		{
			//MIPS_ASM::pop(t0);// not poping in order to keep value in stack
			MIPS_ASM::popf("f0");// not poping in order to keep value in stack

			MIPS_ASM::add_instruction("cvt.w.s $f0,$f0\n");
			MIPS_ASM::pushf("f0");// not poping in order to keep value in stack
			MIPS_ASM::top(t0);
		}
	
		MIPS_ASM::sw(t0, 0, "v0");
		MIPS_ASM::add_instruction("add $sp,$sp,4\n");
	}
	virtual void print()
	{
		cout << getNodeType() << endl;
		cout << "left side :";
		left_side->print();
		cout << "right side :";
		right_side->print();
//		right_side->generateCode();
	}
	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		pair<void*, string> p1;
		pair<void*, string> p2;
		p1=left_side->check(n);
		p2=right_side->check(n,true);
		if (p1.second == "Variable")
		{
			if ((Variable*)p1.first)
			{
				((Variable*)p1.first)->init = true;
				/*
				if (left_side->getNodeType() != "ArrayElementNode")
				{
					((Variable*)p1.first)->set_isarray(false);
					((Variable*)p1.first)->set_arrayNode(NULL);
				}*/
				if (right_side->getNodeType() == "ValueNode")
				{
					this->set_types((Variable*)p1.first,p2);
				}
				else if (right_side->getNodeType() == "CallVariableNode")
				{
					Variable* t = static_cast<CallVariableNode*>(this->right_side)->get_variable();
					if (t)
					{
						((Variable*)p1.first)->set_lastTypes(t->get_lastType(), true);
					}
				}
				else
				{
					((Variable*)p1.first)->set_lastTypes();
				}
			}
			
		}
		return p1;
	}
	virtual string getNodeType()
	{
		return "AssignmentNode";
	}
};
#endif