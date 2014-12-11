#include "MyMap.h"
#include<string>
void MapElem::setName(string name){
	this->name = name;
}

string MapElem::getName(){
	return this->name;
}

void MapElem::setElem(void* elem){
	this->elem = elem;
}

void* MapElem::getElem(){
	return this->elem;
}

MapElem* MapElem::getNext(){
	return this->next;
}

void MapElem::setNext(MapElem * newMapElem){
	this->next = newMapElem;
}

MyMap::MyMap(void)
{
	for(int i=0; i<this->mapLength; i++){
		this->arr[i] = 0;
	}
}

MyMap::~MyMap(void)
{
}

int MyMap::hash(string name){
	unsigned int i;
	int retVal = 0;
	const char * x = name.c_str();
	for(i = 0 ; i < strlen(name.c_str()); i++)
	{		
		retVal <<= 2;
		retVal ^= (int)(*name.c_str());		
		x++;
	}
	return (retVal%mapLength);	
}

void MyMap::put(string name, void* element){
	int index = this->hash(name);
	MapElem * newMapElem = new MapElem();
	newMapElem->setName(name);
	newMapElem->setElem(element);
	newMapElem->setNext(0);
	newMapElem->setNext(this->arr[index]);
	this->arr[index] = newMapElem;
}

void* MyMap::get(string name){
	int index = this->hash(name);
	//string x = strcat(x, name);
	MapElem * temp = this->arr[index];
	while((temp != 0) && (strcmp(temp->getName(),name.c_str()) != 0)){
		temp = temp->getNext();
	}
	if(temp == 0)
		return 0;
	else
		return temp->getElem();
}
