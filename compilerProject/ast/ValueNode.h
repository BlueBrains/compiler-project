#pragma once
#ifndef __TYPENODE__
#define __TYPENODE__
#include"Node.h"
#include"..\ST\Type.h"
#include<sstream>
enum Types {
	INT, FLOAT, CHAR, LONG, STRINGS, True, False
};
class ValueNode :public Node
{
private:
	Types varType;
	void* VarValue;
public:
	void* get_value()
	{
		return VarValue;
	}
	Types get_types()
	{
		return varType;
	}
	ValueNode() :varType(INT), Node(NULL, NULL)
	{

	}
	ValueNode(void* v1, Types type, Node* son, Node*next) :VarValue(v1), varType(type), Node(son, next)
	{

	}
	ValueNode(void* v1, Types type, Node* son, Node*next,int l_no,int c_no) :VarValue(v1), varType(type), Node(son, next,l_no,c_no)
	{

	}
	virtual void generateCode(){
		void * g = get_value();
		if (get_types() == 0)
		{
			MIPS_ASM::li("t9", *(int*)(g));
			MIPS_ASM::push("t9");
		}
		else if (get_types() == 1)
		{
			MIPS_ASM::li("t9", *(int*)(void*)&(*(float*)(g)));
			MIPS_ASM::push("t9");
		}
		else if (get_types() == 2)
		{
			MIPS_ASM::li("t9", *(char*)(g));
			MIPS_ASM::push("t9");
		}
		else if (get_types() == 3)
		{
			MIPS_ASM::li("t9", *(long*)(g));
			MIPS_ASM::push("t9");
		}
		else if (get_types() == 4)
		{
			std::ostringstream ss;
			char* s = reinterpret_cast<char*>(g);
			ss << s;
			MIPS_ASM::la("t9", MIPS_ASM::getStringAdressLabel(ss.str()));
			MIPS_ASM::push("t9");
		}
		else if (get_types() == 5)
		{

			MIPS_ASM::li("t9", true);
			MIPS_ASM::push("t9");
		}
		else if (get_types() == 6)
		{
			//string x = *(string*)(g);
			MIPS_ASM::li("t9", false);
			MIPS_ASM::push("t9");
		}
	}
	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		void * g = get_value();
		
		string x;
		//cout << getNodeType() << "     ";
		if (get_types() == 0)
		{
			x = "int";
		}
		else if (get_types() == 1)
		{
			x = "float";
		}
		else if (get_types() == 2)
		{
			x = "char";
		}
		else if (get_types() == 3)
		{
			x = "long";
		}
		else if (get_types() == 4)
		{
			x = "string";
		}
		else if (get_types() == 5)
		{
			x = "true";
		}
		else if (get_types() == 6)
		{
			//string x = *(string*)(g);
			x = "false";
		}
		pi = make_pair(VarValue,x);
		//pi here is the output of symbol table for types
		return pi;
	}
	virtual void print()
	{
		//cout << getNodeType()<<
		void * g = get_value();
		cout << getNodeType()<<"     ";
		if (get_types() == 0)
		{
			int x = *(int*)(g);
			cout << "value is " << x << endl;
		}
		else if (get_types() == 1)
		{
			float x = *(float*)(g);
			cout << "value is " << x << endl;
		}
		else if (get_types() == 2)
		{
			char x = *(char*)(g);
			cout << "value is " << x << endl;
		}
		else if (get_types() == 3)
		{
			long x = *(long*)(g);
			cout << "value is " << x << endl;
		}
		else if (get_types() == 4)
		{
			//char* x = new char[100];
			//string x = *(static_cast<string*>(g));//(char*)(g);//

			//strcpy(x, (*(static_cast<string*>(g))).c_str());
			string x = "amer";
			std::ostringstream ss;
			char* s = reinterpret_cast<char*>(g);
			ss << s;
			cout << "value is " << ss.str() << endl;
		}
		else if (get_types() == 5)
		{
			//string x = *(string*)(g);
			cout << "value is true"  << endl;
		}
		else if (get_types() == 6)
		{
			//string x = *(string*)(g);
			cout << "value is false" << endl;
		}
		//this->generateCode();
	}
	virtual string getNodeType()
	{
		return "ValueNode";
	}
};
#endif