#include"Function.h"
#include<string>
#include <cstring>
Function::Function(){

}
Function::Function(char* name) :Symbol(name)
{
	/**this->parameters.clear();
	this->scoopBody = NULL;
	this->is_abstract = false;
	this->is_final = false;
	this->is_override = false;
	this->is_static = false;
	this->is_virtual = false;**/
	this->is_final = false;
	//this->FunctionNode = NULL;
	//this->is_override = false;
}
Function::Function(char* name, char* access_modifier) :Symbol(name)
{
	//this->FunctionNode = NULL;
	this->is_final = false;
	//this->is_override = false;
}
void Function::set_FunctionNode(Node* n)
{
	this->FunctionNode = n;
}

Node* Function::get_FunctionNode()
{
	return FunctionNode;
}
void Function::set_label(string l)
{
	this->_label=l;
}
string Function::get_label()
{
	return this->_label;
}
void Function::setScope(Scope* m){
	this->scope = m;
}
Scope* Function::getScope(){
	return this->scope;
}

void  Function::setparameters(char * parameter){
	std::string temp;
	bool arr = false;
	bool dic = false;
	for (int i = 0; i < strlen(parameter); i++)
	{
		if (parameter[i] != '*')
			temp = temp + parameter[i];
		else
		{
			if (i == 0)
				arr = true;
			else if (i == 1)
			{
				arr = false;
				dic = true;
			}

		}
	}

	char *cstr = new char[temp.length() + 1];
	cstr = _strdup(temp.c_str());

	Variable * v = new Variable(cstr, arr, dic);
	this->parameters.insert(parameters.end(), v);
}

vector<Variable *>  Function::getparameters(){
	return this->parameters;
}

void Function::set_final(bool m){
	this->is_final = m;
}

bool Function::get_final(){
	return this->is_final;
}

void Function::set_private(bool m){
	this->is_private = m;
}

bool Function::get_private(){
	return this->is_private;
}

void Function::set_static(bool m){
	this->is_static = m;
}

bool Function::get_static(){
	return this->is_static;
}

void Function::set_protected(bool m){
	this->is_protected = m;
}

bool Function::get_protected(){
	return this->is_protected;
}

bool Function::comparePar(vector<char *> outparameters)
{
	if (outparameters.size() != this->parameters.size())
		return false;
	for (int i = 0; i<outparameters.size(); i++){
		if ((outparameters.at(i)[0] != '*') && (this->parameters.at(i)->get_isarray()))
			return false;
		if (strlen(outparameters.at(i))>1 && (outparameters.at(i)[1] != '*') && this->parameters.at(i)->get_isdic())
			return false;
	}

	return true;
}

bool Function::comparePar(vector<Variable *> outparameters)
{
	if (outparameters.size() != this->parameters.size())
		return false;
	for (int i = 0; i<outparameters.size(); i++){
		if (outparameters.at(i)->get_isarray() != this->parameters.at(i)->get_isarray())
			return false;
		if (outparameters.at(i)->get_isdic() != this->parameters.at(i)->get_isdic())
			return false;
	}

	return true;
}

char* Function::getfirstpara()
{
	/*
	bool is_star = false;
	for (int i = 0; i<this->getparameters().size(); i++){
	if (this->parameters.at(i)->get_isdic() || this->parameters.at(i)->get_isarray())
	is_star = true;
	}

	if (parameters.size()>0 && is_star)
	return this->parameters.at(parameters.size()-1)->get_name();

	else if (parameters.size()>0 && !is_star)
	{*/
	if (this->parameters.size()>=1)
		return this->parameters.at(0)->get_name();
	//}
	return NULL;
}