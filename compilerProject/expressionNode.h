#pragma once
#ifndef __EXPRESSIONNODE__
#define __EXPRESSIONNODE__
#include"Node.h"
#include"ST\Type.h"
enum operand {
	PLUS, MINUS, MULT, DIV
};
class ExpressionNode :public Node
{
private:
	operand op;
	Node* val1;
	Node* val2;
public:
	Node* get_val1()
	{
		return val1;
	}
	Node* get_val2()
	{
		return val2;
	}
	operand get_operand()
	{
		return op;
	}
	ExpressionNode() :op(PLUS), Node(NULL, NULL, expressionNode)
	{

	}
	ExpressionNode(Node* v1, Node* v2, operand op, Node* son, Node*next) :val1(v1), val2(v2), op(op), Node(son, next, expressionNode)
	{

	}
};
#endif