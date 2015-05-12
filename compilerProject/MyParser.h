#pragma once
#ifndef __My_Parser_H__
#define __My_Parser_H__
#include "ST\SymbolTable.h"
#include"ErrorRevovery.h"
#include<vector>
using namespace std;
//===================== Data Structures From Help in Yacc ==============
struct Comparator_char {
	char* expected_char;

	Comparator_char(char* _expected_char)
		: expected_char(_expected_char)
	{}

	bool operator()(char* r1) const
	{
		if (strcmp(r1, expected_char) == 0)
		{
			return true;
		}
		else
		{
			return false;
		}

	} // Just an example using strcmp
};


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
class unfinished
{
private:
	Type* type;
	Function *f;
	int LineNo, ColNo;
public:
	Type* get_type()
	{
		return type;
	}
	Function* get_function()
	{
		return f;
	}
	int get_LineNo()
	{
		return LineNo;
	}
	int get_ColNo()
	{
		return ColNo;
	}
	unfinished(void)
	{
		type = new Type();
		f = new Function();
		LineNo = 0;
		ColNo = 0;
	}
	unfinished(Type*t, Function * fun, int L, int C)
	{
		type = new Type();
		f = new Function();
		this->type = t;
		this->f = fun;
		this->ColNo = C;
		this->LineNo = L;
	}
};

//======================================================================
class functionCaller
{
private:
	char* name;
	Type* type;
	vector <char *> paramerter;
	int LineNo, ColNo;
public:
	char* get_name()
	{
		return this->name;
	}
	Type* get_type()
	{
		return this->type;
	}
	void insertparameter(vector <char *> par)
	{
		 this->paramerter=par;
	}
	int get_LineNo()
	{
		return LineNo;
	}
	int get_ColNo()
	{
		return ColNo;
	}
	functionCaller(void)
	{
		name = new char();
		LineNo = 0;
		ColNo = 0;
	}
	functionCaller(Type *t, char *n, vector <char*> p, int L, int C)
	{
		this->type = new Type();
		this->type = t;
		this->name = n;
		this->paramerter = p;
		this->ColNo = C;
		this->LineNo = L;
	}
	functionCaller(Type *t, char *n, int L, int C)
	{
		this->type = new Type();
		this->type = t;
		this->name = n;
		this->ColNo = C;
		this->LineNo = L;
	}
	
	bool compare(vector <char*> p)
	{
		if (p.size() != this->paramerter.size())
			return false;
		return true;
	}
};

class MyParser
{
public:
	SymbolTable * st;
	vector<constraction*>constraction_type;
	vector<unfinished*>unfinishfunction;
	vector<functionCaller*>funccaller;
	vector <char*> classname;
	vector<Type*>outer_type;
	ErrorRecovery * errRecovery;
	MyParser(void);
	~MyParser(void);
	//YaccSimpleType* createYaccSimpleType(Type t);
	Variable* insertVar(char* n,char*acc_mod, int lineNo, int colNo);
	Variable* addVariableToCurrentScope(char* n, char*acc_mod,bool is_static,bool is_final, int lineNo, int colNo,bool is_array,bool is_dic,bool self=false);
	Function * createTypeFunctionHeader(Type* tname, bool s, bool p, bool protect ,bool fi, char* name, vector <char*> parameter, int lineNo, int colNo);
	Function * finishFunctionDeclaration(Function * f,  int lineNo, int colNo);
	Type * createType(char* name, vector<char*>inherted_list,char* acc_mod,bool is_static,bool is_final, int lineno, int colno, bool is_final_t);
	Type * finishTypeDeclaration(Type* t);
	Type* returninner( char* child, Type* t,int l,int c);
	Type* check_if_in_inner(constraction* t, char*x);
	void check_inhertance_list();
	void remove_vatiable(Variable* v);
	Variable* checkVariable(char* v, Type* t, bool&exist, int lineNo, int colNo, bool from_right, bool is_array, bool is_dic, bool self = false);
	bool check_function(char*name,Function* f);
	void print_symbol();
	void check_functions();
	Variable* set_storage_modifier(Variable* v,bool is_static,bool is_final);
	void insert_func_Call(Type* t, char* name, int lineno, int colno);
	void recrusive_up_parnet(Type *t, int j);
	void recrusive_up_caller(Type* t, int j);
	void check_static(Type* t, int lineno, int colno);
	void check_func_Call();
	Variable* addVariableToGlobalScope(string id, int line_no, int col_no);
	Scope* createNewScope();
	Scope* CloseScope();
	Function* getMainFunction();
};
#endif