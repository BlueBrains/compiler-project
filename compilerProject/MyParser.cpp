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

YaccSimpleType* MyParser::createYaccSimpleType(Type t){
	YaccSimpleType * ret = new YaccSimpleType();
	ret->t = t;
	return ret;
}

Variable* MyParser::insertVar(char* n, YaccSimpleType* t, int lineNo, int colNo){
	Variable * v = st->insertVariableInCurrentScope(n, t->t);
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
Function * MyParser::createTypeFunctionHeader(char* tname, char* access, char* name, vector <char*> parameter, int lineNo, int colNo){
	Type * type = (Type *)this->st->rootScope->m->get(tname);
	if(!type){
		this->errRecovery->errQ->enqueue(lineNo, colNo, "Try to add function to not existing type", name);
		return 0;
	}

	/*
	for (int i = 0; i < type->getInheritedTypeparameter.size; i++) {
		f->setparameters(parameter[i], type);
	}
	*/
	Function * f = (Function * )type->getScope()->m->get(name);
	if(f){
		this->errRecovery->errQ->enqueue(lineNo, colNo, "Function is already exist inside type", name);
		return 0;
	}

	f = new Function();
	f->set_name(name);
	f->set_final(access);
	type->getScope()->m->put(name, f);

	f->getScope()->parent = type->getScope();
	this->st->currScope = f->getScope();

	for (int i = 0; i < parameter.size;i++) {
		f->setparameters(parameter[i], type);
	}


	return f;
}

Function * MyParser::finishFunctionDeclaration(Function * f){
	this->st->currScope = this->st->currScope->parent;
	return f;//useless now, but maybe we need it later
}
//========= Types =================
Type * MyParser::createType(char* name, int lineno, int colno){
	Type* t = (Type*)this->st->currScope->m->get(name);
	if(t){
		this->errRecovery->errQ->enqueue(lineno, colno, "Type is already exist", name);
		return 0;
	}
	t = new Type();
	t->set_name(name);
	t->getScope()->parent = this->st->currScope;
	this->st->currScope->m->put(name, t);
	this->st->currScope = t->getScope();
	return t;
}
Type * MyParser::finishTypeDeclaration(Type* t){
	Function * f = (Function *)t->getScope()->m->get(t->get_name);
	if (!f){
		f = new Function();
		f->set_name(t->get_name);
		//f->setReturnType(t->t);
		t->getScope()->m->put(t->get_name, f);
		f->getScope()->parent = t->getScope();
	}
	this->st->currScope = this->st->currScope->parent;
	return t;
};

