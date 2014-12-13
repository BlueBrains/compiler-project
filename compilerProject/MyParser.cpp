#include "MyParser.h"
#include "ErrorRevovery.h"
MyParser::MyParser(void)
{
	this->st = new SymbolTable();
	this->errRecovery = new ErrorRecovery();
}

MyParser::~MyParser(void)
{
}
/*
YaccSimpleType* MyParser::createYaccSimpleType(Type t){
	YaccSimpleType * ret = new YaccSimpleType();
	ret->t = t;
	return ret;
}
*/
Variable* MyParser::insertVar(char* n,char* acc_mod, int lineNo, int colNo){
	Variable * v = st->insertVariableInCurrentScope(n,acc_mod);
	if(!v){
		this->errRecovery->errQ->enqueue(lineNo, colNo, "Variable is already declared", n);
		
	}
	return v;
}
Variable* MyParser::addVariableToCurrentScope(Variable* v){
	if(v){
		this->st->currScope->m->put(v->get_name(), v);
	}
	return v;
}
Function * MyParser::createTypeFunctionHeader(char* typeName, char* name, int lineNo, int colNo){
	Type * type = (Type *)this->st->rootScope->m->get(typeName);
	if(!type){
		this->errRecovery->errQ->enqueue(lineNo, colNo, "Try to add function to not existing type", name);
		return 0;
	}
	Function * f = (Function * )type->getScope()->m->get(name);
	if(f){
		this->errRecovery->errQ->enqueue(lineNo, colNo, "Function is already exist inside type", name);
		return 0;
	}
	f = new Function();
	f->set_name(name);
	//f->setReturnType(t->t);
	type->getScope()->m->put(name, f);

	f->getScope()->parent = type->getScope();
	this->st->currScope = f->getScope();
	return f;
}

Function * MyParser::finishFunctionDeclaration(Function * f){
	this->st->currScope = this->st->currScope->parent;
	return f;//useless now, but maybe we need it later
}
//========= Types =================
Type * MyParser::createType(char* name,vector<char*>inherted_list, int lineno, int colno,bool is_final){
	Type* t = (Type*)this->st->currScope->m->get(name);
	if(t){
		this->errRecovery->errQ->enqueue(lineno, colno, "Type is already exist", name);
		return 0;
	}
	t = new Type();
	t->set_name(name);
	if (is_final)
	{
		t->setIs_final(true);
	}

	for (int i = 0; i < int(inherted_list.size()); i++)
	{
		char* x = inherted_list.at(i);
		Type* t1 = (Type*)this->st->currScope->m->get(x);
		if (t1)
		{
			if (t1->getIs_final())
			{
				this->errRecovery->errQ->enqueue(lineno, colno, "the type is final and you can't inheteted",t1->get_name());
				return 0;
			}
			else
			{
				t->setInheritedType(t1);
			}
			
		}
		else
		{
			t1 = new Type();
			t1->set_name(x);
			t1->declared = 0;
			//t1->setStatus(completness::under_constraction);
			constraction_type.insert(t1);
			t->setInheritedType(t1);
		}
	}
	
	t->getScope()->parent = this->st->currScope;
	this->st->currScope->m->put(name, t);
	this->st->currScope = t->getScope();
	std::set<Type*>::iterator it = constraction_type.find(t);
	if (it != constraction_type.end())
	{
		constraction_type.erase(it);
	}
	this->st->add_declareted_type(t);
	if (!this->st->checkInhertanceLoop())
	{
		this->errRecovery->errQ->enqueue(lineno, colno, "Error there is an inhertance Loop", name);
	}
	return t;
}
Type * MyParser::finishTypeDeclaration(Type* t){
	this->st->currScope = this->st->currScope->parent;
	return t;
};