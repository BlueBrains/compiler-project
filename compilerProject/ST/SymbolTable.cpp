#include "SymbolTable.h"
SymbolTable::SymbolTable(void){
	this->rootScope = new Scope();
	this->currScope = this->rootScope;
}

SymbolTable::~SymbolTable(void){

}

Variable * SymbolTable::insertVariableInCurrentScope(char* name, char* acc_mod){
	Variable * v = this->getVariableFromCurrentScope(name);
	if (v){
		return 0;//item is exist previously
	}
	else{
		v = new Variable();
		v->set_name(name);
		v->setType(NULL);
		if (acc_mod != "")
		{
			v->setAccessModifier(acc_mod);
		}
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
	f->set_name(name);
	this->currScope->m->put(name, f);
	return f;
}
Type * SymbolTable::insertTypeInCurrentScope(char* name){
	Type * t = (Type*)this->currScope->m->get(name);
	if (t)
		return 0;
	t = new Type();
	t->set_name(name);
	t->setInheritedType(0);
	return t;
}
void SymbolTable::add_declareted_type(Type* type){
	if ((type != NULL) && (this != NULL)){
		//Method* temp = this->getMethod(S->get_name(), S->getReturnType(),S->parameters);
		if (declareted_type.find(type->get_name()) != declareted_type.end())
		{
			declareted_type[type->get_name()] = type;

		}
	}
}
//amer works
bool SymbolTable::checkInhertanceLoop()
{

	for (auto i = this->declareted_type.begin(); i != this->declareted_type.end(); i++)
	{
		auto ifs = dynamic_cast<Type*> (i->second);
		if (ifs){
			set<Type*> s;
			s.insert(ifs);
				for (int i = 0; i < ifs->getInheritedType().size(); i++)
				{
					while (ifs)
					{
						ifs=ifs->getInheritedType().at(i);
						if (s.count(ifs))
							return false;
						s.insert(ifs);
					}
				}
		}
	}
	return true;
}