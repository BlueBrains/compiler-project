#ifndef Symbol_H
#define Symbol_H
#include <string>

//#include "../yacc.hpp"
extern std::ofstream out;
using namespace std;


class Symbol{
private:

	//Symbol* prev;
	char* name;

	//char* path;
public:
	Symbol();	
	Symbol(char*);
	Symbol(Symbol*);
	//	Symbol(char*, char*);
	//virtual void set_prev(Symbol* next);	
	//virtual Symbol* get_prev();	
	virtual char* get_name()const;
	virtual void set_name(char* name);
	//virtual void set_path(string path);
	//virtual string get_path();
	//virtual void set_full_path(string path);
	//virtual void to_string();

};
#endif 