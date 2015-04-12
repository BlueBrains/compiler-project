#pragma once
#ifndef __TYPENODE__
#define __TYPENODE__
#include"Node.h"
#include"..\ST\Type.h"
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
	ValueNode() :varType(INT), Node(NULL, NULL, valueNode)
	{

	}
	ValueNode(void* v1, Types type, Node* son, Node*next) :VarValue(v1), varType(type), Node(son, next, valueNode)
	{

	}
};
#endif