#pragma once
#ifndef __My_Parser__
#define __My_Parser__
#include "SymbolTable.h"
#include "ErrorRecovery.h"
//===================== Data Structures From Help in Yacc ==============

class YaccSimpleType{
public:
	Types t;
};
//======================================================================
class MyParser
{
public:
	SymbolTable * st;
	ErrorRecovery * errRecovery;
	MyParser(void);
	~MyParser(void);
	YaccSimpleType* createYaccSimpleType(Types t);
	Variable* insertVar(char* n, YaccSimpleType* t, int lineNo, int colNo);
	Variable* addVariableToCurrentScope(Variable* v);
	Function * createTypeFunctionHeader(char* typeName, char* name, YaccSimpleType * t, int lineNo, int colNo);
	Function * finishFunctionDeclaration(Function * f);
	Type * createType(char* name, int lineno, int colno);
	Type * finishTypeDeclaration(Type* t);

};
#endif