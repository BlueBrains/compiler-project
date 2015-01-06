#include "SymbolTable.h"
SymbolTable::SymbolTable(void){
	//cout << "enter to new symboltable\n";
	this->rootScope = new Scope();
	this->currScope = this->rootScope;
}

SymbolTable::~SymbolTable(void){

}

Variable * SymbolTable::insertVariableInCurrentScope(char* name, char* acc_mod){
	Variable * v = (Variable*)this->currScope->m->get(name,"Variable");
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
		else
		{
			v->setAccessModifier("private");
		}
		this->currScope->m->put(name, v,"Variable");
	}
	return v;
}
Variable * SymbolTable::getVariableFromCurrentScope(char* name,Type* t){
	Variable * v = (Variable*)this->currScope->parent->m->get(name, "Variable");
	vector<Type*>i_t = t->getInheritedType();
	
	if (!v){
		int j = 0;
		for (int i = 0; i < i_t.size(); i++)
		{
			v = (Variable*)i_t.at(i)->getScope()->m->get(name);
			j++;
		}
		if (!v)
		{
		Scope * temp = this->currScope->parent;
		while (temp && !v){
			v = (Variable*)temp->m->get(name, "Variable");
			temp = temp->parent;
		}
	}
		else
		{
			if (j > 1)
				cout << "ambigious v in parents types";
		}
	}
	return v;
}
Type * SymbolTable::getTypeFromCurrentScope(char* name){
	Type * v = (Type*)this->currScope->m->get(name, "Class");
	if (!v){
		Scope * temp = this->currScope->parent;
		while (temp && !v){
			v = (Type*)temp->m->get(name, "Class");
			temp = temp->parent;
		}
	}
	return v;
}
Type * SymbolTable::getTypeFromTypeScope(char* name, Type* type){
	Scope* s = type->getScope()->parent;
	Type * v = (Type*)s->m->get(name,"Class");
	//Type * v = (Type*)this->currScope->m->get(name);
	if (!v){
		Scope * temp = s->parent;
		while (temp && !v){
			v = (Type*)temp->m->get(name, "Class");
			temp = temp->parent;
		}
	}
	return v;
}
Function * SymbolTable::insertFunctionInCurrentScope(char* name){
	Function * f = (Function*)this->currScope->m->get(name, "Function");
	if (f)
		return 0;
	f = new Function();
	f->set_name(name);
	this->currScope->m->put(name, f,"Function");
	return f;
}
Scope * SymbolTable::getrootscope(){
	return this->rootScope;
}
Type * SymbolTable::insertTypeInCurrentScope(char* name){
	Type * t = (Type*)this->currScope->m->get(name, "Class");
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
		/*
		if (declareted_type.find(type->get_name()) != declareted_type.end())
		{
			declareted_type[type->get_name()] = type;

		}*/
	}
}
//amer works
bool SymbolTable::checkInhertanceLoop()
{

	for (int i = 0; i < declareted_type.size(); i++)
	{
		Type* ifs = declareted_type.at(i);
		if (ifs){
			vector<Type*> s;
			s.push_back(ifs);
				for (int j = 0; j < ifs->getInheritedType().size(); j++)
				{
					while (ifs)
					{
						ifs=ifs->getInheritedType().at(j);
						/*
						if (s.find(ifs)!=-1)
							return false;*/
						s.push_back(ifs);
					}
				}
		}
	}
	return true;
}