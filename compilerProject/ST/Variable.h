#pragma once
#ifndef VAR_H
#define VAR_H
#include <string>
#include <map>
#include "Type.h"
#include "Symbol.h"
using namespace std;
class Type;
typedef pair<string, void*> TypesMap;
class Variable :public Symbol{
private:
	Type * type;
	TypesMap lastType;
	//void* lastType;
	string strLasttype;
	enum	AccessModifier accessModifier;
	bool isConst;
	bool is_array;
	bool is_dic;
	bool is_static;
public:

	bool by_self;
	Variable(char* name, bool is_array = false, bool is_dic = false, char* = "private");
	Variable(Variable*);
	Variable();
	Variable(char* name, Type* type, bool);
	void set_lastTypes(int val);
	void set_lastTypes();
	void set_lastTypes(float val);
	void set_lastTypes(long val);
	void set_lastTypes(char val);
	void set_lastTypes(string val);
	void set_lastTypes(Type* val);
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