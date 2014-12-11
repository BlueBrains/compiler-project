#pragma once
#define MAX_LENGTH 71
#include <iostream>
#include<string>
using namespace std;
class MapElem{
private:
	string name;
	void* elem;
	MapElem * next;
public:
	void setName(string name);
	string getName();
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
	int hash(string name);
public:
	MyMap(void);
	~MyMap(void);
	void put(string name, void* item);
	void* get(string name);
	
};
