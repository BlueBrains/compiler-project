#include "Type.h"
#include "Function.h"

int Type::classesCount = 0;
Type::Type(char* name, int typeSize) :Symbol(name), _typeSize(typeSize){
	declared = 0;
	_id = -1;
	is_final = false;
	this->status = completness::under_constraction;
	children_ids.insert(getId());
}
Type::Type(Type* type) : Symbol(type->get_name()){
	this->setStatus(type->status);
	is_final = false;
	children_ids.insert(getId());
}
Type::Type(){};

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



bool Type::getIs_final()
{
	return is_final;
}
void Type::setIs_final(bool final)
{	
	is_final = true;
}
void Type::setInheritedType(Type* e){
	e->addChild(children_ids);
	this->inhertedList.push_back (e);
}
vector<Type*> Type::getInheritedType(){
	return this->inhertedList;
}
void Type::setScope(Scope * m){
	this->scope = m;
}
Scope * Type::getScope(){
	return this->scope;
}
int Type::getId(){
	if (_id == -1){
		_id = ++Type::classesCount;
	}
	return _id;
}
