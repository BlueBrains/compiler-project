#pragma once
#ifndef __AST__
#define __AST__
#include"ast\Node.h"
#include"ast\ClassNode.h"
#include"ast\expressionNode.h"
#include"ast\IDNode.h"
#include"ast\AssignmentNode.h"
#include"ast\ValueNode.h"
#include"ast\functionNode.h"
#include"ast\CallVariableNode.h"
#include"ast\CallTypeNode.h"
#include"ast\callFunctionNode.h"
#include"ast\WhileNode.h"
#include"ast\ifNode.h"
#include"ast\ElseIfNode.h"
#include"ast\ElseNode.h"
#include"ast\ForNode.h"
#include"ast\TryNode.h"
#include"ast\ExceptNode.h"
#include"ast\FinallyNode.h"

char* arr[] =
{ "rootNode" , "valueNode", "stringValNode", "idNode", "callNode", "assignNode", "minusNode", "plusNode","moreThanNode", "lessThanNode", "exprListNode",

//statements
"ifNode", "elseIfNode", "elseNode", "stmtListNode", "whileNode", "declrationStmtNode", "expressionNode", "forNode", "tryNode", "exceptNode", "finallyNode",

//function
"functionListNode", "functionNode", "functionHeaderNode", "paramNode", "paramListNode", "FunctionCall",

//type: Here AST is used as temporoy data structure to hold type to upper grammars
"idTypeNode", "intTypeNode", "stringTypeNode", "classNode", "TypeCall", "VariableCall" };

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
	WhileNode * createWhileNode(Node * son, Node* next, Node* cond, Node* scoop)
	{
		WhileNode* temp = new WhileNode(son, next, cond, scoop);
		return temp;
	}
	ForNode* createForNode(Node * son, Node* next, Node* expr, Node* range, Node* scoop)
	{
		ForNode* temp = new ForNode(son, next, expr, range, scoop);
		return temp;
	}
	TryNode* createTryNode(Node * son, Node* next, Node* scoop)
	{
		TryNode* temp = new TryNode(son, next, scoop);
		return temp;
	}
	ExceptNode* createExceptNode(Node * son, Node* next, Node* exception, Node* scoop)
	{
		ExceptNode* temp = new ExceptNode(son, next, exception, scoop);
		return temp;
	}
	FinallyNode* createFinallyNode(Node* son, Node* next, Node* scoop)
	{
		FinallyNode* temp = new FinallyNode(son, next, scoop);
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

	ValueNode * createTypeNode(void* v1, Node * son, Node* next, Types t)
	{
		
		//cout << "value is amer " << (*(int*)v1) << endl;
		ValueNode* temp = new ValueNode(v1, t, son, next);
		return temp;
	}

	CallVariableNode * createCallVarNode(string id, Node * son, Node* next)
	{
		CallVariableNode *temp = new CallVariableNode(id, NULL, son, next);
		return temp;
	}
	IfNode* createIfNode(Node* son, Node* next, Node* condition, Node* scoop)
	{
		IfNode* temp = new IfNode(son, next, condition, scoop);
		return temp;
	}
	ElseIfNode* createElseIfNode(Node* son, Node* next, Node* condition, Node* scoop)
	{
		ElseIfNode* temp = new ElseIfNode(son, next, condition, scoop);
		return temp;
	}
	ElseNode* createElseNode(Node* son, Node* next, Node* scoop)
	{
		ElseNode* temp = new ElseNode(son, next, scoop);
		return temp;
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
			else if (arr[tn->type] == "valueNode")
			{
				ValueNode* v = static_cast<ValueNode*>(tn);
				if (v->get_types() == 0)
				{
					void * g = v->get_value();
					int x = *((int*)(&g));
					cout << "value is " << x << endl;
				}
			}				
			else if (arr[tn->type] == "ifNode")
			{
				IfNode* test = static_cast<IfNode*>(tn);
				cout << "IF NODE !" << endl;

			}
			else if (arr[tn->type] == "elseIfNode")
			{
				ElseIfNode* test = static_cast<ElseIfNode*>(tn);
				cout << "ElseIf NODE !" << endl;

			}
			else if (arr[tn->type] == "elseNode")
			{
				ElseNode* test = static_cast<ElseNode*>(tn);
				cout << "ELSE NODE !" << endl;

			}
			else if (arr[tn->type] == "whileNode")
			{
				WhileNode* test = static_cast<WhileNode*>(tn);
				cout << "WHILE NODE !" << endl;

			}
			else if (arr[tn->type] == "forNode")
			{
				ForNode* test = static_cast<ForNode*>(tn);
				cout << "FOR NODE !" << endl;
			}
			else if (arr[tn->type] == "tryNode")
			{
				TryNode* test = static_cast<TryNode*>(tn);
				cout << "TRY NODE !" << endl;
			}
			else if (arr[tn->type] == "exceptNode")
			{
				ExceptNode* test = static_cast<ExceptNode*>(tn);
				cout << "Except NODE !" << endl;
			}
			else if (arr[tn->type] == "finallyNode")
			{
				FinallyNode* test = static_cast<FinallyNode*>(tn);
				cout << "Finally NODE !" << endl;
			}
			print(tn->Son, lvl + 1);
			print(tn->Next, lvl);
		}
	}
};
#endif