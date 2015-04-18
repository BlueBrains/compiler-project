#pragma once
#ifndef __AST__
#define __AST__
#include"Node.h"
#include"ClassNode.h"
#include"WhileNode.h"
#include"expressionNode.h"
#include"IDNode.h"
#include"AssignmentNode.h"
#include"ValueNode.h"
#include"functionNode.h"
#include"CallVariableNode.h"
#include"CallTypeNode.h"
#include"callFunctionNode.h"
#include"dotNode.h"
char* arr[] =
{ "rootNode" , "valueNode", "stringValNode", "idNode", "callNode", "assignNode", "minusNode", "plusNode","moreThanNode", "lessThanNode", "exprListNode",

//statements
"ifNode", "stmtListNode", "whileNode", "declrationStmtNode", "expressionNode",

//function
"functionListNode", "functionNode", "functionHeaderNode", "paramNode", "paramListNode", "FunctionCall",

//type: Here AST is used as temporoy data structure to hold type to upper grammars
"idTypeNode", "intTypeNode", "stringTypeNode", "classNode", "TypeCall", "VariableCall","Unkown","DotNode" };

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
	ExpressionNode * createExprNode(Node * son, Node* next,operand op)
	{
		ExpressionNode* temp = new ExpressionNode(op, son, next);
		return temp;
	}
	IDNode * createIDNode(Variable* v1, Node * son, Node* next)
	{
		IDNode* temp = new IDNode(v1, son, next);
		return temp;
	}
	 AssignmentNode* createAssignNode(Node * son, Node* next)
	{
		AssignmentNode* temp = new AssignmentNode(son, next);
		return temp;
	}
	 DotNode* createDotNode(Node * son, Node* next)
	 {
		 DotNode* temp = new DotNode(son, next);
		 return temp;
	 }
	ValueNode * createTypeNode(void* v1, Node * son, Node* next, Types t)
	{
		
		//cout << "value is amer " << (*(int*)v1) << endl;
		ValueNode* temp = new ValueNode(v1, t, son, next);
		return temp;
	}

	CallVariableNode * createCallVarNode(string id,Variable* v, Node * son, Node* next)
	{
		CallVariableNode *temp = new CallVariableNode(id, v, son, next);
		return temp;
	}
	CallFunctionNode* createCallFunctionNode(string id,Node* args, Function* v, Node * son, Node* next)
	{
		CallFunctionNode *temp = new CallFunctionNode(id, args, v, son, next);
		return temp;
	}
	Node * addNext(Node* base,Node* next)
	{
		while (base->Next != NULL)
			base = base->Next;
		base->Next = next;
		return base;
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
				tn->print();
			print(tn->Son, lvl + 1);
			print(tn->Next, lvl + 1);
		}
	}
};
#endif