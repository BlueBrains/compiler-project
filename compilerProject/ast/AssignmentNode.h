#pragma once
#ifndef __ASSIGNNODE__
#define __ASSIGNNODE__
#include"Node.h"
#include"..\ST\Variable.h"
class AssignmentNode :public Node
{
private:
	Node* right_side;
	Node* left_side;
public:

	AssignmentNode() : Node(NULL, NULL)
	{

	}
	AssignmentNode( Node* son, Node*next) : Node(son, next)
	{

	}
	AssignmentNode(Node* son, Node*next,int line_no,int col_no) : Node(son, next,line_no,col_no)
	{

	}
	AssignmentNode(Node* first,Node* second,Node* son, Node*next, int line_no, int col_no) :left_side(first),right_side(second), Node(son, next, line_no, col_no)
	{

	}
	virtual void print()
	{
		cout << getNodeType() << endl;
		cout << "left side :";
		left_side->print();
		cout << "right side :";
		right_side->print();
	}
	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		pair<void*, string> p1;
		pair<void*, string> p2;
		p1=left_side->check(n);
		p2=right_side->check(n,true);
		if (p1.second == "Variable")
		{
			if ((Variable*)p1.first)
			{
				((Variable*)p1.first)->init = true;
				if (right_side->getNodeType() == "ArrayNode")
				{
					((Variable*)p1.first)->set_arrayNode(static_cast<ArrayNode*>(this->right_side));
					((Variable*)p1.first)->set_isarray(true);
				}
				else
				{
					((Variable*)p1.first)->set_isarray(false);
					((Variable*)p1.first)->set_arrayNode(NULL);
				}
			}
			
		}
		return p1;
	}
	virtual string getNodeType()
	{
		return "AssignmentNode";
	}
};
#endif