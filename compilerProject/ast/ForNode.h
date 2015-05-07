#pragma once
#include "node.h"

class ForNode :
	public Node
{
protected:
	Node* _expr;
	Node* _range;
	Node* _scoop;

public:
	static	int 	for_label;
	ForNode(Node* son, Node* next, Node* expr, Node* range, Node* scoop) :Node(son,next), _expr(expr), _range(range),_scoop(scoop)
	{


	}
	virtual void print()
	{
		cout << "for node !" << endl;
	}
	virtual string getNodeType()
	{
		return "ForNode";
	}
	/*
		virtual void generateCode(){
			string cc = "";
			cc = std::to_string(ForNode::for_label++);

			string ccc = "For";
			ccc += cc;

			string ccc2 = "endFor";
			ccc2 += cc;




			MIPS_ASM::printComment("Begin Initializer\n");
			if (_initlizer != NULL)
			{
				_initlizer->generateCode();
				dispose(_initlizer);
			}MIPS_ASM::printComment("End Initializer\n");

			MIPS_ASM::label(ccc);

			MIPS_ASM::printComment("Begin Condition\n");
			if (_condition != NULL)
			{
				_condition->generateCode();
				MIPS_ASM::pop("t0");
				MIPS_ASM::beq("t0", "0", ccc2);
			}

			MIPS_ASM::printComment("End Condition\n");



			MIPS_ASM::printComment("Begin Statement\n");
			if (_statment != NULL)
			{
				_statment->generateCode();
				dispose(_statment);
			}

			MIPS_ASM::printComment("End Statement\n");
			MIPS_ASM::printComment("Begin Increment\n");
			if (_increment != NULL)
			{
				_increment->generateCode();
				dispose(_increment);
			}	MIPS_ASM::printComment("End Increment\n");
			MIPS_ASM::jump(ccc);
			MIPS_ASM::label(ccc2);

		
	}*/
};