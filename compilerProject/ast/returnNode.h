#pragma once
#include "node.h"
#include "../ST/Function.h"
#include "../ast/functionNode.h"
class returnNode :
	public Node
{
protected:

	Node* _scoop;
	Function* f;
public:
	returnNode(Node* son, Node* next, Node* scoop) :Node(son,next),_scoop(scoop)
	{


	}
	returnNode(Function* f,Node* scoop, Node* son, Node*next, int l_no, int c_no) :f(f),_scoop(scoop), Node(son, next, l_no, c_no)
	{
		
	}
	virtual void print()
	{
		cout << getNodeType() << "   ";
		if (_scoop)
		{
			_scoop->print();
		}

		cout << endl;
	}
	virtual string getNodeType()
	{
		return "returnNode";
	}
	virtual  void  generateCode(){
		f->has_return = true;
		
		MIPS_ASM::printComment("return node");
		if (_scoop)
		{
			this->_scoop->generateCode();
			static_cast<FunctionNode*>(f->get_FunctionNode())->set_hasReturn(true);
			f->get_FunctionNode()->my_type = _scoop->my_type;
			if (_scoop->my_type == "string")
			{
				f->get_FunctionNode()->string_val = _scoop->string_val;
			}
			MIPS_ASM::pop("v0");
		}
		MIPS_ASM::move("sp", "fp");
		MIPS_ASM::jr();
		MIPS_ASM::printComment("end return node");

	}

};