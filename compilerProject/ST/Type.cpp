#include "Type.h"
#include "Function.h"
int Type:: classesCount=0;
Type::Type(void)
{
	declared = 0;
	///int i = ll.size();
	this->scope = new Scope();
	is_final = false;
	outer_class = NULL;
	//int *x=new int;
	//*x = getId();
	children_ids.push_back(getId());
}
Type::Type(char* name, int typeSize) :Symbol(name), _typeSize(typeSize){
	declared = 0;
	///int i = ll.size();
	is_final = false;
	outer_class = NULL;
	this->scope = new Scope();
	this->status = completness::under_constraction;
	//int *x=new int;
	//*x = getId();
	children_ids.push_back(getId());
}/*
Type::Type(Type* type) : Symbol(type->get_name()){
	/*
	this->setStatus(type->status);
	this->set_name(type->get_name());
	this->inhertedList = type->getInheritedType();
	this->setouter_class(type->getouter_class());
	this->_id = type->getId();
	
}*/
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
void Type::setouter_class(Type* e)
{
	this->outer_class = e;
}
Type* Type::getouter_class()
{
	return this->outer_class;
}
void Type::setIs_final(bool final)
{
	
	is_final = true;
}
bool Type::setInheritedType(Type* e){
	bool k;
	k=e->addChild(children_ids);
	if (!k)
		return false;
	this->inhertedList.push_back (e);
	return true;
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
		_id = ++classesCount;
	}
	return _id;
}
bool Type::operator==(Type xx)
{
	//cout << "enter out to == " << endl;
	if ((outer_class == NULL) && (xx.outer_class == NULL))
	{
		return true;
	}
	else if ((outer_class == NULL) || (xx.outer_class == NULL))
	{
		return false;
	}
	if ((strcmp(get_name() , xx.get_name())==0) && ((*outer_class) == (*xx.outer_class)))
	{
		//cout << "enter" << endl;
		return true;
	}
	else
	{
		return false;
	}
};
Type::~Type()
{

}