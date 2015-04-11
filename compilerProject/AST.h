#pragma once
#ifndef __AST__
#define __AST__
#include"Node.h"
#include"ClassNode.h"
#include"WhileNode.h"
#include"expressionNode.h"
#include"IDNode.h"
#include"TypeNode.h"
#include"functionNode.h"
#include"ifNode.h"
char* arr[] =
{ "rootNode","typeNode", "stringValNode", "idNode", "callNode", "assignNode", "minusNode", "plusNode", "moreThanNode", "lessThanNode", "exprListNode",
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
	FunctionNode * createFunctionNode(Function* f, Node * son, Node* next)
	{
		FunctionNode* temp = new FunctionNode(f, son, next);
		return temp;
	}
	WhileNode * createWhileNode(Node* cond, Node * son, Node* next)
	{
		WhileNode* temp = new WhileNode(cond, son, next);
		return temp;
	}
	ExpressionNode * createExprNode(Node* v1,Node* v2, Node * son, Node* next,operand op)
	{
		ExpressionNode* temp = new ExpressionNode(v1,v2,op, son, next);
		return temp;
	}
	IDNode * createIDNode(Variable* v1, Node * son, Node* next)
	{
		IDNode* temp = new IDNode(v1, son, next);
		return temp;
	}
	TypeNode * createTypeNode(void* v1, Node * son, Node* next, Types t)
	{
		TypeNode* temp = new TypeNode(v1,t, son, next);
		return temp;
	}
	IfNode* createIfNode(Node* son, Node* next, Node* condition, Node* scoop)
	{
		IfNode* temp = new IfNode(condition, scoop, son, next);
	}
	Node * addNext(Node* base,Node* next)
	{
		base->Next = next;
		return base->Next;
	}
	Node * addSon(Node* base, Node* Son)
	{
		base->Son = Son;
		return base->Son;
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
			else if (arr[tn->type] == "functionNode")
			{
				FunctionNode* test = static_cast<FunctionNode*>(tn);
				cout << "function name is " << test->get_function()->get_name() << endl;

			}
			else if (arr[tn->type] == "ifNode")
			{
				IfNode* test = static_cast<IfNode*>(tn);
				cout << "IF NODE !" << endl;

			}
			print(tn->Son, lvl + 1);
			print(tn->Next, lvl + 1);
		}
	}
};
#endif