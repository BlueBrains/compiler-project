#pragma once
#ifndef __FUNCTION_H__
#define __FUNCTION_H__
//#include"../ast/Node.h"
#include"Scope.h"
#include"Variable.h"
#include"Symbol.h"
#include<vector>
using namespace std;
class Function :public Symbol{
private:
	Scope * scope;
	bool is_static;
	bool is_private;
	bool is_protected;
	//Node* FunctionNode;
	//bool is_override;
	bool is_final;
	string _label;
	vector<Variable *> parameters;
public:
	Function();
	~Function();
	Function(char* name);
	//Method(char* name, Type* return_type);
	Function(char* name, char* access_modifier);
	/*
	void set_FunctionNode(Node* fn);
	Node* get_FunctionNode();*/
	void set_label(string id);
	string get_label();
	void setScope(Scope* m);
	void set_final(bool m);
	bool get_final();
	void set_private(bool m);
	bool get_private();
	void set_static(bool m);
	bool get_static();
	void set_protected(bool m);
	bool get_protected();
	Scope* getScope();
	char* getfirstpara();
	void setparameters(char * parameters);
	bool comparePar(vector<char *> parameters);
	bool comparePar(vector<Variable *> parameters);
	vector<Variable *> getparameters();
};
#endif