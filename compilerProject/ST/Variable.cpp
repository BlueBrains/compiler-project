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
Variable::Variable(char* name, bool is_array, bool is_dic, char* accessModifier) :Symbol(name){
	this->is_array = is_array;
	this->is_dic = is_dic;
	this->setAccessModifier(accessModifier);
	this->set_lastTypes();
	_offset = -1;
}
Variable::Variable(){
	this->type = NULL;
	this->isConst = false;
	this->is_array = false;
	this->is_dic = false;
	this->set_lastTypes();
	this->setAccessModifier("private");
	_offset = -1;
	//this->setAccessModifier(accessModifier);
}
Variable::Variable(char* name, Type* type, bool isConst) : Symbol(name){
	this->type = type;
	this->isConst = isConst;
	this->setAccessModifier("private");
	this->set_lastTypes();
	_offset = -1;
}
void Variable::set_lastTypes(int val)
{
	int* xx = new int(val);
	lastType=make_pair("int" ,(void*)xx);
}
void Variable::set_lastTypes(float val)
{
	float* xx = new float(val);
	lastType = make_pair("float", (void*)xx);

}
void Variable::set_lastTypes(char val)
{
	char* xx = new char(val);
	lastType = make_pair("char", (void*)xx);
}
void Variable::set_lastTypes(string val)
{
	string* xx = new string(val);
	lastType = make_pair("string", (void*)xx);
}
void Variable::set_lastTypes(Type* val)
{
	//lastType["ID"] = val;
	lastType = make_pair("ID", val);
}
void Variable::set_lastTypes()
{
	int* xx = new int(NULL);
	lastType = make_pair("NULL", (void*)xx);
}
void Variable::set_lastTypes(string type,bool f)
{
	int* xx = new int(NULL);
	lastType = make_pair(type, (void*)xx);
}
void Variable::set_lastTypes(long val)
{
	long* xx = new long(val);
	lastType = make_pair("long", (void*)xx);
}
void Variable::set_static(bool s)
{
	is_static = s;
}
bool Variable::get_static()
{
	return is_static;
}
char* Variable::getAccessModifier(){
	if (this != NULL){
		switch (this->accessModifier){
		case(AccessModifier::Protected) : {return "protected"; }
		case(AccessModifier::Public) : {return "public"; }
		default: return "private";
		};
	}
	else
	{
		return NULL;
	}
}

void Variable::setAccessModifier(char* accessModifier){
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

bool  Variable::get_isarray()
{
	return this->is_array;
}
bool  Variable::get_isdic()
{
	return this->is_dic;
}
void  Variable::set_isarray(bool is_array)
{
	this->is_array = is_array;
}
void  Variable::set_isdic(bool is_dic)
{
	this->is_dic = is_dic;
}

void Variable::setType(Type * type){
	this->type = type;
}
bool Variable::compare(Variable* var1, Variable* var2){
	return var1->type->get_name() == var2->type->get_name();
}
void Variable::set_arrayNode(ArrayNode* v)
{
	this->array_node = v;
}

//=======================================
