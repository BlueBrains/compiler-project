#pragma once
#ifndef __AST__
#define __AST__
#include"Node.h"
#include"ClassNode.h"
char* arr[] =
{ "rootNode","intValNode", "stringValNode", "idNode", "callNode", "assignNode", "minusNode", "plusNode", "moreThanNode", "lessThanNode", "exprListNode",
"ifNode", "stmtListNode", "whileNode", "declrationStmtNode", "expressionNode",
"functionListNode", "functionNode", "functionHeaderNode", "paramNode", "paramListNode",
"idTypeNode", "intTypeNode", "stringTypeNode","classNode" };

class AST
{
public:
	AST(void)
	{

	}
	~AST(void)
	{

	}
	ClassNode * createClassNode(Type* t,Node * son, Node* next)
	{
		ClassNode* temp = new ClassNode(t, son, next);
		return temp;
	}
	Node * addNext(Node* base,Node* next)
	{
		base->Next = next;
		return base->Next;
	}
	//Node * addToLastRight(TreeNode * basic, TreeNode* newItem);
	void print(Node * tn, int lvl)
	{
		if (tn){
			for (int i = 0; i<lvl; i++)
				cout << "  ";
			cout << arr[tn->type] << "\t";
			if (arr[tn->type]=="classNode")
			{
				ClassNode* test = static_cast<ClassNode*>(tn);
				cout <<"class name is "<< test->get_type()->get_name() << endl;

			}
			print(tn->Son, lvl + 1);
			print(tn->Next, lvl + 1);
		}
	}
};
#endif