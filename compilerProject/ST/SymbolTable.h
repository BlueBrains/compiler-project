#pragma once
#ifndef __Symbol_Table__
#define __Symbol_Table__

#include"Symbol.h"
#include"Scope.h"
#include"Type.h"
#include"Variable.h"
#include"Function.h"
#include <string>
#include <iostream>
#include <vector>
#include <string>
#include<set>
#include<map>
using namespace std;


typedef map<char*, Type*> TypesMap;
class SymbolTable
{
public:
    TypesMap declareted_type;
	Scope * currScope;
	Scope * rootScope;
	Variable * insertVariableInCurrentScope(char* name, char* acc_mod);
	Variable * getVariableFromCurrentScope(char* name);
	Function * insertFunctionInCurrentScope(char* name);
	Type * insertTypeInCurrentScope(char* name);
	void add_declareted_type(Type* type);
	bool checkInhertanceLoop();
	SymbolTable(void);
	~SymbolTable(void);
};


#endif