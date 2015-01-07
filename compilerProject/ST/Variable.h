#pragma once
#ifndef VAR_H
#define VAR_H
#include <string>
#include "Type.h"
#include "Symbol.h"
using namespace std;
class Type;

class Variable :public Symbol{
private:
	Type * type;
	enum	AccessModifier accessModifier;
	bool isConst;
	bool is_array;
	bool is_dic;
public:
	/*
	Variable();
	~Variable();
	void setName(char* n);
	char* getName();
	void setType(char* n);
	char* getType();
	*/
	Variable(char* name, bool is_array = false, bool is_dic = false, char* = "private");
	Variable(Variable*);
	Variable();
	Variable(char* name, Type* type, bool);
	static bool compare(Variable *, Variable*);
	char* getAccessModifier();
	void setAccessModifier(char*);
	virtual bool getIsConst();
	virtual void setIsConst(bool);
	Type* getType();
	void setType(Type*);
	
};
#endif