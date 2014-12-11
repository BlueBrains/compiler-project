#include "Symbol.h"

Symbol::Symbol(string name)
{
	this->name = name;
}
Symbol::Symbol(Symbol* symbol)
{
	this->name = symbol->name;
}
Symbol::Symbol()
{
	this->name = "";
}

void Symbol::set_name(string name){
	if ((this != NULL) && (name != "")){
		this->name = name;
	}
	
}
string Symbol::get_name()
const{
	if (this != NULL){
		return this->name;
	}
	else{
		return "no name";
	}
}
