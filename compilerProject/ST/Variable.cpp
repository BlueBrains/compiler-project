#include "Variable.h"
/*
Variable::Variable(){
	this->name = new char[255];
	this->name[0] = '\0';
}
Variable::~Variable(){}
void Variable::setName(char* n){
	strcat(this->name, n);
}
char* Variable::getName(){
	return this->name;
}

void Variable::setType(char* n){
	strcat(this->type, n);
}
char* Variable::getType(){
	return this->type;
}
*/
Variable::Variable(string name, Type* type, string accessModifier) :Symbol(name){
	this->type = type;
	this->isConst = false;
	this->setAccessModifier(accessModifier);
}
Variable::Variable(){
	this->type = NULL;
	this->isConst = false;
	//this->setAccessModifier(accessModifier);
}
Variable::Variable(string name, Type* type, bool isConst) : Symbol(name){
	this->type = type;
	this->isConst = isConst;
	this->setAccessModifier("public");
	
}
string Variable::getAccessModifier(){
	if (this != NULL){
		switch (this->accessModifier){
		case(AccessModifier::Protected) : {return "protected"; }
		case(AccessModifier::Public) : {return "public"; }
		default: return "private";
		};
	}
}

void Variable::setAccessModifier(string accessModifier){
	if (accessModifier == "public") {
		this->accessModifier = Public;
	}
	else if (accessModifier == "protected") {
		this->accessModifier = Protected;
	}
	else if (accessModifier == "private"){
		this->accessModifier = Private;
	}
	else{ this->accessModifier = Private; }
}
Variable::Variable(Variable* variable) :Symbol(variable->get_name()){
	this->type = variable->type;
	this->isConst = variable->isConst;
}
bool Variable::getIsConst(){
	if (this != NULL){
		return this->isConst;
	}
	else{
		return NULL;
	}
}
void Variable::setIsConst(bool isConst){
	if (this != NULL){

		this->isConst = isConst;

	}
}
Type* Variable::getType(){


	return this->type;
}

void Variable::setType(Type * type){
	this->type = type;
}
bool Variable::compare(Variable* var1, Variable* var2){
	return var1->type->get_name() == var2->type->get_name();
}

//=======================================
