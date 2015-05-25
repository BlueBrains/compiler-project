#pragma once
#ifndef __INPUTNODE__
#define __INPUTNODE__
#include"Node.h"
#include"..\ST\Type.h"
#include<sstream>
enum input_Types {
	INT_input, FLOAT_input, STRING_input
};
class inputNode :public Node
{
private:
	input_Types inputType;
	Node* str;
public:
	input_Types get_types()
	{
		return inputType;
	}
	inputNode() :inputType(INT_input), Node(NULL, NULL)
	{

	}
	inputNode(Node* v1, input_Types type, Node* son, Node*next) :str(v1), inputType(type), Node(son, next)
	{

	}
	inputNode(Node* v1, input_Types type, Node* son, Node*next, int l_no, int c_no) :str(v1), inputType(type), Node(son, next, l_no, c_no)
	{

	}
	virtual void before_generateCode(){
		if (get_types() == 0)
		{
			this->my_type = "int";
			
		}
		else if (get_types() == 1)
		{
			this->my_type = "float";
		
		}
		else if (get_types() == 2)
		{
			this->my_type = "string";
		}
	}
	virtual void generateCode(){
		string t0 = "t0";
		if (str)
		{
			MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
			str->generateCode();
			MIPS_ASM::pop(t0);

			if (str->my_type == "string")
			{
				MIPS_ASM::li("v0", 4);
				MIPS_ASM::add_instruction("move $a0,$t0\n");
				MIPS_ASM::add_instruction("syscall\n");
			}
			if (get_types() == 0)
			{
				this->my_type = "int";
				MIPS_ASM::li("v0", 5);
			}
			else if (get_types() == 1)
			{
				MIPS_ASM::li("f0", 6);
				this->my_type = "float";
			}
			else if (get_types() == 2)
			{
				string h=MIPS_ASM::addStringAdressLabel();
				MIPS_ASM::li("v0", 8);
				MIPS_ASM::la("a0", h);
				MIPS_ASM::li("a1", 64);
				this->my_type = "string";
			}
			MIPS_ASM::add_instruction("syscall\n");
			MIPS_ASM::push("v0");
		}
	}
	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		
		//pi here is the output of symbol table for types
		return pi;
	}
	virtual void print()
	{
		cout << getNodeType()<<"   ";
		if (str)
			str->print();
		cout << endl;
		//cout << getNodeType()<<
		
		//this->generateCode();
	}
	virtual string getNodeType()
	{
		return "inputNode";
	}
};
#endif