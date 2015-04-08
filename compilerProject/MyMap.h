#pragma once
#define MAX_LENGTH 71
#include <iostream>
#include<string>
using namespace std;

class MapElem{
private:
	char* name;
	void* elem;
	MapElem * next;
public:
	char* type;
	void setName(char* name);
	char* getName();
	char* gettype();
	void setElem(void* elem);
	void* getElem();
	MapElem* getNext();
	void setNext(MapElem * newMapElem);
};

class MyMap
{
private:
	static const int mapLength = MAX_LENGTH;
	MapElem * arr[mapLength];
	int hash(char* name);
public:
	MyMap(void);
	~MyMap(void);
	void put(char* name, void* item, char* type);
	void* get(char* name, char* type);
	void clear();
	void remove(char* name);
	MapElem* getbyId(int i);

};
