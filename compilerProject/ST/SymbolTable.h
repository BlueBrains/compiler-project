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
class SymbolTable
{
public:
	Scope * currScope;
	Scope * rootScope;
	
	Variable * insertVariableInCurrentScope(string name);
	Variable * getVariableFromCurrentScope(string name);
	Function * insertFunctionInCurrentScope(string name);
	Type * insertTypeInCurrentScope(string name);
	SymbolTable(void);
	~SymbolTable(void);
};


#endif