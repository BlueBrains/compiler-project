#include "MyParser.h"

MyParser::MyParser(void)
{
	this->st = new SymbolTable();
	this->errRecovery = new ErrorRecovery();
}

MyParser::~MyParser(void)
{
}

YaccSimpleType* MyParser::createYaccSimpleType(Types t){
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
		this->st->currScope->m->put(v->getName(), v);
	}
	return v;
}
Function * MyParser::createTypeFunctionHeader(char* typeName, char* name, YaccSimpleType* t, int lineNo, int colNo){
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
	f->setName(name);
	f->setReturnType(t->t);
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
Type * MyParser::createType(char* name, int lineno, int colno){
	Type* t = (Type*)this->st->currScope->m->get(name);
	if(t){
		this->errRecovery->errQ->enqueue(lineno, colno, "Type is already exist", name);
		return 0;
	}
	t = new Type();
	t->setName(name);
	t->getScope()->parent = this->st->currScope;
	this->st->currScope->m->put(name, t);
	this->st->currScope = t->getScope();
	return t;
}
Type * MyParser::finishTypeDeclaration(Type* t){
	this->st->currScope = this->st->currScope->parent;
	return t;
};