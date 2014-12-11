#pragma once
#ifndef __TYPE__
#define __TYPE__
#include"Symbol.h"
#include"Scope.h"
#include<string>
#include<set>

enum AccessModifier{
	Private = 0,
	Public,
	Protected
};
enum completness{
	under_constraction = 0,
	implemented,
	finished
};
class Type :public Symbol {
protected:
	int _typeSize; // the size of an instance from this type in memory

public:
	static int classesCount;
	bool declared;/// multi-parse
	Type();
	~Type();
	void setInheritedType(Type*n);
	Type* getInheritedType();
	void setouter_class(Type* e);
	Type* getouter_class();
	void setScope(Scope * m);
	Scope * getScope();
	void addChild(set<int> &s){
		for (auto i : s){
			children_ids.insert(i);
		}
		if (inhertedList)
			inhertedList->addChild(children_ids);
	}


	Type(string name, int typeSize = 4);
	Type(Type*);
	virtual int getTypeSize();
	void setImplemented();
	completness getStatus();
	void setStatus(completness);
	int getId();

private:
	completness status;
	Type* outer_class;
	Scope * scope;
	int _id = -1;
	Type* inhertedList;
	set<int> children_ids;
};
#endif