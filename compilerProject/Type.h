#include"Symbol.h"
#include"Scope.h"
#include<string>
enum AccessModifier{
	Public = 0,
	Private,
	Protected
};
enum completness{
	under_constraction = 0,
	implemented,
	finished
};
class Type:Symbol {
protected:
	int _typeSize; // the size of an instance from this type in memory
	Type* inhertedList;
public:
	
	bool declared;/// multi-parse
	Type();
	~Type();
	void setInheritedType(Type*n);
	Type* getInheritedType();
	void setouter_class(Type* e);
	Type* getouter_class();
	void setScope(Scope * m);
	Scope * getScope();



	Type(string name, int typeSize = 4);
	Type(Type*);
	virtual int getTypeSize();
	void setImplemented();
	completness getStatus();
	void setStatus(completness);
	completness status;
private:
	Type* outer_class;
	Scope * scope;
};