#pragma once
#ifndef __AST__
#define __AST__
#include"Node.h"
#include"ClassNode.h"
class AST
{
public:
	AST(void);
	~AST(void);
	Node * createClassNode(Type* t,Node * son, Node* next, NodeType nt)
	{
		Node* temp = new ClassNode(t, son, next, nt);
		return temp;
	}

	//Node * addToLastRight(TreeNode * basic, TreeNode* newItem);
	void print(Node * tn, int lvl);
};
#endif