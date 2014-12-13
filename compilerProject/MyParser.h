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
	set<Type*>constraction_type;
	ErrorRecovery * errRecovery;
	MyParser(void);
	~MyParser(void);
	//YaccSimpleType* createYaccSimpleType(Type t);
	Variable* insertVar(char* n,char*acc_mod, int lineNo, int colNo);
	Variable* addVariableToCurrentScope(Variable* v);
	Function * createTypeFunctionHeader(char* typeName, char* name, int lineNo, int colNo);
	Function * finishFunctionDeclaration(Function * f);
	Type * createType(char* name, vector<char*>inherted_list, int lineno, int colno, bool is_final);
	Type * finishTypeDeclaration(Type* t);

};
#endif