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

void  Function::setparameters(char * parameter, Type * type){
	Variable * v = new Variable(parameter, type);
	this->parameters.insert(parameters.end(), v);
}
vector<Variable *>  Function::getparameters(){
	return this->parameters;
}

void Function::set_final(char* m){
	if (m == "final")
		this->is_final = true;
}

bool Function::get_final(){
	return this->is_final;
}

bool Function::comparePar(vector<char *> outparameters)
{
	for (int i = 0; i<outparameters.size(); i++){
		if (this->parameters[i]->get_name() != outparameters[i])
			return false;
	}
	if (outparameters.size() != this->parameters.size())
		return false;
	return true;
}