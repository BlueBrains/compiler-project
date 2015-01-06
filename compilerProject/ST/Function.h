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
	bool is_static;
	//bool is_virtual;
	//bool is_abstract;
	//bool is_override;
	bool is_final;
	vector<Variable *> parameters;
public:
	Function();
	~Function();
	Function(char* name);
	//Method(char* name, Type* return_type);
	Function(char* name, char* access_modifier);
	void setScope(Scope* m);
	void set_final(char* m);
	bool get_final();
	void set_static(char* m);
	bool get_static();
	Scope* getScope();
	void setparameters(char * parameters);
	bool comparePar(vector<char *> parameters);
	vector<Variable *> getparameters();
};
#endif