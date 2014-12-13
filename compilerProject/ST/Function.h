#pragma once
#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include"Scope.h"
#include"Variable.h"
#include"Symbol.h"

#include<vector>
class Function :public Symbol{
private:
	Scope * scope;
	//bool is_static;
	//bool is_virtual;
	//bool is_abstract;
	//bool is_override;
	bool is_final;
	vector<Variable *> parameters;
public:
	Function();
	~Function();
	Function(string name);
	//Method(string name, Type* return_type);
	Function(string name, string access_modifier);
	void setScope(Scope* m);
	void set_final(char* m);
	bool get_final();
	Scope* getScope();
	void setparameters(char * parameters, Type * type);
	vector<Variable *> getparameters();
};
#endif