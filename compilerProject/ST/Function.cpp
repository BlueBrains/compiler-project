#include"Function.h"
#include<string>
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
	//this->is_override = false;
}
Function::Function(char* name, char* access_modifier) :Symbol(name)
{

	this->is_final = false;
	//this->is_override = false;
}
void Function::setScope(Scope* m){
	this->scope = m;
}
Scope* Function::getScope(){
	return this->scope;
}

void  Function::setparameters(char * parameter){
	Variable * v = new Variable(parameter);
	this->parameters.insert(parameters.end(), v);
}

vector<Variable *>  Function::getparameters(){
	return this->parameters;
}

void Function::set_final(char* m){
	if (strcmp(m , "final")==0)
		this->is_final = true;
}

bool Function::get_final(){
	return this->is_final;
}

void Function::set_static(char* m){
	if (strcmp( m , "static")==0)
		this->is_static = true;
}

bool Function::get_static(){
	return this->is_static;
}

bool Function::comparePar(vector<char *> outparameters)
{
	if (outparameters.size() != this->parameters.size())
		return false;/*
					 for (int i = 0; i<outparameters.size(); i++){
					 if (strcmp(this->parameters[i]->get_name(), outparameters[i])!=0)
					 return false;
					 }
					 */
	return true;
}