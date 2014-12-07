#pragma once
#ifndef __Symbol_Table__
#define __Symbol_Table__
#include "MyMap.h"
class Scope{
public:
	Scope();
	Scope * parent;
	MyMap * m;
};
//=============================
class Variable{
private:
	char* name;
	char* type;
public:
	Variable();
	~Variable();
	void setName(char* n);
	char* getName();
	void setType(char* n);
	char* getType();

};
//=============================
class Function{
private:
	char* name;
	Scope * scope;
public:
	Function();
	~Function();
	void setName(char* n);
	char* getName();
	void setScope(Scope* m);
	Scope* getScope();
};
//=============================
class Type {
private:
	
	char* name;
	Type** inheritedType;
	Type* outer_class;
	Scope * scope;
public:
	Type();
	~Type();
	void setName(char* n);
	char* getName();
	void setInheritedType(Type**n);
	Type** getInheritedType();
	void setouter_class(Type* e);
	Type* getouter_class();
	void setScope(Scope * m);
	Scope * getScope();
};
//=============================

class SymbolTable
{
public:
	Scope * currScope;
	Scope * rootScope;
	Variable * insertVariableInCurrentScope(char* name);
	Variable * getVariableFromCurrentScope(char* name);
	Function * insertFunctionInCurrentScope(char* name);
	Type * insertTypeInCurrentScope(char* name);
	SymbolTable(void);
	~SymbolTable(void);
};


#endif