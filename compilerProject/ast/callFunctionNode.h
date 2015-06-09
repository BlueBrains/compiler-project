#pragma once
#ifndef __CALLFUNCTIONNODE__
#define __CALLFUNCTIONNODE__
#include"CallVariableNode.h"
#include"..\ST\Function.h"
//#include"ast/CallVariableNode.h"
//#include"ast/callVariableNode.h"
#include"IDNode.h"
#include"CallVariableNode.h"
#include"FunctionNode.h"


class CallFunctionNode :public Node
{
private:
	string ID;
	vector <Node*> arguments;
	Function* Function_call = NULL;
public:
	void set_function(Function* f)
	{
		this->Function_call = f;
	}

	int arg_len(){	
		return this->arguments.size();
	}
	virtual void before_generateCode(){

		if (Function_call)
		{
			func_vec.push_back(this->Function_call->get_FunctionNode());
			for (int i = 0; i < arguments.size(); i++)
			{
				arguments.at(i)->generateCode();
				Function_call->getparameters().at(i)->strLasttype = arguments.at(i)->my_type;
				if (arguments.at(i)->my_type == "string")
				{
					Function_call->getparameters().at(i)->set_lastTypes(arguments.at(i)->string_val);
				}
				else if (arguments.at(i)->my_type == "type")
				{
					Function_call->getparameters().at(i)->set_lastTypes(arguments.at(i)->type_val);
				}
			}
			this->Function_call->get_FunctionNode()->before_generateCode();
			this->my_type = this->Function_call->get_FunctionNode()->my_type;
			if (this->my_type == "string")
			{
				this->string_val = this->Function_call->get_FunctionNode()->string_val;
			}
		}
		
	}
	virtual void generateCode()
	{
		//this->Function_call->get_FunctionNode()->setOffset(this->getFrameSize());
		if (Function_call)
		{
			//MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
			for (int i = 0; i < arguments.size(); i++)
			{
				arguments.at(i)->generateCode();
				if (i == 0)
				{
					MIPS_ASM::move("s5", "sp");
				}
				Function_call->getparameters().at(i)->strLasttype = arguments.at(i)->my_type;
				if (arguments.at(i)->my_type == "string")
				{
					Function_call->getparameters().at(i)->set_lastTypes(arguments.at(i)->string_val);
				}
				else if (arguments.at(i)->my_type == "type")
				{
					Function_call->getparameters().at(i)->set_lastTypes(arguments.at(i)->type_val);
				}
			}
			MIPS_ASM::jal(this->Function_call->get_label());
			for (int i = 0; i < arguments.size()-1; i++)
			{
				//MIPS_ASM::pop("t0");
				MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
			}
			MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
			func_vec.push_back(this->Function_call->get_FunctionNode());
			this->Function_call->get_FunctionNode()->before_generateCode();
			this->my_type = this->Function_call->get_FunctionNode()->my_type;
			if (this->Function_call->has_return)
			{
				MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
				MIPS_ASM::sw("s7", 0, "sp");
			}
			else
				MIPS_ASM::add_instruction("add $sp,$sp,4\n");
			if (this->my_type == "string")
			{
				this->string_val = this->Function_call->get_FunctionNode()->string_val;
			}
		}
		else
		{

		}
		/*
		this->Function_call->get_FunctionNode()->generateCode();
		this->my_type = this->Function_call->get_FunctionNode()->my_type;
		if (this->my_type == "string")
		{
			this->string_val = this->Function_call->get_FunctionNode()->string_val;
		}
		MIPS_ASM::printComment(((this->Function_call->get_name())+ this->my_type));*/
	}
	bool check_para(Function*f)
	{

		for (int i = 0; i < f->getparameters().size(); i++)
		{
			/*
			if (arguments->getNodeType() == "CallVariableNode")
			{
				if (f->getparameters().at(i)->get_isarray() != static_cast<CallVariableNode*>(arguments)->get_variable()->get_isarray())
					return false;
			}*/
		}
		return false;
	}
	Function* get_function()
	{
		return Function_call;
	}
	string getID()
	{
		return ID;
	}
	CallFunctionNode() :Function_call(NULL), Node(NULL, NULL)
	{

	}
	CallFunctionNode(string id, vector <Node*> args, Function* f, Node* son, Node*next) :ID(id), Function_call(f), arguments(args), Node(son, next)
	{

	}
	CallFunctionNode(string id, vector <Node*> args, Function* f, Node* son, Node*next, int l, int c) :ID(id), Function_call(f), arguments(args), Node(son, next, l, c)
	{

	}
	virtual void print()
	{
		cout << getNodeType() << "  " << "the id is " << ID;
		if (Function_call)
		{
			cout << Function_call->get_name();
		}
		cout << endl;
	}
	virtual string getNodeType()
	{
		return "CallFunctionNode";
	}

	void parameter_Matched(Function* function)
	{
		FunctionNode * fn = static_cast<FunctionNode *> (function->get_FunctionNode());
		int inner = 0;
		bool out = false;
		bool def = false;
		bool err_def = false;
		if (fn->get_parameter().size() == 0 && this->arguments.size() != 0)
		{
			cout << "Error :" << this->arguments.at(inner)->_lineNo << "," << this->arguments.at(inner)->_colNo << " Not Matching function parameter" << endl;
			err_def = true;
		}
		else
		for (int i = 0; i < fn->get_parameter().size(); i++)
		{
			if ((fn->get_parameter().at(i)->Next == NULL) || (fn->get_parameter().at(i)->Next->getNodeType() == "IDNode")){
				IDNode * te = static_cast <IDNode *> (fn->get_parameter().at(i));
				if (te->get_variable()->get_isarray() == false)
				{
					{
						if (this->arguments.size()>inner ){
							if (((this->arguments.at(inner)->getNodeType() == "CallVariableNode")/* && (static_cast<CallVariableNode*> (this->arguments.at(inner))->get_variable() != NULL)*/) || (this->arguments.at(inner)->getNodeType() == "ValueNode"))
							{
								inner++;
							}
							else
							{
								cout << "Error :" << this->arguments.at(inner)->_lineNo << "," << this->arguments.at(inner)->_colNo << " Not Matching function parameter " << endl;
								err_def = true;
								break;
							}
						}
						else
						{
							cout << "Error :" << fn->_lineNo << "," << fn->_colNo << " Not Matching function parameter" << endl;
							err_def = true;
							break;
						}
					}
				}
				else
				{
					out = true;
					if (this->arguments.size() > inner){
						for (int s_i = inner; s_i < this->arguments.size(); s_i++)
						{
							if ((this->arguments.at(s_i)->getNodeType() == "CallVariableNode") && (static_cast<CallVariableNode *> (this->arguments.at(s_i))->get_variable()!=NULL) && (static_cast<CallVariableNode *> (this->arguments.at(s_i))->get_variable()->get_isarray()))
							{
								cout << "Error :" << this->arguments.at(inner)->_lineNo << "," << this->arguments.at(inner)->_colNo << " Not Matching function parameter" << endl;
								err_def = true;
								break;
							}
						}
					}
					else
					{
						cout << "Error :" << fn->_lineNo << "," << fn->_colNo << " Not Matching function parameter" << endl;
						err_def = true;
						break;
					}


					if (err_def)
						break;
				}

			}
			else if (fn->get_parameter().at(i)->Next->getNodeType() == "AssignmentNode")
			{
				def = true;
				/* edit to be accepted with array and default value*/
				if ((this->arguments.size() - inner) > (fn->get_parameter().size() - i))
				{
					cout << "Error :" << this->arguments.at(inner)->_lineNo << "," << this->arguments.at(inner)->_colNo << " Not Matching function parameter" << endl;
					err_def = true;
					break;
				}
				break;
			}
			else
				inner++;
		}
		if (!out && !def && (this->arguments.size() != fn->get_parameter().size())&&!err_def)
			cout << "Error :" << fn->_lineNo << "," << fn->_colNo << " Not Matching function parameter" << endl;

	}
};
#endif