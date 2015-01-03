#pragma once
#ifndef __TYPE__
#define __TYPE__
#include"Symbol.h"
#include"Scope.h"
#include<string>
#include<set>
#include<vector>
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
	vector<Type*> getInheritedType();
	void setouter_class(Type* e);
	Type* getouter_class();
	void setScope(Scope * m);
	Scope * getScope();
	void addChild(set<int> &s){
		
		for (auto i : s){
			children_ids.insert(i);
		}
		for (int i = 0; i < int(inhertedList.size()); i++)
		{
				inhertedList.at(i)->addChild(children_ids);
		}
		
	}


	Type(char* name, int typeSize = 4);
	Type(Type*);
	virtual int getTypeSize();
	void setImplemented();
	void setIs_final(bool final);
	bool getIs_final();
	completness getStatus();
	void setStatus(completness);
	int getId();

private:
	completness status;
	Type* outer_class;
	Scope * scope;
	bool is_final;
	int _id;
	vector<Type*> inhertedList;
	set<int> children_ids;
	void setis_final(bool final);
};
#endif