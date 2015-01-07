#include "MyMap.h"
#include<string>
void MapElem::setName(char* name){
	this->name = name;
}

char* MapElem::getName(){
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
char* MapElem::gettype(){
	return this->type;
}

MyMap::~MyMap(void)
{
}
MapElem* MyMap::getbyId(int i){

	MapElem * temp = this->arr[i];
	if (temp == 0)
		return 0;
	else
		return temp;
}
int MyMap::hash(char* name){
	unsigned int i;
	int retVal = 0;
	const char * x = name;
	for(i = 0 ; i < strlen(name); i++)
	{		
		retVal <<= 2;
		retVal ^= (int)(*name);		
		x++;
	}
	return (retVal%mapLength);	
}

void MyMap::put(char* name, void* element, char* type){
	int index = this->hash(name);
	MapElem * newMapElem = new MapElem();
	newMapElem->setName(name);
	newMapElem->setElem(element);
	newMapElem->type = type;
	newMapElem->setNext(0);
	newMapElem->setNext(this->arr[index]);
	this->arr[index] = newMapElem;
}

void MyMap::remove(char* name)
{
	int index = this->hash(name);
	MapElem * temp = this->arr[index];
	this->arr[index] = this->arr[index]->getNext();
	temp->setNext(0);
}

void* MyMap::get(char* name, char* elemtype){
	int index = this->hash(name);
	//char* x = strcat(x, name);
	MapElem * temp = this->arr[index];
	while ((temp != 0) && ((strcmp(temp->getName(), name) != 0) || (strcmp(temp->type, elemtype) != 0))){
		temp = temp->getNext();
	}
	if (temp == 0)
		return 0;
	else
		return temp->getElem();
}

void MyMap::clear()
{

	int size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < size; i++)
	{
		arr[i] = NULL;
	}
}
