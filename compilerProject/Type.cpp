#include "Type.h"
#include "Function.h"

Type::Type(string name, int typeSize) :Symbol(name), _typeSize(typeSize){
	declared = 0;
	this->status = completness::under_constraction;
}
Type::Type(Type* type) : Symbol(type->get_name()){
	this->setStatus(type->status);
}
void Type::setImplemented(){
	this->status = completness::implemented;
}
completness Type::getStatus(){
	return status;
}


void Type::setStatus(completness comp){
	if (this != NULL){
		this->status = comp;
	}
}

int Type::getTypeSize()
{
	return _typeSize;
}





void Type::setInheritedType(Type* e){
	this->inhertedList = e;
}
Type* Type::getInheritedType(){
	return this->inhertedList;
}
void Type::setScope(Scope * m){
	this->scope = m;
}
Scope * Type::getScope(){
	return this->scope;
}

