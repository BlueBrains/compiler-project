#include "SymbolTable.h"
SymbolTable::SymbolTable(void){
	this->rootScope = new Scope();
	this->currScope = this->rootScope;
}

SymbolTable::~SymbolTable(void){

}

Variable * SymbolTable::insertVariableInCurrentScope(string name){
	Variable * v = this->getVariableFromCurrentScope(name);
	if (v){
		return 0;//item is exist previously
	}
	else{
		v = new Variable();
		v->set_name(name);
		this->currScope->m->put(name, v);
	}
	return v;
}
Variable * SymbolTable::getVariableFromCurrentScope(string name){
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
Function * SymbolTable::insertFunctionInCurrentScope(string name){
	Function * f = (Function*)this->currScope->m->get(name);
	if (f)
		return 0;
	f = new Function();
	f->set_name(name);
	this->currScope->m->put(name, f);
	return f;
}
Type * SymbolTable::insertTypeInCurrentScope(string name){
	Type * t = (Type*)this->currScope->m->get(name);
	if (t)
		return 0;
	t = new Type();
	t->set_name(name);
	t->setInheritedType(0);
	return t;
}
//amer works
bool SymbolTable::checkInhertanceLoop()
{
	for (auto i = this->types.begin(); i != this->types.end(); i++)
	{
		auto ifs = dynamic_cast<Interface*> (i->second);
		if (ifs){
			set<Interface*> s;
			s.insert(ifs);
			while (ifs)
			{
				ifs = ifs->getInheretInterface();
				if (s.count(ifs))
					return false;
				s.insert(ifs);
			}

		}
	}
	return true;
}