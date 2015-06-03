#pragma once
#ifndef __VARIABLENODE__
#define __VARIABLENODE__
#include"Node.h"
#include"..\ST\Variable.h"
#include<sstream>
//#include"ast\CallVariableNode.h"
//#include"callFunctionNode.h"
#include"ArrayElementNode.h"
#include"IDNode.h"
#include"ClassNode.h"
using namespace std;
class CallVariableNode :public Node
{
private:
	string ID;

	Variable* variable_node;
	
	Variable* checkVarFromCurrentNode(string id, vector<Node*>outer_node)
	{
		int i = outer_node.size() - 1;
		Node* temp2;
		Variable* v = NULL;
		if (outer_node.at(i)->getNodeType() == "ClassNode")
		{
			Type* tt = static_cast<ClassNode*>(outer_node.at(i))->get_type();
			temp2 = outer_node.at(i)->Son;
			while ((temp2->Next)&&(this->getId()>temp2->getId()))
			{
				if ((temp2->getNodeType() == "IDNode"))
				{
					if (strcmp(id.c_str(), static_cast<IDNode*>(temp2)->get_variable()->get_name()) == 0)
					{
						v = static_cast<IDNode*>(temp2)->get_variable();
						break;
					}
				}
				temp2 = temp2->Next;
			}
		}
		else
		{
			bool found = false;
			while (outer_node.at(i)->getNodeType() != "ClassNode")
			{
				temp2 = outer_node.at(i)->Son;
				while ((temp2->Next) && (this->getId()>temp2->getId()))
				{
					if ((temp2->getNodeType() == "IDNode"))
					{
						if (strcmp(id.c_str(), static_cast<IDNode*>(temp2)->get_variable()->get_name()) == 0)
						{
							v = static_cast<IDNode*>(temp2)->get_variable();
							found = true;
							break;
						}
					}
					temp2 = temp2->Next;
					if (found)
						break;
				}
				i--;
			}
		}

		return v;

	}
public:
	bool is_class = false;
	void set_variable(Variable* v)
	{
		variable_node = v;
	}
	Variable* get_variable()
	{
		return variable_node;
	}
	string getID()
	{
		return ID;
	}
	CallVariableNode() :variable_node(NULL), Node(NULL, NULL)
	{
		variable_node = NULL;
	}
	CallVariableNode(string id, Variable* v, Node* son, Node*next) :ID(id), variable_node(v), Node(son, next)
	{

	}
	CallVariableNode(string id, Variable* v, Node* son, Node*next,int l_no,int c_no) :ID(id), variable_node(v), Node(son, next,l_no,c_no)
	{

	}
	virtual void print()
	{
		cout << getNodeType() << "  " << ID;
		if (variable_node)
		{
			cout << "   variable name "<<variable_node->get_name();
		}
		
		cout << endl;
	}
	virtual void before_generateCode(){
		if (variable_node)
		{
			if (this->my_type == "NULL")
			{
				this->my_type = variable_node->strLasttype;
			}
			if (this->my_type == "string")
			{
				std::ostringstream ss;
				char* s = reinterpret_cast<char*>(variable_node->get_lastTypes().second);
				ss << s;
				this->string_val = ss.str();
			}
			else if (this->my_type == "type")
			{

			}
		}
		
	}
	virtual  void generateCode()
	{
		
		if (variable_node)
		{
			if (variable_node->get_static())
			{
				this->_offsetReg = "gp";
			}
			if (this->my_type == "NULL")
			{
				this->my_type = variable_node->strLasttype;
			}
			if (this->my_type == "string")
			{
				std::ostringstream ss;
				char* s = reinterpret_cast<char*>(variable_node->get_lastTypes().second);
				ss << s;
				this->string_val = ss.str();				
			}
			else if (this->my_type == "type")
			{
				this->type_val = (Type*)variable_node->get_lastTypes().second;
			}
			MIPS_ASM::lw("t0", variable_node->getOffset(), this->getOffsetRegister());
			//v0 contains the address in memorry to be used later in assignment
			MIPS_ASM::add_instruction(string("addi $v0,$") + this->getOffsetRegister()
				+ "," + std::to_string(variable_node->getOffset()) + "\n");
			MIPS_ASM::push("t0");
		}
		
	}
	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		Variable*v;
			string h = this->getID();
			if (!this->variable_node)
			{
				v = checkVarFromCurrentNode(h, n);
				if (!v)
					cout << "Error :variable Not found " << h << " at Line No:" << this->_lineNo << " Column No:" << this->_colNo << endl;
				else
					this->variable_node = v;
			}
			else
				v = this->variable_node;
			pi = make_pair(v, "Variable");

		return pi;
	}
	virtual string getNodeType()
	{
		return "CallVariableNode";
	}
};
#endif