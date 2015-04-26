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
	ExpressionNode() :op(PLUS), Node(NULL, NULL)
	{

	}
	ExpressionNode(operand op, Node* son, Node*next) : op(op), Node(son, next)
	{

	}
	virtual void print()
	{
		string x;
		if (op == 0)
		{
			x = "+";
		}
		else if (op == 1)
		{
			x = "-";
		}
		else if (op == 2)
		{
			x = "*";
		}
		else if (op == 3)
			x = "/";
		else
			x = "ANOTHER ";
		cout << getNodeType() << x<<endl;
	}
	virtual string getNodeType()
	{
		return "Binary NODE ";
	}
};
#endif