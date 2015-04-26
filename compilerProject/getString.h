#pragma once
#ifndef __GETSTRING__
#define __GETSTRING__
#include<string>
#include"AST/expressionNode.h"
using namespace std;
class getString
{
public:
	string str;
	operand op_amer;
	getString():str("")
	{

	}
	getString(string h) :str(h)
	{

	}
};
#endif