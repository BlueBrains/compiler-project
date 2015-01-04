#pragma once
#ifndef __My_Parser_H__
#define __My_Parser_H__
#include "ST\SymbolTable.h"
#include"ErrorRevovery.h"
#include<vector>

//===================== Data Structures From Help in Yacc ==============
struct Comparator_type {
	 Type* expected_type;

	Comparator_type(Type* _expected_type)
		: expected_type(_expected_type)
	{}

	bool operator()(Type* r1) const
	{
		if (*r1 == *expected_type)
		{
			return true;
		}
		else
		{
			return false;
		}

	} // Just an example using strcmp
};
class YaccSimpleType{
public:
	Type t;
};

class constraction
{
private:
	Type* type;
	vector<char*>inhertance_list;
	int LineNo, ColNo;
public:
	bool expect;
	Type* get_type()
	{
		return type;
	}
	int get_LineNo()
	{
		return LineNo;
	}
	int get_ColNo()
	{
		return ColNo;
	}
	vector<char*> get_inhertance_list()
	{
		return inhertance_list;
	}
	constraction(void)
	{
		type = new Type();
		expect = false;
		LineNo = 0;
		ColNo = 0;
	}
	constraction(Type*t)
	{
		type = new Type();
		this->type = t;
	}
	constraction(Type*t, bool exp, int L, int C)
	{
		this->type = new Type();
		this->type = t;
		this->expect = exp;
		this->LineNo = L;
		ColNo = C;
	}
	constraction(Type*t,vector<char*>inh, bool exp, int L, int C)
	{
		this->type = new Type();
		this->type = t;
		this->expect = exp;
		this->LineNo = L;
		for (int i = 0; i < inh.size(); i++)
		{
			inhertance_list.push_back(inh.at(i));
		}
		ColNo = C;
	}
	bool operator==(constraction xx)
	{
		if (*xx.type == *type)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
struct Comparator_constraction {
	constraction* expected_type;

	Comparator_constraction(constraction* _expected_type)
		: expected_type(_expected_type)
	{}

	bool operator()(constraction* r1) const
	{
		if (*r1 == *expected_type)
		{
			return true;
		}
		else
		{
			return false;
		}

	} // Just an example using strcmp
};
//======================================================================
class MyParser
{
public:
	SymbolTable * st;
	vector<constraction*>constraction_type;
	vector<Type*>outer_type;
	ErrorRecovery * errRecovery;
	MyParser(void);
	~MyParser(void);
	//YaccSimpleType* createYaccSimpleType(Type t);
	Variable* insertVar(char* n,char*acc_mod, int lineNo, int colNo);
	Variable* addVariableToCurrentScope(char* n, char*acc_mod, int lineNo, int colNo);
	Function * createTypeFunctionHeader(Type* tname, char* access, char* name, vector <char*> parameter, int lineNo, int colNo);
	Function * finishFunctionDeclaration(Function * f);
	Type * createType(char* name, vector<char*>inherted_list, int lineno, int colno, bool is_final);
	Type * finishTypeDeclaration(Type* t);
	Type* returninner( char* child, Type* t,int l,int c);
	Type* check_if_in_inner(constraction* t, char*x);
	void check_inhertance_list();
	void remove_vatiable(Variable* v);
	Variable* checkVariable(char* v,Type* t, int lineNo, int colNo);
};
#endif