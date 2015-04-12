#pragma once
#ifndef __NODE__
#define __NODE__
enum NodeType {//Expressions
	rootNode = 0, valueNode, stringValNode, idNode, callNode, assignNode, minusNode, plusNode, moreThanNode, lessThanNode, exprListNode,

	//statements
	ifNode, elseIfNode, elseNode, stmtListNode, whileNode, declrationStmtNode, expressionNode, forNode, tryNode, exceptNode, finallyNode,

	//function
	functionListNode, functionNode, functionHeaderNode, paramNode, paramListNode,FunctionCall,

	//type: Here AST is used as temporoy data structure to hold type to upper grammars
	idTypeNode, intTypeNode, stringTypeNode,classNode,TypeCall,VariableCall
};
class Node
{
public :
	Node* Next;
	Node* Son;
	NodeType type;
	Node(Node* son, Node* next, NodeType t) :Next(next), Son(son), type(t)
	{}
	Node()
	{
		Next = nullptr;
		Son = nullptr;
		type = rootNode;
	}
	~Node()
	{

	}
};
#endif