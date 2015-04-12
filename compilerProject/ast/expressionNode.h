#pragma once
#ifndef __EXPRESSIONNODE__
#define __EXPRESSIONNODE__
#include"Node.h"
#include"..\ST\Type.h"
enum operand {
	PLUS, MINUS, MULT, DIV,MOD,GREATHER,LESS,EQUALGREATHER,EQUALLESS
};
class ExpressionNode :public Node
{
private:
	operand op;
public:
	operand get_operand()
	{
		return op;
	}
	ExpressionNode() :op(PLUS), Node(NULL, NULL, expressionNode)
	{

	}
	ExpressionNode(operand op, Node* son, Node*next) : op(op), Node(son, next, expressionNode)
	{

	}
};
#endif