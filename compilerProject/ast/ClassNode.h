#pragma once
#ifndef __CLASSNODE__
#define __CLASSNODE__
#include"Node.h"
#include"..\ST\Type.h"
class ClassNode:public Node
{
private:
	Type* type_node;
public:
	Type* get_type()
	{
		return type_node;
	}
	ClassNode() :type_node(NULL), Node(NULL,NULL)
	{
		
	}
	ClassNode(Type* t,Node* son,Node*next) :type_node(t), Node(son,next)
	{
		
	}
	ClassNode(Type* t, Node* son, Node*next,int l,int c) :type_node(t), Node(son, next,l,c)
	{

	}
	virtual void print()
	{
		cout << getNodeType() << "  and type name  " << type_node->get_name() << endl;
	}
	virtual string getNodeType()
	{
		return "ClassNode";
	}
	virtual void before_generateCode(){
	}
	virtual void generateCode()
	{
		
		Node* temp = this->Son;
		while (temp)
		{
			if (temp->getNodeType() == "IDNode")
			{
				static_cast<IDNode*>(temp)->get_variable()->setOffset(this->getNextOffset(4));
			}
			temp = temp->Next;
		}

		//MIPS_ASM::reserveStack(getFrameSize());

		/*
		MIPS_ASM::push("ra");// this is added by amer
		Node* temp = this->Son;
		while (temp)
		{
			if (temp->getNodeType() == "IDNode")
			{
				static_cast<IDNode*>(temp)->get_variable()->setOffset(this->getNextOffset(4));
			}
			temp = temp->Next;
		}
		MIPS_ASM::pop("ra");
		*/
		//this is instruction added by amer :)
		//MIPS_ASM::releaseStack(getFrameSize());
	}
	void gcVars()
	{
		Node* temp = this->Son;
		MIPS_ASM::printComment("gc vars");
		while (temp)
		{
			if (temp->getNodeType() == "IDNode")
			{
				Variable* v = static_cast<IDNode*>(temp)->get_variable();
				MIPS_ASM::push("ra");
				MIPS_ASM::lw("a0", -v->getOffset(), this->getOffsetRegister());
				MIPS_ASM::jal("decrease_rc");//-4 is rc
				MIPS_ASM::jal("global_dispose");
				MIPS_ASM::pop("ra");

			}
		}
		MIPS_ASM::printComment("gc done");

	}
};
#endif