#pragma once
#ifndef __TYPENODE__
#define __TYPENODE__
#include"Node.h"
#include"ST\Type.h"
enum Types {
	INT, FLOAT, CHAR, LONG,STRINGS,True,False
};
class ValueNode :public Node
{
private:
	Types varType;
	void* VarValue;
public:
	void* get_value()
	{
		return VarValue;
	}
	Types get_types()
	{
		return varType;
	}
	ValueNode() :varType(INT), Node(NULL, NULL)
	{

	}
	ValueNode(void* v1, Types type, Node* son, Node*next) :VarValue(v1), varType(type), Node(son, next)
	{

	}
	virtual void print()
	{
		//cout << getNodeType()<<
		void * g = get_value();
		cout << getNodeType()<<"     ";
		if (get_types() == 0)
		{
			int x = *(int*)(g);
			cout << "value is " << x << endl;
		}
		else if (get_types() == 1)
		{
			float x = *(float*)(g);
			cout << "value is " << x << endl;
		}
		else if (get_types() == 2)
		{
			char x = *(char*)(g);
			cout << "value is " << x << endl;
		}
		else if (get_types() == 3)
		{
			long x = *(long*)(g);
			cout << "value is " << x << endl;
		}
		else if (get_types() == 4)
		{
			string x = *(string*)(g);
			cout << "value is " << x << endl;
		}
		else if (get_types() == 5)
		{
			//string x = *(string*)(g);
			cout << "value is true"  << endl;
		}
		else if (get_types() == 6)
		{
			//string x = *(string*)(g);
			cout << "value is false" << endl;
		}

	}
	virtual string getNodeType()
	{
		return "ValueNode";
	}
};
#endif