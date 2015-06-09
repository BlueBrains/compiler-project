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
	virtual pair<void*, string> check(vector<Node*>outer_node, bool from_right)
	{
		if (strcmp(f->get_name(), "__init__") == 0)
		{
			cout << "error Constructor cannot return a value at line: " << this->_lineNo << endl;
		}
		_scoop->check(outer_node, from_right);
		return pi;
	}
	virtual void before_generateCode(){
		f->has_return = true;
		if (_scoop)
		{
			this->_scoop->before_generateCode();
			static_cast<FunctionNode*>(f->get_FunctionNode())->set_hasReturn(true);
			f->get_FunctionNode()->my_type = _scoop->my_type;
			if (_scoop->my_type == "string")
			{
				f->get_FunctionNode()->string_val = _scoop->string_val;
			}
		}
	}
	virtual  void  generateCode(){
		
		
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
			f->has_return = true;
			MIPS_ASM::pop("s7");
		}
		//MIPS_ASM::move("sp", "fp");
		MIPS_ASM::releaseStack(f->get_FunctionNode()->getFrameSize());
		/*
		MIPS_ASM::add_instruction("add $sp, $sp, 4\n");
		MIPS_ASM::add_instruction("lw $ra,0($sp)\n");
		MIPS_ASM::add_instruction("add $sp, $sp, 4\n");
		MIPS_ASM::add_instruction("lw $fp 0($sp)\n");*/
		MIPS_ASM::pop("fp");
		MIPS_ASM::pop("ra");
		//MIPS_ASM::push("v0");
		//MIPS_ASM::add_instruction("sw $v0, 0($sp)\n");
		MIPS_ASM::printComment("end function call");
		MIPS_ASM::jr();
		MIPS_ASM::printComment("end return node");

	}

};