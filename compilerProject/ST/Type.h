#pragma once
#ifndef __TYPE__
#define __TYPE__
#include"Symbol.h"
#include"Scope.h"

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
	Type(void);
	~Type();
	bool setInheritedType(Type*n);
	vector<Type*> getInheritedType();
	void setouter_class(Type* e);
	Type* getouter_class();
	void setScope(Scope * m);
	Scope * getScope();
	
	bool addChild(vector<int> s){
		/*
		for (auto i : s){
			children_ids.push_back(i);
		}*/
		vector<int>::iterator it = std::find(s.begin(), s.end(), getId());
		if (it != s.end())
		{
			return false;
		}
		for (int i = 0; i < int(s.size()); i++)
		{
				this->children_ids.push_back(s.at(i));
		}
		bool k = true;
		for (int i = 0; i < int(inhertedList.size()); i++)
		{
				k=inhertedList.at(i)->addChild(children_ids);
				if (!k)
				{
					return false;
				}
		}
		return true;
	}


	Type(char* name, int typeSize = 4);
	//Type(Type*);
	virtual int getTypeSize();
	void setImplemented();
	void setIs_final(bool final);
	bool getIs_final();
	completness getStatus();
	void setStatus(completness);
	int getId();
	bool operator==(Type xx);
private:
	completness status;
	Type* outer_class;
	//MyVector<char*>ll;
	Scope * scope;
	bool is_final;
	int _id;
	vector<int> children_ids;
vector<Type*> inhertedList;
	void setis_final(bool final);
};
#endif