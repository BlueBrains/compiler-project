#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "MyParser.h"
#include "ErrorRevovery.h"
#include <algorithm>
#include <cstring>

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
	Variable* v = (Variable*)this->st->currScope->m->get(n);
	if(n){
		Variable* v = (Variable*)this->st->currScope->m->get(n);
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
	}
	return v;
}

Function * MyParser::createTypeFunctionHeader(Type* tname, char* access, char* name, vector <char*> parameter, int lineNo, int colNo){
	Type * type =tname;
	if (!type){
		this->errRecovery->errQ->enqueue(lineNo, colNo, "Try to add function to not existing type", name);
		return 0;
	}

	for (int i = 0; i < int(type->getInheritedType().size()); i++)
	{
		Type * x = type->getInheritedType().at(i);
		Function * f1 = (Function *)x->getScope()->m->get(name);
		if (f1 && f1->get_final() )
		{
			this->errRecovery->errQ->enqueue(lineNo, colNo, "the method is final and you can't override it ", f1->get_name());
			return 0;
		}
		else if (f1 && !f1->comparePar(parameter) && (f1->get_name != "__init__"))
		{
			this->errRecovery->errQ->enqueue(lineNo, colNo, "the method didn't have the same overrided method parameter", f1->get_name());
			return 0;
		}
	}
	Function * f = (Function *)type->getScope()->m->get(name);
	if (f){
		this->errRecovery->errQ->enqueue(lineNo, colNo, "Function is already exist inside type", name);
		return 0;
	}

	f = new Function();
	f->set_name(name);
	f->set_final(access);
	type->getScope()->m->put(name, f, "Function");
	f->setScope(new Scope);
	f->getScope()->parent = type->getScope();
	this->st->currScope = f->getScope();

	for (int i = 0; i < parameter.size(); i++) {
		f->setparameters(parameter[i], type);
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
	//Type* out = this->outer_type.end();
	char* x = child;
	bool found;//search if the inherted type is exist and not in contraction
	vector<constraction*>::iterator it = find_if(constraction_type.begin(), constraction_type.end(), Comparator_constraction(new constraction(t)));
	//int it = constraction_type.find(new constraction(t));
	if (it != constraction_type.end())
	{
		found = false;
	}
	else
		found = true;
	//check if the outer class of new class is inherted from t 
		if (found)
		{
			Type* t1 = (Type*)t->getScope()->m->get(x);
			if (t1)
			{
				if (t1->getIs_final())
				{
					//this->errRecovery->errQ->enqueue(lineno, colno, "the type is final and you can't inheteted", name);
					return 0;
				}
				else
					return t1;
			}
			else
			{
				//this->errRecovery->errQ->enqueue(lineno, colno, "undeclarated type", name);
				return 0;
			}
		}
		else
		{
			Type* t1 = new Type();
			t1->set_name(x);
			//t1->declared = 0;
			t1->setouter_class(t);
			//t->getScope()->m->put(x, t1);
			//t1->setStatus(completness::under_constraction);
			constraction* c = new constraction(t1,false,l,cc);
			constraction_type.push_back(c);
			return t1;
		}

	

		
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
Type * MyParser::createType(char* name, vector<char*>inherted_list, int lineno, int colno, bool is_final)
{
	//cout << "enter" << endl;
	char *tokenPtr;
	Type* t = (Type*)this->st->currScope->m->get(name);
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
	if (outer_type.size() > 0)
	{
		for (int i = 0; i < outer_type.back()->getInheritedType().size(); i++)
		{
			Type* temp = (Type*)outer_type.back()->getInheritedType().at(i)->getScope()->m->get(name);
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
	//vector<constraction*>::iterator it = find_if(constraction_type.begin(), constraction_type.end(),Comparator_constraction(new constraction(t)));
	//int it = constraction_type.find(new constraction(t));
	/*
	if (it != constraction_type.end())
	{
		if (is_final)
		{
			int element_pos = distance(constraction_type.begin(), it);//for get the element finded in constraction type
//			cout <<"the type def of it "<<typeid(*it).name;
			//this->errRecovery->errQ->enqueue(lineno, colno, "there are another classes which inherted from this class", name);
//			this->errRecovery->errQ->enqueue(constraction_type.at(element_pos)->get_LineNo, constraction_type.at(element_pos)->get_ColNo, "you can't inheterted from final class", name);
			no_error = 0;
		}
		t = constraction_type.back()->get_type();
		//Type* xx = new Type();
		//xx = constraction_type.at(it)->get_type();
		constraction_type.erase(it);
	}*/
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
			Type* t1 = (Type*)this->st->getTypeFromCurrentScope(tokenPtr);
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
		y = (Type*)s->m->get(x);
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
		if (y->getIs_final())
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
	cout << "rootScope {" << endl;
	printScope(s->getrootscope());
	cout << "end rootScope }" << endl;
}