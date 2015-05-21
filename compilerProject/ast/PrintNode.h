#pragma once
#include "node.h"

class PrintNode :
	public Node
{
protected:
	Node* _scoop;

public:
	static	int 	print_label;
	PrintNode(Node* son, Node* next, Node* scoop,int l,int c) :Node(son,next,l,c),_scoop(scoop)
	{


	}
	virtual string getNodeType()
	{
		return "PrintNode";
	}
	bool check_type()
	{
		Node* temp = _scoop;
		while (temp)
		{
			if (temp->my_type != "int" || temp->my_type != "float" || temp->my_type != "string")
			{
				return false;
			}
			temp=temp->Next;
		}
		return true;
	}
	virtual void print()
	{
		cout << this->getNodeType()<<"  ";
		Node* temp = _scoop;
		while (temp)
		{
			temp->print();
			temp = temp->Next;
		}
		cout << endl;
	}
	virtual void generateCode()
	{
		MIPS_ASM::printComment("\n Print values:");
		string t0 = "t0";
		Node* temp = this->Son;
		bool checked = true;// check_type();
		while ((checked)&&(temp))
		{
			temp->generateCode();

			MIPS_ASM::pop(t0);
			
			if (temp->my_type == "string")
			{
				MIPS_ASM::li("v0", 4);
				MIPS_ASM::add_instruction("move $a0,$t0\n");

			}
			else if (temp->my_type == "int")
			{
				MIPS_ASM::li("v0", 1);
				MIPS_ASM::add_instruction("move $a0,$t0\n");
			}
			else if (temp->my_type == "float")
			{
				MIPS_ASM::li("v0", 2);
				MIPS_ASM::add_instruction("move $a0,$t0\n");
			}
			else
			{
				cout << "error" << endl;
				return;
			}
			MIPS_ASM::add_instruction("syscall\n");
			temp = temp->Next;
		}
		MIPS_ASM::la("a0", "newline");
		MIPS_ASM::li("v0", 4);
		MIPS_ASM::add_instruction("syscall\n");
		
	}
};