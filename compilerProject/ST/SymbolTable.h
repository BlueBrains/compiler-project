#pragma once
#ifndef __Symbol_Table__
#define __Symbol_Table__

#include"Symbol.h"
#include"Scope.h"
#include"Type.h"
#include"Variable.h"
#include"Function.h"
#include <iostream>
using namespace std;


class SymbolTable
{
public:
	vector<Type*> declareted_type;
	Scope * currScope;
	Scope * rootScope;
	Function * mainfunc;
	Variable * insertVariableInCurrentScope(char* name, char* acc_mod);
	Variable * getVariableFromCurrentScope(char* name, Type* t);
	Function * getFunctionFromCurrentScope(char* name, Type* t, vector<char*>parameter);
	Function * insertFunctionInCurrentScope(char* name);
	Type * insertTypeInCurrentScope(char* name);
	Type * getTypeFromCurrentScope(char* name);
	Type * getTypeFromTypeScope(char* name, Type* type);
	void add_declareted_type(Type* type);
	Scope * getrootscope();
	bool checkInhertanceLoop();
	Variable* getVariableFromCurrentScopeToTyp(char* name, Type* t);
	SymbolTable(void);
	~SymbolTable(void);
};


#endif