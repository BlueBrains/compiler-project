#include "Scope.h"
//============= Scope   ================
Scope::Scope(){
	this->m = new MyMap();
	this->parent = 0;
}