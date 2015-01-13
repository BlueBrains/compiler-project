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
	bool is_static;
public:
	/*
	Variable();
	~Variable();
	void setName(char* n);
	char* getName();
	void setType(char* n);
	char* getType();
	*/
	bool by_self;
	Variable(char* name, bool is_array = false, bool is_dic = false, char* = "private");
	Variable(Variable*);
	Variable();
	Variable(char* name, Type* type, bool);
	static bool compare(Variable *, Variable*);
	char* getAccessModifier();
	void setAccessModifier(char*);
	bool get_isarray();
	bool get_isdic();
	void set_isarray(bool is_array);
	void set_isdic(bool is_dic);
	virtual bool getIsConst();
	virtual void setIsConst(bool);
	Type* getType();
	void setType(Type*);
	void set_static(bool s);
	bool get_static();
};
#endif