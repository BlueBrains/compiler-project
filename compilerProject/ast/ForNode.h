#pragma once
#include "node.h"
#include"AssignmentNode.h"
#include"flowStmt.h"
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
		_expr->print();
	}
	virtual void before_generateCode(){
		
	}
	virtual string getNodeType()
	{
		return "ForNode";
	}
	Node* getExpr(){
		return _expr;
	}
	
	virtual void generateCode()
	{
		//Node* temp = this->Son;
		//while (temp)
		//{
		//	if (temp->getNodeType() == "IDNode")
		//	{
		//		static_cast<IDNode*>(temp)->get_variable()->setOffset(this->getNextOffset(4));
		//	}
		//	temp = temp->Next;
		//}
		string cc = "";
		cc = std::to_string(ForNode::for_label++);

		string ccc = "For";
		ccc += cc;

		string ccc2 = "endFor";
		ccc2 += cc;
		lastLabel.push_back(make_pair(ccc, ccc2));
		MIPS_ASM::label(ccc);
		int loopCount;
		ArrayNode* currentArray = NULL;
		if (_range->getNodeType() == "ArrayNode"){
			currentArray = static_cast<ArrayNode*>(_range);
			loopCount = currentArray->element.size();
		}
		else if (_range->getNodeType() == "CallVariableNode"){
			Variable* v = static_cast<CallVariableNode*>(_range)->get_variable();
			currentArray = v->get_arrayNode();
			loopCount = currentArray->element.size();
		}

		for (int i = 0; i < loopCount; i++)
		{			
			if (currentArray->element.at(i)->getNodeType() == "ArrayNode"){
				static_cast<CallVariableNode*>(_expr)->get_variable()->set_arrayNode((ArrayNode*)currentArray->element.at(i));
				static_cast<CallVariableNode*>(_expr)->get_variable()->set_isarray(true);
			}
			else{
				CallVariableNode* temp = static_cast<CallVariableNode*>(_expr);
				//if (temp->get_variable() == NULL)
				//	temp->set_variable(new Variable());
				(new AssignmentNode(_expr, currentArray->element.at(i), NULL, NULL, 0, 0))->generateCode();
				//temp->get_variable()->strLasttype = currentArray->element.at(i)->my_type;
				//temp->my_type = currentArray->element.at(i)->my_type;
			}
			Node* temp = Son;
			string flowType;
			while (temp){
				temp->generateCode();
				temp = temp->Next;
			}
		}
		MIPS_ASM::label(ccc2);
	}
	void gcVars()
	{
		Node* temp = this->Son;
		MIPS_ASM::printComment("gc vars");
		while (temp)
		{
			if (temp->getNodeType() == "IDNode")
			{
				Variable* v=static_cast<IDNode*>(temp)->get_variable();
				 MIPS_ASM::push("ra");
				 MIPS_ASM::lw("a0", -v->getOffset(), this->getOffsetRegister());
				 MIPS_ASM::jal("decrease_rc");//-4 is rc
				 MIPS_ASM::jal("global_dispose");
				 MIPS_ASM::pop("ra");

			 }
		 }
		 MIPS_ASM::printComment("gc done");

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
int ForNode::for_label = 0;
