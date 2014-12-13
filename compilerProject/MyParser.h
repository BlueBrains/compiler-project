#pragma once
#ifndef __My_Parser_H__
#define __My_Parser_H__
#include "ST\SymbolTable.h"
#include"ErrorRevovery.h"

//===================== Data Structures From Help in Yacc ==============

class YaccSimpleType{
public:
	Type t;
};
//======================================================================
class MyParser
{
public:
	SymbolTable * st;
	ErrorRecovery * errRecovery;
	MyParser(void);
	~MyParser(void);
	YaccSimpleType* createYaccSimpleType(Type t);
	Variable* insertVar(char* n, YaccSimpleType* t, int lineNo, int colNo);
	Variable* addVariableToCurrentScope(Variable* v);
	Function * createTypeFunctionHeader(char* typeName, char* access, char* name, vector <char*> t, int lineNo, int colNo);
	Function * finishFunctionDeclaration(Function * f);
	Type * createType(char* name, int lineno, int colno);
	Type * finishTypeDeclaration(Type* t);

};
#endif