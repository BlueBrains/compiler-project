#ifndef VAR_H
#define VAR_H
#include <string>
#include "Type.h"
#include "Symbol.h"
using namespace std;
class Type;
enum AccessModifier{
	Private = 0,
	Public,
	Protected
};
class Variable :public Symbol{
private:
	Type * type;
	enum	AccessModifier accessModifier;
	bool isConst;
public:
	/*
	Variable();
	~Variable();
	void setName(char* n);
	char* getName();
	void setType(char* n);
	char* getType();
	*/
	Variable(string name, Type* type, string = "private");
	Variable(Variable*);
	Variable(string name, Type* type, bool);
	static bool compare(Variable *, Variable*);
	string getAccessModifier();
	void setAccessModifier(string);
	virtual bool getIsConst();
	virtual void setIsConst(bool);
	Type* getType();
	void setType(Type*);
	
};
#endif