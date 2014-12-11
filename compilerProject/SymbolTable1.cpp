#include "SymbolTable.h"
//============= Scope   ================
Scope::Scope(){
	this->m = new MyMap();
	this->parent = 0;
}
//============ Variable  ================
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
//=======================================
//============ Functions ================
/*
Function::Function(){
	this->name = new char[255];
	this->name[0] = '\0';
	this->scope = new Scope();
}
Function::~Function(){}

void Function::setName(char* n){
	strcat(this->name, n);
}
char* Function::getName(){
	return this->name;
}

void Function::setScope(Scope* m){
	this->scope = m;
}
Scope* Function::getScope(){
	return this->scope;
}
//=======================================
//============== Type ===================
Type::Type(){
	this->name = new char[255];
	this->name[0] = '\0';
	this->scope = new Scope();
}
Type::~Type(){}
void Type::setName(char* n){
	strcat(this->name, n);
}
char* Type::getName(){
	return this->name;
}
void Type::setInheritedType(Type** n){
	this->inheritedType = n;
}
Type** Type::getInheritedType(){
	return this->inheritedType;
}
void Type::setouter_class(Type* e){
	this->outer_class = e;
}
Type* Type::getouter_class(){
	return this->outer_class;
}

void Type::setouter_class(Type* e){
	this->outer_class = e;
}

void Type::setScope(Scope * m){
	this->scope = m;
}
Scope * Type::getScope(){
	return this->scope;
}

//=======================================*/

SymbolTable::SymbolTable(void){
	this->rootScope = new Scope();
	this->currScope = this->rootScope;
}

SymbolTable::~SymbolTable(void){

}

Variable * SymbolTable::insertVariableInCurrentScope(char* name){
	Variable * v = this->getVariableFromCurrentScope(name);
	if (v){
		return 0;//item is exist previously
	}
	else{
		v = new Variable();
		v->setName(name);
		this->currScope->m->put(name, v);
	}
	return v;
}
Variable * SymbolTable::getVariableFromCurrentScope(char* name){
	Variable * v = (Variable*)this->currScope->m->get(name);
	if (!v){
		Scope * temp = this->currScope->parent;
		while (temp && !v){
			v = (Variable*)temp->m->get(name);
			temp = temp->parent;
		}
	}
	return v;
}
Function * SymbolTable::insertFunctionInCurrentScope(char* name){
	Function * f = (Function*)this->currScope->m->get(name);
	if (f)
		return 0;
	f = new Function();
	f->setName(name);
	this->currScope->m->put(name, f);
	return f;
}
Type * SymbolTable::insertTypeInCurrentScope(char* name){
	Type * t = (Type*)this->currScope->m->get(name);
	if (t)
		return 0;
	t = new Type();
	t->setName(name);
	t->setInheritedType(0);
	return t;
}
