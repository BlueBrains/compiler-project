#include "Scope.h"
//============= Scope   ================
Scope::Scope(){
	//cout << "after scope \n";
	this->m = new MyMap();
	this->parent = 0;
}