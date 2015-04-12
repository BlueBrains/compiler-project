#pragma once
#ifndef __CLASSNODE__
#define __CLASSNODE__
#include"Node.h"
#include"..\ST\Type.h"
class ClassNode:public Node
{
private:
	Type* type_node;
public:
	Type* get_type()
	{
		return type_node;
	}
	ClassNode() :type_node(NULL), Node(NULL,NULL,classNode)
	{
		
	}
	ClassNode(Type* t,Node* son,Node*next) :type_node(t), Node(son,next,classNode)
	{
		
	}
};
#endif