#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "MyParser.h"
#include "ErrorRevovery.h"
#include <algorithm>
#include <cstring>
#include "../Streams.h"

void print_st(SymbolTable *s);
bool check_type_name(char* name, vector<Type*> outer_type)
{
	for (int i = 0; i < outer_type.size(); i++)
	{
		if (strcmp(name , outer_type.at(i)->get_name())==0)
		{
			return false;
		}
	}
	return true;
}


bool check_class_in(Type* name, vector<constraction*> cons)
{
	for (int i = 0; i < cons.size(); i++)
	{
		if (*name == *cons.at(i)->get_type())
		{
			return true;
		}
	}
	return false;
}


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
	if (outer_type.size() > 0)
	{
		this->errRecovery->errQ->enqueue(lineNo, colNo, "Variable is outer class", n);
	}
	Variable * v = st->insertVariableInCurrentScope(n,acc_mod);
	if(!v){
		this->errRecovery->errQ->enqueue(lineNo, colNo, "Variable is already declared", n);
		
	}
	return v;
}
void MyParser::remove_vatiable(Variable* v)
{
	this->st->currScope->m->remove(v->get_name());
}

Variable* MyParser::addVariableToCurrentScope(char* n, char* acc_mod, int lineNo, int colNo){
	Variable* v = NULL;
	if(n){
		v = (Variable*)this->st->currScope->m->get(n,"Variable");
		if (v)
		{
			this->errRecovery->errQ->enqueue(lineNo, colNo, "Variable is already declared", n);
			return 0;
		}
		v = new Variable();
		this->st->currScope->m->put(n, v,"Variable");
	}
	return v;
}


Variable* MyParser::checkVariable(char* name, Type* t, int lineNo, int colNo){

	Variable * v = this->st->getVariableFromCurrentScope(name,t);
	if (!v)
	{
		this->errRecovery->errQ->enqueue(lineNo, colNo, "Undeclareted Variable", name);
		Streams::verbose() << "Error: Undeclareted Variable at Line No:" << lineNo << " Column No:" << colNo << endl;
	}
	return v;
}

Function * MyParser::createTypeFunctionHeader(Type* tname, char* access, char* name, vector <char*> parameter, int lineNo, int colNo){
	Type * type = tname;
	if (!type){
		this->errRecovery->errQ->enqueue(lineNo, colNo, "Try to add function to not existing type", name);
	}

	bool nullclass = false;
	if (check_class_in(tname, constraction_type))
	{
		nullclass = true;
	}

	for (int i = 0; i < int(type->getInheritedType().size()); i++)
	{
		Type* x = type->getInheritedType().at(i);
		Function * f1 = (Function *)x->getScope()->m->get(name, "Function");
		if (f1 && f1->get_final() && (f1->get_name() != "__init__"))
		{
			this->errRecovery->errQ->enqueue(lineNo, colNo, "the method is final and you can't override it ", f1->get_name());
		}
		else if (f1 && !f1->comparePar(parameter) && (f1->get_name() != "__init__"))
		{
			this->errRecovery->errQ->enqueue(lineNo, colNo, "the method didn't have the same overrided method parameter", f1->get_name());
		}
	}
	Function * f = (Function *)type->getScope()->m->get(name, "Function");
	if (f){
		this->errRecovery->errQ->enqueue(lineNo, colNo, "Function is already exist inside type", name);
	}

	if (parameter.size()>0){
		if ((strcmp(parameter.at(0), "self") == 0) && (access == "STATIC" || access == "FINAL"))
		{
			this->errRecovery->errQ->enqueue(lineNo, colNo, "first static function parameter can't be self", name);
		}

		if ((strcmp(parameter.at(0), "self") != 0) && (access != "STATIC" || access != "FINAL"))
		{
			this->errRecovery->errQ->enqueue(lineNo, colNo, "first function parameter should be self", name);
		}


		vector<char*>::iterator it = find_if(parameter.begin() + 1, parameter.end(), Comparator_char("self"));
		if (it != parameter.end()){
			this->errRecovery->errQ->enqueue(lineNo, colNo, "Unexpected Self here , should be first parameter", name);
		}

	}

	vector <char *> tempvec = parameter;
	vector <char *> cleanp = parameter;
	int k = 0;
	for (int i = 0; i < parameter.size(); i++) {
		char* temp = new char[strlen(parameter.at(i)) + 1];
		for (int j = 0; j < strlen(parameter.at(i)); j++) {
			if ('*' != parameter.at(i)[j])
			{
				temp[j] = parameter.at(i)[j];
				k++;
			}
		}
		temp[k + 1] = '\0';
		k = 0;
		cleanp.at(i) = temp;
	}

	for (int i = 0; i < parameter.size(); i++) {
		tempvec.at(i) = "!";
		vector<char*>::iterator it = find_if(tempvec.begin(), tempvec.end(), Comparator_char(parameter.at(i)));
		if (it != tempvec.end()){
			std::string tempstr(parameter.at(i));
			std::string erro("dublicated parameter " + tempstr);
			char *cstr = new char[erro.length() + 1];
			strcpy(cstr, erro.c_str());

			this->errRecovery->errQ->enqueue(lineNo, colNo, cstr, name);
		}

	}

	int onestar = 0;
	int twostar = 0;

	for (int i = 0; i < parameter.size(); i++) {
		if ('*' == parameter.at(i)[0])
		{
			if ((strlen(parameter.at(i)) > 2) && ('*' == parameter.at(i)[1]))
			{
				twostar++;
				if (twostar>1)
					this->errRecovery->errQ->enqueue(lineNo, colNo, "duplicated ** just one parameter that can be **", name);
			}
			else{
				onestar++;
				if (onestar>1)
					this->errRecovery->errQ->enqueue(lineNo, colNo, "duplicated * just one parameter that can be *", name);
			}
		}
	}

	f = new Function();
	f->set_name(name);
	f->set_final(access);
	f->set_static(access);
	f->set_public(access);
	f->set_private(access);
	type->getScope()->m->put(name, f, "Function");
	f->setScope(new Scope);
	f->getScope()->parent = type->getScope();
	this->st->currScope = f->getScope();

	for (int i = 0; i < parameter.size(); i++) {
		f->setparameters(parameter[i]);
	}

	if ((tname->getAccessModifier() == "PUBLIC") && !f->get_static())
	{
		if (st->mainfunc == NULL)
		{
			f->set_static("STATIC");
			st->mainfunc = f;
		}
		else
			this->errRecovery->errQ->enqueue(lineNo, colNo, "you'r allowed to put only one static main method", name);
	}

	if (nullclass)
	{
		unfinished *temp = new unfinished(tname, f, lineNo, colNo);
		unfinishfunction.push_back(temp);
	}
	return f;
}


Function * MyParser::finishFunctionDeclaration(Function * f){
	this->st->currScope = this->st->currScope->parent;
	return f;//useless now, but maybe we need it later
}
//========= Types =================
bool found(Type* t)
{
	return true;
}
Type* MyParser::returninner(char* child, Type* t,int l,int cc)
{
	Type* out = outer_type.back();
	vector<Type*>out_inhertedList = out->getInheritedType();
	vector<Type*>::iterator ot = find(out_inhertedList.begin(), out_inhertedList.end(), t);
	if (ot == out_inhertedList.end())
	{
		//error
		return 0;
	}
	Type* tt = *ot;
	Type* t2 = (Type*)tt->getScope()->m->get(child,"Class");
	if (!t)
		{
		//error not found class child
					return 0;
				}
	if (t2->getIs_final())
			{
		//error is final
				return 0;
			}
	return t2;
		
}
int findTypeByName(vector<Type*>Mylist, Type* t)
{
	for (int i = 0; i < Mylist.size(); i++)
	{
		if (strcmp(Mylist.at(i)->get_name(), t->get_name()) == 0)
		{
			return i;
		}
	}
	return -1;
}
Type * MyParser::createType(char* name, vector<char*>inherted_list,char* acc_mod, int lineno, int colno, bool is_final)
{
	//cout << "enter" << endl;
	char *tokenPtr;
	Type* t = (Type*)this->st->currScope->m->get(name,"Class");
	bool no_error = true;
	if (t){
		this->errRecovery->errQ->enqueue(lineno, colno, "Type is already exist", name);
		no_error= 0;
	}
	if (!check_type_name(name,outer_type)){
		cout << "the outer class has the same name" << endl;
		this->errRecovery->errQ->enqueue(lineno, colno, "the outer class has the same name", name);
		no_error = 0;
	}
	
	t = new Type();
	t->set_name(name);
	//int g = findTypeByName(;
	//for check that the new class are not in parent class in inhertance
	if (outer_type.size() == 0)
	{
		if ((strcmp(acc_mod, "private") == 0))
		{
			cout << "modifier private not allowed here" << endl;
			this->errRecovery->errQ->enqueue(lineno, colno, "modifier private not allowed here", name);
			no_error = 0;
		}
		else if ((strcmp(acc_mod, "protected") == 0))
		{
			cout << "modifier protected not allowed here" << endl;
			this->errRecovery->errQ->enqueue(lineno, colno, "modifier protected not allowed here", name);
			no_error = 0;
		}
		else
			t->setAccessModifier("public");
	}
	else
	{
		t->setAccessModifier(acc_mod);
	}
	if (outer_type.size() > 0)
	{
		for (int i = 0; i < outer_type.back()->getInheritedType().size(); i++)
		{
			Type* temp = (Type*)outer_type.back()->getInheritedType().at(i)->getScope()->m->get(name,"Class");
			if (temp)
			{
				cout << "Type is already exist in the parent class of outer class" << endl;
				this->errRecovery->errQ->enqueue(lineno, colno, "Type is already exist in the parent class of outer class", name);
				no_error = 0;
			}
		}
	}
	
	//cout << t->get_name() << endl;
	if (outer_type.size() != 0)
	{
		t->setouter_class(outer_type.back());
	}
	else
	{
		t->setouter_class(NULL);
	}
		if (is_final)
		{
		t->setIs_final(true);
	}
	//cout << "the size is " << inherted_list.size() << endl;
	vector<char*>undeclarated_type;
	if (inherted_list.size() > 0)
	{
		vector<char*>temp = inherted_list;
		for (int j = 0; j < temp.size(); j++)
		{
			char* xx = temp.at(j);
			char buffer[15];
			bool found = false;
			sprintf(buffer, xx);
			tokenPtr = strtok(buffer, ".");
			//cout << tokenPtr << endl;
			Type* t1 = (Type*)this->st->getTypeFromCurrentScope(tokenPtr);
			if (t1)
			{
				if (t1->getIs_final())
				{
					this->errRecovery->errQ->enqueue(lineno, colno, "can't inherted from final type", t1->get_name());
					//no_error = 0;
				}
				tokenPtr = strtok(NULL, ".");
				Type* t2 = new Type();
				bool enter = false;
				//Type* t3 = new Type();
				while (tokenPtr != NULL)
				{
					char* x = new char[20];
					//cout << "token " << *tokenPtr << endl;
					strcpy(x, tokenPtr);
					t2 = new Type();
					t2->set_name(x);
					t2->setouter_class(t1);
					enter = true;
					//t1 = (Type*)this->st->getTypeFromCurrentScope(x);
					//Scope* tempScope = NULL;
					tokenPtr = strtok(NULL, ".");
					if (tokenPtr != NULL)
					{
						t1 = t2;
					}
				}
				if (enter)
				{
					int j = findTypeByName(this->outer_type.back()->getInheritedType(), t1);
					if (j == -1)
					{
						cout << "you can't inherted from inner class" << endl;
						this->errRecovery->errQ->enqueue(lineno, colno, "you can't inherted from inner class", temp.at(j));
						//no_error = 0;
					}
					t1 = this->returninner(t2->get_name(), t1, lineno, colno);
				}
				if (!t->setInheritedType(t1))
				{
					cout << "Error there is an inhertance Loop" << endl;
					this->errRecovery->errQ->enqueue(lineno, colno, "Error there is an inhertance Loop", temp.at(j));
					//no_error = 0;
				}

			}
			else
			{
				undeclarated_type.push_back(inherted_list.at(j));
			}
		}
		if (undeclarated_type.size() > 0)
		{
			constraction* c = new constraction(t, undeclarated_type, true, lineno, colno);
		constraction_type.push_back(c);
	}
	
	}
	
	/*
	for (int i = 0; i < int(inherted_list.size()); i++)
	{
		char* xx = inherted_list.at(i);
		char buffer[15];
		bool found=false;
		sprintf(buffer, xx);
		tokenPtr = strtok(buffer, ".");
		//cout << tokenPtr << endl;
		Type* t1 = (Type*)this->st->getTypeFromCurrentScope(tokenPtr);
		if (t1)
		{
			if (t1->getIs_final())
			{
				this->errRecovery->errQ->enqueue(lineno, colno, "the type is final and you can't inheteted", t1->get_name());
				no_error = 0;
			}
			else
			{
				found = true;
			}
		}
		else
		{

			t1 = new Type();
			char*n=new char[25];
			//cout << "token " << *tokenPtr << endl;
			strcpy(n,tokenPtr);
			t1->set_name(n);
			//t1->declared = 0;

			//t1->setouter_class(outer_type.end());
			if (outer_type.size() != 0)
			{
				t1->setouter_class(outer_type.back());
			}
			else
			{
				t1->setouter_class(NULL);
			}
			//t1->setStatus(completness::under_constraction);
			//t->setInheritedType(t1);
		}
			
				tokenPtr = strtok(NULL, ".");
				Type* t2 = new Type();
				bool enter = false;
				//Type* t3 = new Type();
				while (tokenPtr != NULL)
				{
					char* x = new char[20];
					//cout << "token " << *tokenPtr << endl;
					strcpy(x, tokenPtr);
					t2 = new Type();
					t2->set_name(x);
					t2->setouter_class(t1);
					enter = true;
					//t1 = (Type*)this->st->getTypeFromCurrentScope(x);
					//Scope* tempScope = NULL;
					tokenPtr = strtok(NULL, ".");
					if (tokenPtr != NULL)
					{
						t1 = t2;
					}
				}
				if (enter)
				{
					int j = findTypeByName(this->outer_type.back()->getInheritedType(), t1);
					if (j == -1)
					{
						cout << "you can't inherted from inner class" << endl;
						this->errRecovery->errQ->enqueue(lineno, colno, "you can't inherted from inner class", name);
						no_error = 0;
					}
					t1 = this->returninner(t2->get_name(), t1, lineno, colno);
				}
				vector<constraction*>::iterator it = std::find_if(constraction_type.begin(), constraction_type.end(), Comparator_constraction(new constraction(t)));
				
				//int it = constraction_type.find(new constraction(t1));
				if (!t->setInheritedType(t1))
				{
					cout << "Error there is an inhertance Loop" << endl;
					this->errRecovery->errQ->enqueue(lineno, colno, "Error there is an inhertance Loop", name);
					no_error = 0;
				}
				if ((!found)&&(it == constraction_type.end()))
				{
					//t1->declared = true;
					//t1->setIs_final (true);
					constraction* c = new constraction(t1, true, lineno, colno);
					constraction_type.push_back(c);
				}
	}
	*/
	if (no_error)
	{
		t->declared = 1;
	}
	else
	{
		t->declared = 0;
	}

	t->getScope()->parent = this->st->currScope;
	
	this->st->currScope->m->put(name, t,"Class");
	
	this->st->currScope = t->getScope();

	this->st->add_declareted_type(t);
	outer_type.push_back(t);
	//cout << "after outer it= " << it << endl;
	//cout << t->get_name() << endl;
	/*
	if (!this->st->checkInhertanceLoop())
	{
		this->errRecovery->errQ->enqueue(lineno, colno, "Error there is an inhertance Loop", name);
	}*/
	//Type* r = (Type*)this->st->currScope->m->get(name);
	//cout << r->get_name();
	return t;
};

Type * MyParser::finishTypeDeclaration(Type* t){
	//cout <<"size "<< constraction_type.size() << endl;
	for (int i = 0; i < constraction_type.size(); i++)
	{
		//cout <<"end type "<< constraction_type.at(i)->get_type()->get_name()<<endl;
	}
	//Type * tt = new Type();
	Function * f = (Function *)st->currScope->m->get("__init__", "Function");
	if (!f){
		f = new Function();
		f->set_name("__init__");
		outer_type.back()->getScope()->m->put(outer_type.back()->get_name(), f, "Function");
		f->setScope(new Scope);
		f->getScope()->parent = outer_type.back()->getScope();
	}

	this->st->currScope = this->st->currScope->parent;
	
	if (!outer_type.back()->declared)
	{
		//remove t from  current scope
		this->st->currScope->m->remove(outer_type.back()->get_name());
	}
	outer_type.pop_back();
	/*
	for (int i = 0; i < constraction_type.size(); i++)
	{
		if ((constraction_type.at(i)->get_type()->getouter_class() == outer_type.back()) && (constraction_type.at(i)->expect == true))
		{
			constraction_type.at(i)->get_type()->setouter_class(constraction_type.at(i)->get_type()->getouter_class()->getouter_class());
		}
	}*/
	return 0;
};

void  MyParser::check_inhertance_list()
{
	char *tokenPtr;
	for (int i = 0; i < constraction_type.size(); i++)
	{
		vector<char*>temp = constraction_type.at(i)->get_inhertance_list();
		Type* t = constraction_type.at(i)->get_type();
		for (int j= 0; j < temp.size(); j++)
		{
			char* xx = temp.at(j);
			char buffer[15];
			bool found = false;
			sprintf(buffer, xx);
			tokenPtr = strtok(buffer, ".");
			//cout << tokenPtr << endl;
			Type* t1 = (Type*)this->st->getTypeFromTypeScope(tokenPtr,t);
			if (t1)
			{
				if (t1->getIs_final())
				{
					this->errRecovery->errQ->enqueue(constraction_type.at(i)->get_LineNo(), constraction_type.at(i)->get_ColNo(), "can't inherted from final type", t1->get_name());
					//no_error = 0;
				}
				tokenPtr = strtok(NULL, ".");
				Type* t2 = new Type();
				bool enter = false;
				//Type* t3 = new Type();
				while (tokenPtr != NULL)
				{
					char* x = new char[20];
					//cout << "token " << *tokenPtr << endl;
					strcpy(x, tokenPtr);
					t2 = new Type();
					t2->set_name(x);
					t2->setouter_class(t1);
					enter = true;
					//t1 = (Type*)this->st->getTypeFromCurrentScope(x);
					//Scope* tempScope = NULL;
					tokenPtr = strtok(NULL, ".");
					if (tokenPtr != NULL)
					{
						t1 = t2;
					}
				}
				if (enter)
				{
					int j = findTypeByName(this->outer_type.back()->getInheritedType(), t1);
					if (j == -1)
					{
						cout << "you can't inherted from inner class" << endl;
						this->errRecovery->errQ->enqueue(constraction_type.at(i)->get_LineNo(), constraction_type.at(i)->get_ColNo(), "you can't inherted from inner class", temp.at(j));
						//no_error = 0;
					}
					t1 = this->returninner(t2->get_name(), t1, constraction_type.at(i)->get_LineNo(), constraction_type.at(i)->get_ColNo());
				}
				if (!t->setInheritedType(t1))
				{
					cout << "Error there is an inhertance Loop" << endl;
					this->errRecovery->errQ->enqueue(constraction_type.at(i)->get_LineNo(), constraction_type.at(i)->get_ColNo(), "Error there is an inhertance Loop", temp.at(j));
					//no_error = 0;
				}

			}
			else
			{
				//cout << "Error there is an inhertance Loop" << endl;
				Type* tcc;
				//int xsi = constraction_type.size();
				tcc=check_if_in_inner(constraction_type.at(i), tokenPtr);
				if (tcc)
				{
					t->setInheritedType(tcc);
				}
				else
				{
					this->errRecovery->errQ->enqueue(constraction_type.at(i)->get_LineNo(), constraction_type.at(i)->get_ColNo(), "undeclarated type", temp.at(j));
				}
				//check if inner class :) 
				
			}
		}
	}
}
Type* MyParser::check_if_in_inner(constraction* t, char*x)
{
	int n = 0;
	Type* temp_outer = t->get_type()->getouter_class();
	if (!temp_outer)
	{
		return NULL;
	}
	vector<Type*> xx = t->get_type()->getouter_class()->getInheritedType();
	Type* y=NULL;
	char*s1 = new char[20];
	s1 = " ";
	for (int i = 0; i < xx.size();i++)
	{
		
		Scope * s = xx.at(i)->getScope();
		y = (Type*)s->m->get(x,"Class");
		if (y)
		{
			const char* ct = xx.at(i)->get_name();
			
			char buffer[15];
			sprintf(buffer, s1);
			string f = xx.at(i)->get_name();
			string xs;
			s1=strcat(buffer, f.c_str());
			strcat(s1,".");
			//sprintf(buffer, x);
			const char* ct2 = x;
			strcat(s1, ct2);
			strcat(s1, "  ");
			n = n + 1;
		}
			
	}
	if (n>1)
	{
		char* ol = new char[50];
		ol = "ambiguous type between ";
		const char* ct = s1;
		char buffer[15];
		sprintf(buffer, ol);
		ol = strcat(buffer, ct);
		cout << ol << endl;
		this->errRecovery->errQ->enqueue(t->get_LineNo(), t->get_ColNo(),ol, t->get_type()->get_name());
	}
	else
	{
		if ((y)&&(y->getIs_final()))
		{
			this->errRecovery->errQ->enqueue(t->get_LineNo(), t->get_ColNo(), "can't inhertance from final type", t->get_type()->get_name());
		}
	}
	return y;
}

void printScope(Scope *s)
{
	if (s != NULL)
	{
		cout << "{";
		for (int i = 0; i < 71; i++)
		{
			MapElem* tempelem = s->m->getbyId(i);
			while (tempelem != NULL)
			{
				//cout << "element name is" << tempelem->getName();

				if (tempelem->gettype() == "Class"){
					Type* t = (Type*)tempelem->getElem();
					cout << "element is Class it's name is" << t->getIs_final() << " " << t->get_name() << "(";
					for (int i = 0; i < t->getInheritedType().size(); i++){
						if (t->getInheritedType()[i] != NULL)
							cout << t->getInheritedType()[i]->get_name() << ",";
					}
					cout << "):" << endl;
					t->print();
					printScope(t->getScope());
				}

				else if (tempelem->gettype() == "Function"){
					Function* t = (Function*)tempelem->getElem();
					cout << "element is Function it's name is" << t->get_final() << " " << t->get_name() << "(";
					vector<Variable *> paramet = t->getparameters();
					for (int i = 0; i< paramet.size(); i++){
						cout << paramet[i]->get_name() << ",";
					}
					cout << "):" << endl;
					printScope(t->getScope());
				}
				else if (tempelem->gettype() == "Scope"){
					Scope* t = (Scope*)tempelem->getElem();
					printScope(t);
				}
				else if (tempelem->gettype() == "Variable"){
					Variable* t = (Variable*)tempelem->getElem();
					cout << "element is Variable it's name is" << t->getAccessModifier() << " " << t->get_name() << endl;
				}
				tempelem = tempelem->getNext();
			}
		}
		cout << "}" << endl;
	}


}

void print_st(SymbolTable *s)
{

	printScope(s->getrootscope());

}

void MyParser::check_functions()
{
	for (int j = 0; j< unfinishfunction.size(); j++){
		Type* t = unfinishfunction.at(j)->get_type();
		for (int i = 0; i < int(t->getInheritedType().size()); i++)
		{
			Type* x = t->getInheritedType().at(i);
			Function * f1 = (Function *)x->getScope()->m->get(unfinishfunction.at(j)->get_function()->get_name(), "Function");
			if (f1 && f1->get_final() && (f1->get_name() != "__init__"))
			{
				cout << "erroe 1"; this->errRecovery->errQ->enqueue(unfinishfunction.at(j)->get_LineNo(), unfinishfunction.at(j)->get_ColNo(), "the method is final and you can't override it ", f1->get_name());
			}
			else if (f1 && (f1->getparameters().size() != unfinishfunction.at(j)->get_function()->getparameters().size()) && (f1->get_name() != "__init__"))
			{
				cout << "erroe 2";  this->errRecovery->errQ->enqueue(unfinishfunction.at(j)->get_LineNo(), unfinishfunction.at(j)->get_ColNo(), "the method didn't have the same overrided method parameter", f1->get_name());
			}

		}
	}

}
void MyParser::print_symbol()
{
	print_st(this->st);
}