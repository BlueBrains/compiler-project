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
		if (name == cons.at(i)->get_type())
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
Variable* MyParser::set_storage_modifier(Variable* v, bool is_static, bool is_final)
{
	v->set_static(is_static);
	v->setIsConst(is_final);
	return v;
}
Variable* MyParser::addVariableToCurrentScope(char* n, char* acc_mod, bool is_static, bool is_final, int lineNo, int colNo, bool is_array, bool is_dic, bool self){
	Variable* v = NULL;
	if((n)){
		if (self)
		{
			v = (Variable*)outer_type.back()->getScope()->m->get(n, "Variable");
		}
		else
		{
			v = (Variable*)this->st->currScope->m->get(n, "Variable");
		}
		
		if ((v)&&(!v->by_self)&&(!self))
		{
			this->errRecovery->errQ->enqueue(lineNo, colNo, "Variable is already declared", n);
			return 0;
		}
		else if ((v) && (v->by_self) && (!self))//if v is exist and declarated by self in function and come def x;
		{
			v->by_self = false;
			v->setAccessModifier(acc_mod);
			//v->set_static(is_static);
		}
		else if (!v)
		{
		v = new Variable();
			v->set_name(n);
			v->setAccessModifier(acc_mod);
			v->by_self = self;
			v->set_isdic(is_dic);
			v->set_isarray(is_array);
			if (self)
			{
				char* name = new char[50];
				name = strcpy(name, n);
				v->set_static(true);
				this->st->currScope->parent->m->put(name, v, "Variable");
			}
			else
			{
				v->setIsConst(is_final);
				v->set_static(is_static);
				if (outer_type.back()->getouter_class() != NULL)
				{
					if ((is_static) &&(!is_final)&& (!outer_type.back()->getIs_static()))
					{
						this->errRecovery->errQ->enqueue(lineNo, colNo, "Illegal static declaration in inner class", n);
					}
				}
				char* name = new char[50];
				name=strcpy(name,n);
				this->st->currScope->m->put(name, v, "Variable");
			}
				
		}
	}
	return v;
}


Variable* MyParser::checkVariable(char* name, Type* t, int lineNo, int colNo, bool from_right, bool is_array, bool is_dic, bool self){
	char* tokenPtr;
	char buffer[15];
	bool found = false;
	sprintf(buffer, name);
	tokenPtr = strtok(buffer, ".");
	tokenPtr = strtok(NULL, ".");
	if (tokenPtr != NULL)
	{
		return 0;
	}
	Variable *v = NULL;
	if (self)
	{
		 v = (Variable*)t->getScope()->m->get(name,"Variable");
	}
	else
	{
		 v = this->st->getVariableFromCurrentScope(name, t);
	}

	if (!v)
	{
		if (from_right)
		{
			v = this->addVariableToCurrentScope(name,"", false, false, lineNo, colNo,is_array,is_dic);
		}
		else
		{
			this->errRecovery->errQ->enqueue(lineNo, colNo, "Undeclareted Variable", name);
			Streams::verbose() << "Error: Undeclareted Variable at Line No:" << lineNo << " Column No:" << colNo << endl;
		}
		
	}
	return v;
}

Function * MyParser::createTypeFunctionHeader(Type* tname, bool s, bool p, bool fi, char* name, vector <char*> parameter, int lineNo, int colNo){
	Type * type = tname;
	if (!type){
		this->errRecovery->errQ->enqueue(lineNo, colNo, "Try to add function to not existing type", name);
	}
	else
	{
		if ((outer_type.size()>1) && !tname->getIs_static() && s)
		{
			this->errRecovery->errQ->enqueue(lineNo, colNo, "Try to add static function to not static inner class", name);
		}
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
		/*if ((strcmp(parameter.at(0), "self") == 0) && (s || fi))
		{
			this->errRecovery->errQ->enqueue(lineNo, colNo, "first static function parameter can't be self", name);
		}

		if ((strcmp(parameter.at(0), "self") != 0) && ( !s && !fi))
		{
			this->errRecovery->errQ->enqueue(lineNo, colNo, "first function parameter should be self", name);
		}
		*/
		/*
		bool selflast = false;
		for (int i = 0; i < parameter.size(); i++) {
			if ('*' == parameter.at(i)[0])
			{
				selflast = true;
			}
		}
		*/
		//if (!selflast){
			vector<char*>::iterator it = find_if(parameter.begin() + 1, parameter.end(), Comparator_char("self"));
			if (it != parameter.end()){
				this->errRecovery->errQ->enqueue(lineNo, colNo, "Unexpected Self here , should be first parameter", name);
			}
		//}
		/*
		else
		{
			vector<char*>::iterator it = find_if(parameter.begin(), parameter.end()-1, Comparator_char("self"));
			if (it != (parameter.end()-1)){
				this->errRecovery->errQ->enqueue(lineNo, colNo, "Unexpected Self here , should be first parameter", name);
			}
		}
		*/
	}

	//vector <char *> tempvec = parameter;
	vector <char *> cleanp = parameter;
	vector <char *> clean2p = parameter;
	vector <char *> clean3p = parameter;
	bool dontdo1 = false;
	bool dontdo2 = false;

	for (int i = 0; i < parameter.size(); i++) {
		if ('*' != parameter.at(i)[0])
		{
			std::string tempstr(parameter.at(i));
			std::string erro("*" + tempstr);
			char *cstr = new char[erro.length() + 1];
			strcpy(cstr, erro.c_str());
			cleanp.at(i) = cstr;
		}
		else
		{
			dontdo1 = true;
		}
	}
	
	if (dontdo1){
		for (int i = 0; i < cleanp.size(); i++) {
			if ((strlen(parameter.at(i)) > 1) && ('*' == parameter.at(i)[0]) && ('*' != parameter.at(i)[1]))
			{
				std::string tempstr(parameter.at(i));
				std::string erro("*" + tempstr);
				char *cstr = new char[erro.length() + 1];
				strcpy(cstr, erro.c_str());
				clean2p.at(i) = cstr;
			}
			else if ((strlen(parameter.at(i)) > 1) && ('*' == parameter.at(i)[0]) && ('*' == parameter.at(i)[1]))
			{
				dontdo2 = true;
			}
		}

	}

	if (dontdo2){
		for (int i = 0; i < cleanp.size(); i++) {
			if ('*' != parameter.at(i)[0])
			{
				std::string tempstr(parameter.at(i));
				std::string erro("**" + tempstr);
				char *cstr = new char[erro.length() + 1];
				strcpy(cstr, erro.c_str());
				clean3p.at(i) = cstr;
			}
		}
	}

	vector <char *> tempvec = cleanp;
	for (int i = 0; i < parameter.size(); i++) {
		tempvec.at(i) = "!";
		vector<char*>::iterator it = find_if(tempvec.begin(), tempvec.end(), Comparator_char(cleanp.at(i)));
		if (it != tempvec.end()){
			std::string tempstr(parameter.at(i));
			std::string erro("dublicated parameter " + tempstr);
			char *cstr = new char[erro.length() + 1];
			strcpy(cstr, erro.c_str());

			this->errRecovery->errQ->enqueue(lineNo, colNo, cstr, name);
		}

	}
	tempvec.clear();
	if (dontdo1){
		tempvec = clean2p;
		for (int i = 0; i < parameter.size(); i++) {
			tempvec.at(i) = "!";

			vector<char*>::iterator it = find_if(tempvec.begin(), tempvec.end(), Comparator_char(clean2p.at(i)));
			if (it != tempvec.end()){
				std::string tempstr(parameter.at(i));
				std::string erro("dublicated parameter " + tempstr);
				char *cstr = new char[erro.length() + 1];
				strcpy(cstr, erro.c_str());

				this->errRecovery->errQ->enqueue(lineNo, colNo, cstr, name);
			}

		}
	}
	tempvec.clear();
	if (dontdo2){
		tempvec = clean3p;
		for (int i = 0; i < parameter.size(); i++) {
			tempvec.at(i) = "!";

			vector<char*>::iterator it = find_if(tempvec.begin(), tempvec.end(), Comparator_char(clean3p.at(i)));
			if (it != tempvec.end()){
				std::string tempstr(parameter.at(i));
				std::string erro("dublicated parameter " + tempstr);
				char *cstr = new char[erro.length() + 1];
				strcpy(cstr, erro.c_str());

				this->errRecovery->errQ->enqueue(lineNo, colNo, cstr, name);
			}

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
	f->set_final(fi);
	f->set_static(s);
	f->set_private(p);
	type->getScope()->m->put(name, f, "Function");
	f->setScope(new Scope);
	f->getScope()->parent = type->getScope();
	this->st->currScope = f->getScope();

	for (int i = 0; i < parameter.size(); i++) {
		
		f->setparameters(parameter[i]);
	}
	
	for (int i = 0; i < f->getparameters().size(); i++) {
		
		if (strcmp(f->getparameters().at(i)->get_name(),"self")!=0)
		f->getScope()->m->put(f->getparameters().at(i)->get_name(), f->getparameters().at(i), "Variable");
	}

	if ((outer_type.size() == 1) && (strcmp(tname->getAccessModifier(), "public") == 0) && (strcmp(name, "main") == 0))
	{
		if (st->mainfunc == NULL)
		{
			f->set_static(true);
			st->mainfunc = f;
		}
		else
			this->errRecovery->errQ->enqueue(lineNo, colNo, "you'r allowed to put only one static main method", name);
	}
	if ((outer_type.size() >1) && (tname->getIs_static()) && (strcmp(name, "main") == 0))
	{
		if (st->mainfunc == NULL)
		{
			f->set_static(true);
			st->mainfunc = f;
		}
		else
			this->errRecovery->errQ->enqueue(lineNo, colNo, "you'r allowed to put only one static main method", name);
	}

	if ((outer_type.size() >1) && (!tname->getIs_static()) && f->get_static())
	{
		this->errRecovery->errQ->enqueue(lineNo, colNo, "you'r not allowed to put static method in non static class", name);
	}
	
	if (nullclass && (strcmp(name,"__init__")!=0))
	{
		unfinished *temp = new unfinished(tname, f, lineNo, colNo);
		unfinishfunction.push_back(temp);
	}
	return f;
}


Function * MyParser::finishFunctionDeclaration(Function * f, bool ff, bool ss, int lineNo, int colNo){
	if (f!=NULL)
		{	
				if (ff)
			{
				f->set_final(ff);
				char* first = f->getfirstpara();
				if (first != NULL)
					if (strcmp("self", first) == 0)
						this->errRecovery->errQ->enqueue(lineNo, colNo, "first final function parameter can't be self", f->get_name());
			}
			if (ss)
			{
				f->set_static(ss);
				char* first = f->getfirstpara();
				if (first != NULL)
					if (strcmp("self", first) == 0)
						this->errRecovery->errQ->enqueue(lineNo, colNo, "first static function parameter can't be self", f->get_name());
			}
			if (!ff && !ss)
			{

				char* first = f->getfirstpara();
				if ((first != NULL) && (strcmp("self", first) != 0))
					this->errRecovery->errQ->enqueue(lineNo, colNo, "first non static/final function parameter should be self", f->get_name());
			}

	}
	else 
		this->errRecovery->errQ->enqueue(lineNo, colNo, "error in define function header","cant recognize function name" );
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
	if (!t2)
		{
		//error not found class child
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
Type * MyParser::createType(char* name, vector<char*>inherted_list, char* acc_mod, bool is_static, bool is_final, int lineno, int colno, bool is_final_t)
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
		//cout << "the outer class has the same name" << endl;
		this->errRecovery->errQ->enqueue(lineno, colno, "the outer class has the same name", name);
		no_error = 0;
	}
	
	t = new Type();
	t->set_name(name);
	//cout <<name<<endl;
	//int g = findTypeByName(;
	
	/*this if for chaeck the access midifier of class
	the outer class cant be private or protecected it's just public
	the inner class the defult access modifier is private and it's can be aany other access modifier
	*/
	if (outer_type.size() == 0)
	{
		if ((strcmp(acc_mod, "private") == 0))
		{
			cout << "modifier private not allowed here" << endl;
			this->errRecovery->errQ->enqueue(lineno, colno, "modifier private not allowed here", name);
			//no_error = 0;
		}
		else if ((strcmp(acc_mod, "protected") == 0))
		{
			cout << "modifier protected not allowed here" << endl;
			this->errRecovery->errQ->enqueue(lineno, colno, "modifier protected not allowed here", name);
			//no_error = 0;
		}
		else
			t->setAccessModifier("public");
	}
	else
	{
		t->setAccessModifier(acc_mod);
	}
	/*this if fot check the static modifier according java grammer
	the outer class can't be static 
	the inner class can't be staic if the outer class was not static
	the inner class in first level just can static and his outer not static
	*/
	
	if ((outer_type.size() == 0)&&(is_static))
	{
		cout << "modifier static not allowed here" << endl;
		this->errRecovery->errQ->enqueue(lineno, colno, "modifier static not allowed here", name);
	}
	else if (outer_type.size() > 1)
	{
		Type*yu = outer_type.back();
		if ((is_static) && (outer_type.back()->getIs_static()))
		{
			t->setIs_static(true);
		}
		else if ((is_static) && (!outer_type.back()->getIs_static()))
		{
			cout << "modifier static not allowed here" << endl;
			this->errRecovery->errQ->enqueue(lineno, colno, "modifier static not allowed here", name);
		}
	}
	else if (outer_type.size() == 1)
	{
		t->setIs_static(is_static);
	}
	//for check that the new class are not in parent class in inhertance
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
		t->getScope()->parent = this->st->currScope;
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
						//cout << "you can't inherted from inner class" << endl;

						string temp_st;
						temp_st = "an enclosing instance that contains ";
						temp_st = temp_st + xx;
						this->errRecovery->errQ->enqueue(lineno, colno, const_cast<char *>(temp_st.c_str()), name);
						//no_error = 0;
					}
					t1 = this->returninner(t2->get_name(), t1, lineno, colno);
					if (!t1)
					{
						string temp_st;
						temp_st = "Undefind inner class ";
						temp_st = temp_st + xx;
						this->errRecovery->errQ->enqueue(lineno, colno, const_cast<char *>(temp_st.c_str()), name);
				}
					else if (t1->getIs_final())
				{
							string temp_st;
						temp_st = "cannot inherit from final ";
						temp_st = temp_st + t1->get_name();
						this->errRecovery->errQ->enqueue(lineno, colno, const_cast<char *>(temp_st.c_str()), name);
					}
				}
				if ((t1)&&(!t->setInheritedType(t1)))
				{
					cout << "Error there is an inhertance Loop" << endl;
					this->errRecovery->errQ->enqueue(lineno, colno, "Error there is an inhertance Loop", temp.at(j));
					//no_error = 0;
				}

			}
			else
			{
				
				Type* tcc;
				//int xsi = constraction_type.size();
				tcc = check_if_in_inner(new constraction(t, undeclarated_type, true, lineno, colno), tokenPtr);
				if (tcc)
				{
					t->setInheritedType(tcc);
				}
				else
				{
				undeclarated_type.push_back(inherted_list.at(j));
			}
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

void MyParser::check_static(Type* t,int lineno,int colno)
{
	if (t->getouter_class()->getIs_static())
	{
		if (!t->getIs_static())
		{
			cout << "the outer class has the same name" << endl;
			this->errRecovery->errQ->enqueue(lineno, colno, "the outer class has the same name", "ll");
		}
	}
}
Type * MyParser::finishTypeDeclaration(Type* t){
	//cout <<"size "<< constraction_type.size() << endl;
	if (t == NULL)
	{
		this->errRecovery->errQ->enqueue(0, 0, "error in define type header", "cant recognize function name");
		return 0;
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

	check_functions();
	check_func_Call();
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
	string s1;
	s1 = " ";
	for (int i = 0; i < xx.size();i++)
	{
		
		Scope * s = xx.at(i)->getScope();
		y = (Type*)s->m->get(x,"Class");
		if (y)
		{
			string te = xx.at(i)->get_name();
			te = te + ".";
			te = te + x;
			s1 = s1 + te;
			s1 = s1 + " ";
			n = n + 1;
		}
			
	}
	if (n>1)
	{
		string temp_st;
		temp_st = "ambiguous type between ";
		temp_st = temp_st + s1;
		this->errRecovery->errQ->enqueue(t->get_LineNo(), t->get_ColNo(), const_cast<char *>(temp_st.c_str()), t->get_type()->get_name());
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
					cout << "element is Variable it's name is" << t->getAccessModifier() << " " << ((t->get_static() == true) ? "is static " : "is not static ") << ((t->getIsConst() == true) ? "is final " : "is not final ") << t->get_name() << endl;
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

void MyParser::recrusive_up_parnet(Type *t, int j)
{
	if (t != NULL)
	{
		for (int i = 0; i < int(t->getInheritedType().size()); i++)
		{
			Type* x = t->getInheritedType().at(i);
			recrusive_up_parnet(x,j);
			Function * f1 = (Function *)x->getScope()->m->get(unfinishfunction.at(j)->get_function()->get_name(), "Function");
			if (f1 && f1->get_final() && (f1->get_name() != "__init__"))
			{
				 this->errRecovery->errQ->enqueue(unfinishfunction.at(j)->get_LineNo(), unfinishfunction.at(j)->get_ColNo(), "the method is final and you can't override it ", f1->get_name());
			}
			else if (f1 && !f1->comparePar(unfinishfunction.at(j)->get_function()->getparameters()) && (f1->get_name() != "__init__"))
			{
				 this->errRecovery->errQ->enqueue(unfinishfunction.at(j)->get_LineNo(), unfinishfunction.at(j)->get_ColNo(), "the method didn't have the same overrided method parameter", f1->get_name());
			}

		}
	}
}

void MyParser::check_functions()
{
	for (int j = 0; j< unfinishfunction.size(); j++){
		Type* t = unfinishfunction.at(j)->get_type();
		recrusive_up_parnet(t,j);
	}

}
void MyParser::print_symbol()
{
	print_st(this->st);
}

void MyParser::insert_func_Call(Type* t, char* name, int lineno, int colno)
{
	functionCaller * f = new functionCaller(t,name, lineno, colno);
	funccaller.push_back(f);
}

void  MyParser::recrusive_up_caller(Type* t, int j)
{
	if (t != NULL){
		Function * f1 = (Function *)t->getScope()->m->get(funccaller.at(j)->get_name(), "Function");
		if (!f1){
			recrusive_up_caller(t->getouter_class(), j);
			for (int i = 0; i < int(t->getInheritedType().size()); i++)
			{
				Type* x = t->getInheritedType().at(i);
				recrusive_up_caller(x, j);
				Function * f2 = (Function *)x->getScope()->m->get(funccaller.at(j)->get_name(), "Function");
				if (f2)
				{
					classname.push_back(x->get_name());
				}
			}

		}
		else
			classname.push_back(t->get_name());
	}
}

void MyParser::check_func_Call()
{
	
	for (int j = 0; j< funccaller.size(); j++){
		Type* t = funccaller.at(j)->get_type();
		classname.clear() ;
		Function * f1 = (Function *)t->getScope()->m->get(funccaller.at(j)->get_name(), "Function");
		if (!f1){
			recrusive_up_caller(t,j);
			
			if (classname.size() == 0)
				this->errRecovery->errQ->enqueue(funccaller.at(j)->get_LineNo(), funccaller.at(j)->get_ColNo(), "call to not define function", funccaller.at(j)->get_name());
			else if (classname.size() > 1)
			{
				std::string erro("ambiguous function was found in class");
				for (int k = 0; k < classname.size(); k++)
				{
					std::string tempstr(classname.at(k));
					erro = erro + " , " + tempstr;
				}
				
				char *cstr = new char[erro.length() + 1];
				strcpy(cstr, erro.c_str());
				this->errRecovery->errQ->enqueue(funccaller.at(j)->get_LineNo(), funccaller.at(j)->get_ColNo(), cstr, funccaller.at(j)->get_name());
			}
		}
	}
}