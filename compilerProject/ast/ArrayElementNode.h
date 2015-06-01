#pragma once
#ifndef __ARRAYELEMNODE__
#define __ARRAYELEMNODE__
#include"Node.h"
#include"..\ST\Variable.h"
class ArrayElementNode :public Node
{
private:
	string ID;
	Variable* v;
	Node* index;
	
public:
	bool from_left = false;
Node* get_index()	{
		return index;
	}
Variable* get_variable()
{
	return v;
}
void set_variable(Variable* v)
{
	this->v = v;
}
	ArrayElementNode() :v(NULL),index(NULL), Node(NULL, NULL)
	{
		//v->set_arrayNode
	}
	ArrayElementNode(Variable*v,Node* index, Node* son, Node* next) :ID(""),v(v), index(index), Node(son, next)
	{

	}
	ArrayElementNode(Variable*v, Node* index, Node* son, Node* next, int line_no, int col_no) :ID(""), v(v), index(index), Node(son, next,line_no,col_no)
	{

	}
	ArrayElementNode(string id,Variable*v, Node* index, Node* son, Node* next) :ID(id),v(v), index(index), Node(son, next)
	{

	}
	ArrayElementNode(string id, Variable*v, Node* index, Node* son, Node* next,int line_no,int col_no) :ID(id), v(v), index(index), Node(son, next,line_no,col_no)
	{

	}
	virtual void generateCode()
	{
		if (from_left)
		{
			MIPS_ASM::lw("t0", v->getOffset(), this->getOffsetRegister());
			//v0 contains the address in memorry to be used later in assignment
			MIPS_ASM::push("t0");
			index->generateCode();
			MIPS_ASM::pop("t1");
			MIPS_ASM::pop("t0");
			MIPS_ASM::add_instruction("sll $t1,$t1,2\n");
			MIPS_ASM::add_instruction("add $t2,$t0,$t1\n");
			MIPS_ASM::add_instruction("addi $v0, $t2, 0\n");
			MIPS_ASM::push("t2");
		}
		else
		{
			MIPS_ASM::lw("t0", v->getOffset(), this->getOffsetRegister());
			//v0 contains the address in memorry to be used later in assignment
			MIPS_ASM::add_instruction(string("addi $v0,$") + this->getOffsetRegister()
				+ "," + std::to_string(v->getOffset()) + "\n");
			MIPS_ASM::push("t0");
			index->generateCode();
			MIPS_ASM::pop("t1");
			MIPS_ASM::pop("t0");
			MIPS_ASM::add_instruction("sll $t1,$t1,2\n");
			MIPS_ASM::add_instruction("add $t2,$t0,$t1\n");
			MIPS_ASM::lw("t3", 0, "t2");
			MIPS_ASM::push("t3");
			this->my_type = "int";
		}
		
	}
	virtual void print()
	{
		cout << "ARRAY Enelment NODE !" << endl;
		if (v)
		{
			cout << "array name is " << v->get_name() << endl;
			index->print();
		}
	
	}
	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		if (!v->get_isarray())
		{
			cout << "Error: variable is not array" << v->get_name() << " at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
		}
		pi = make_pair(v, "Variable");
		//this->from_right = from_right;
		return pi;
	}
	virtual string getNodeType()
	{
		return "ArrayElementNode";
	}
	string getID()
	{
		return ID;
	}
};
#endif