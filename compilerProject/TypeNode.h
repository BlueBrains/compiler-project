#pragma once
#ifndef __TYPENODE__
#define __TYPENODE__
#include"Node.h"
#include"ST\Type.h"
enum Types {
	INT, FLOAT, CHAR, LONG,STRINGS,TRUEVAL,FALSEVAL
};
class TypeNode :public Node
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
	TypeNode() :varType(INT), Node(NULL, NULL, typeNode)
	{

	}
	TypeNode(void* v1, Types type, Node* son, Node*next) :VarValue(v1), varType(type), Node(son, next, typeNode)
	{

	}
};
#endif