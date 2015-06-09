#pragma once
#ifndef __EXPRESSIONNODE__
#define __EXPRESSIONNODE__
#include"Node.h"
#include"ValueNode.h"
#include"..\ST\Type.h"
enum operand {
	PLUS, MINUS, MULT, DIV,MOD,GREATHER,LESS,EQUALGREATHER,EQUALLESS,EQUALS,NOTEQUAL
};
class ExpressionNode :public Node
{
private:
	Node* first;
	operand op;
	Node* second;
	static int labelCount;
	Variable* checkVarFromCurrentNode(string id, vector<Node*>outer_node)
	{
		int i = outer_node.size() - 1;
		Node* temp = outer_node.back();
		Node* temp2;
		Variable* v = NULL;
		if (outer_node.at(i)->getNodeType() == "ClassNode")
		{
			Type* tt = static_cast<ClassNode*>(outer_node.at(i))->get_type();
			temp2 = outer_node.at(i)->Son;
			while (temp2->Next)
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
				while (temp2->Next)
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
	operand get_operand()
	{
		return op;
	}
	ExpressionNode() :op(PLUS), Node(NULL, NULL)
	{

	}
	ExpressionNode(operand op, Node* son, Node*next) : op(op), Node(son, next)
	{

	}
	ExpressionNode(operand op, Node* son, Node*next,int l,int c ) : op(op), Node(son, next,l,c)
	{

	}
	ExpressionNode(Node* first,Node* second,operand op, Node* son, Node*next, int l, int c) :first(first),second(second), op(op), Node(son, next, l, c)
	{

	}
	virtual void print()
	{
		string x;
		if (op == 0)
		{
			x = "+";
		}
		else if (op == 1)
		{
			x = "-";
		}
		else if (op == 2)
		{
			x = "*";
		}
		else if (op == 3)
			x = "/";
		else if (op == 4)
			x = "%";
		else if (op==5)
			x = "> ";
		else if (op == 6)
			x = "< ";
		else if (op ==7)
			x = ">= ";
		else if (op == 8)
			x = "<= ";
		else if (op == 9)
			x = "== ";
		else if (op == 10)
			x = "!= ";
		cout << getNodeType() << x<<endl;
		first->print();
		second->print();
		//this->generateCode();
	}
	virtual string getNodeType()
	{
		return "BinaryNODE ";
	}

	virtual pair<void*, string> check(vector<Node*>n, bool from_right = false)
	{
		pair<void*, string> p1;
		pair<void*, string> p2;
		p1=first->check(n,from_right);
		p2=second->check(n,from_right);
		//pi here is the output of symbol table for types
		return pi;
	}
	void generateValue(ValueNode* v1,ValueNode* v2)
	{
		string t0 = "t0";
		string t1 = "t1";
		string typ[5] = { "int", "float", "char", "long", "string" };
		char operands[5] = { '+', '-', '*', '/', '%' };/*
		if ((v1->get_types() == 6 && v1->get_types() == 7) || (v1->get_types() == 7 && v1->get_types() == 6))
		{
			this->my_type = "bool";
			int x = *(int*)v1->get_value();
			int y = *(int*)v2->get_value();
		}*/
		if ((v1->get_types() == 0 && v2->get_types() == 0) || (v1->get_types() == 0 && (v2->get_types() == 6 || v2->get_types() == 7))||
			(v2->get_types() == 0 && (v1->get_types() == 6 || v1->get_types() == 7)))
		{
			this->my_type = "int";
			int x = *(int*)v1->get_value();
			int y = *(int*)v2->get_value();
			if (op == PLUS)
			{
				MIPS_ASM::li("t0", (x + y));
				MIPS_ASM::push("t0");
			}
			else if (op == MINUS)
			{
				MIPS_ASM::li("t0", (x - y));
				MIPS_ASM::push("t0");
			}
			else if (op == MULT)
			{
				MIPS_ASM::li("t0", (x * y));
				MIPS_ASM::push("t0");
			}
			else if (op == DIV)
			{
				MIPS_ASM::lif("t0", (x / y));
				MIPS_ASM::push("t0");
			}
			else if (op == MOD)
			{
				MIPS_ASM::li("t0", (x % y));
				MIPS_ASM::push("t0");
			}
			else if (op == EQUALS || op == NOTEQUAL)
			{
				this->my_type = "bool";
				if (op == EQUALS)
				{

					if (x == y)
					{
						MIPS_ASM::li("t0", 1);
						MIPS_ASM::push("t0");
					}
					if (x != y)
					{
						MIPS_ASM::li("t0", 0);
						MIPS_ASM::push("t0");
					}
				}
				else{
					if (x == y)
					{
						MIPS_ASM::li("t0", 0);
						MIPS_ASM::push("t0");
					}
					if (x != y)
					{
						MIPS_ASM::li("t0", 1);
						MIPS_ASM::push("t0");
					}

				}
			}
			else if (op == LESS)
			{
				this->my_type = "bool";
				if (x < y)
				{
					MIPS_ASM::li("t0", 1);
					MIPS_ASM::push("t0");
				}
				else
				{
					MIPS_ASM::li("t0", 0);
					MIPS_ASM::push("t0");
				}
			}
			else if (op == GREATHER)
			{
				this->my_type = "bool";
				if (x > y)
				{
					MIPS_ASM::li("t0", 1);
					MIPS_ASM::push("t0");
				}
				else
				{
					MIPS_ASM::li("t0", 0);
					MIPS_ASM::push("t0");
				}
			}
			else if (op == EQUALLESS)
			{
				this->my_type = "bool";
				if (x <= y)
				{
					MIPS_ASM::li("t0", 1);
					MIPS_ASM::push("t0");
				}
				else
				{
					MIPS_ASM::li("t0", 0);
					MIPS_ASM::push("t0");
				}
			}
			else if (op == EQUALGREATHER)
			{
				this->my_type = "bool";
				if (x >= y)
				{
					MIPS_ASM::li("t0", 1);
					MIPS_ASM::push("t0");
				}
				else
				{
					MIPS_ASM::li("t0", 0);
					MIPS_ASM::push("t0");
				}
			}
		}
		else if ((v1->get_types() == 1 && v2->get_types() == 0) || (v1->get_types() == 0 && v2->get_types() == 1) || (v1->get_types() == 1 && v2->get_types() == 1) ||
			(v1->get_types() == 1 && (v2->get_types() == 6 || v2->get_types() == 7)) || (v2->get_types() == 1 && (v1->get_types() == 6 || v1->get_types() == 7)))
		{
			this->my_type = "float";
			int x = *(float*)v1->get_value();
			int y = *(float*)v2->get_value();
			if (op == 0)
			{
				MIPS_ASM::lif("t0", (x + y));
				MIPS_ASM::push("t0");
			}
			else if (op == 1)
			{
				MIPS_ASM::lif("t0", (x - y));
				MIPS_ASM::push("t0");
			}
			else if (op == 2)
			{
				MIPS_ASM::lif("t0", (x * y));
				MIPS_ASM::push("t0");
			}
			else if (op == 3)
			{
				if (y != 0)
				{
					MIPS_ASM::lif("t0", (x / y));
					MIPS_ASM::push("t0");
				}
				else
				{
					cout << "ZeroDivisionError" << endl;
				}
				
			}
			else if (op == 4)
			{
				cout << "Operation % undefined for floats" << endl;
			}
			else if (op == EQUALS || op == NOTEQUAL)
			{
				this->my_type = "bool";
				if (op == EQUALS)
				{

					if (x == y)
					{
						MIPS_ASM::li("t0", 1);
						MIPS_ASM::push("t0");
					}
					if (x != y)
					{
						MIPS_ASM::li("t0", 0);
						MIPS_ASM::push("t0");
					}
				}
				else{
					if (x == y)
					{
						MIPS_ASM::li("t0", 0);
						MIPS_ASM::push("t0");
					}
					if (x != y)
					{
						MIPS_ASM::li("t0", 1);
						MIPS_ASM::push("t0");
					}

				}
			}
			else if (op == LESS)
			{
				this->my_type = "bool";
				if (x < y)
				{
					MIPS_ASM::li("t0", 1);
					MIPS_ASM::push("t0");
				}
				else
				{
					MIPS_ASM::li("t0", 0);
					MIPS_ASM::push("t0");
				}
			}
			else if (op == GREATHER)
			{
				this->my_type = "bool";
				if (x > y)
				{
					MIPS_ASM::li("t0", 1);
					MIPS_ASM::push("t0");
				}
				else
				{
					MIPS_ASM::li("t0", 0);
					MIPS_ASM::push("t0");
				}
			}
			else if (op == EQUALLESS)
			{
				this->my_type = "bool";
				if (x <= y)
				{
					MIPS_ASM::li("t0", 1);
					MIPS_ASM::push("t0");
				}
				else
				{
					MIPS_ASM::li("t0", 0);
					MIPS_ASM::push("t0");
				}
			}
			else if (op == EQUALGREATHER)
			{
				this->my_type = "bool";
				if (x >= y)
				{
					MIPS_ASM::li("t0", 1);
					MIPS_ASM::push("t0");
				}
				else
				{
					MIPS_ASM::li("t0", 0);
					MIPS_ASM::push("t0");
				}
			}
		}
		else
		{
			if ((v1->get_types() == 2 && v2->get_types() == 2))
			{
				this->my_type = "char";
				string x = (char*)v1->get_value();
				string y = (char*)v2->get_value();
				if (op == 0)
				{
					MIPS_ASM::la("t0", MIPS_ASM::getStringAdressLabel(x + y));
					MIPS_ASM::push("t0");
				}
				else if (op == 1)
				{
					cout << "TypeError: unsupported operand type(s) for -: 'str' and 'str' at " <<this->_lineNo<< endl;
				}
				else if (op == 2)
				{
					cout << "TypeError: can't multiply sequence by non-int of type 'str'at " << this->_lineNo<< endl;
				}
				else if (op == 3)
				{
					cout << "TypeError: unsupported operand type(s) for /: 'str' and 'str'at " << this->_lineNo << endl;
				}
				else
				{
					cout << "TypeError: not all arguments converted during string formattingat " << this->_lineNo << endl;
				}
			}
			else if (((v1->get_types() == 2 && v2->get_types() != 2) || ((v1->get_types() != 2 && v2->get_types() == 2))))
			{
				string h = "";
				if (((v1->get_types() == 2 && v2->get_types() == 0)) && (op == 2))
				{
					this->my_type = "string";
					for (int i = 0; i < *(int*)v2->get_value(); i++)
					{
						h += (char*)v1->get_value();
					}
					MIPS_ASM::la("t0", MIPS_ASM::getStringAdressLabel(h));
					MIPS_ASM::push("t0");
				}
				else if (((v1->get_types() == 0 && v2->get_types() == 2)) && (op == 2))
				{
					this->my_type = "string";
					for (int i = 0; i < *(int*)v1->get_value(); i++)
					{
						h += (char*)v2->get_value();
					}
					MIPS_ASM::la("t0", MIPS_ASM::getStringAdressLabel(h));
					MIPS_ASM::push("t0");
				}
				else
					cout << "unsupported operand type(s) for " << operands[op] << " : '" << typ[v1->get_types()] << "' and '" << typ[v2->get_types()] << "'";
			}
			if ((v1->get_types() == 4 && v2->get_types() == 4))
			{
				string x = (char*)v1->get_value();
				string y = (char*)v2->get_value();
				this->my_type = "string";
				if (op == 0)
				{
					MIPS_ASM::la("t0", MIPS_ASM::getStringAdressLabel(x + y));
					MIPS_ASM::push("t0");
					this->string_val = x + y;
				}
				else if (op == 1)
				{
					cout << "TypeError: unsupported operand type(s) for -: 'str' and 'str'at " << this->_lineNo << endl;
				}
				else if (op == 2)
				{
					cout << "TypeError: can't multiply sequence by non-int of type 'str'at " << this->_lineNo << endl;
				}
				else if (op == 3)
				{
					cout << "TypeError: unsupported operand type(s) for /: 'str' and 'str'at " << this->_lineNo << endl;
				}
				else if (op == EQUALS || op == NOTEQUAL)
				{
					this->my_type = "bool";
					if (op == EQUALS)
					{

						if (x == y)
						{
							MIPS_ASM::li("t0", 1);
							MIPS_ASM::push("t0");
						}
						if (x != y)
						{
							MIPS_ASM::li("t0", 0);
							MIPS_ASM::push("t0");
						}
					}
					else{
						if (x == y)
						{
							MIPS_ASM::li("t0", 0);
							MIPS_ASM::push("t0");
						}
						if (x != y)
						{
							MIPS_ASM::li("t0", 1);
							MIPS_ASM::push("t0");
						}

					}
				}
				else if (op == LESS)
				{
					this->my_type = "bool";
					if (x < y)
					{
						MIPS_ASM::li("t0", 1);
						MIPS_ASM::push("t0");
					}
					else
					{
						MIPS_ASM::li("t0", 0);
						MIPS_ASM::push("t0");
					}
				}
				else if (op == GREATHER)
				{
					this->my_type = "bool";
					if (x > y)
					{
						MIPS_ASM::li("t0", 1);
						MIPS_ASM::push("t0");
					}
					else
					{
						MIPS_ASM::li("t0", 0);
						MIPS_ASM::push("t0");
					}
				}
				else if (op == EQUALLESS)
				{
					this->my_type = "bool";
					if (x <= y)
					{
						MIPS_ASM::li("t0", 1);
						MIPS_ASM::push("t0");
					}
					else
					{
						MIPS_ASM::li("t0", 0);
						MIPS_ASM::push("t0");
					}
				}
				else if (op == EQUALGREATHER)
				{
					this->my_type = "bool";
					if (x >= y)
					{
						MIPS_ASM::li("t0", 1);
						MIPS_ASM::push("t0");
					}
					else
					{
						MIPS_ASM::li("t0", 0);
						MIPS_ASM::push("t0");
					}
				}
				else
				{
					cout << "TypeError: not all arguments converted during string formattingat " << this->_lineNo << endl;
				}
			}
			else
			{
				string h = "";
				if (((v1->get_types() == 4 && v2->get_types() == 0)) && (op == 2))
				{
					if (op == 2)
					{
					}
					this->my_type = "string";
					for (int i = 0; i < *(int*)v2->get_value(); i++)
					{
						h += (char*)v1->get_value();
					}
					MIPS_ASM::la("t0", MIPS_ASM::getStringAdressLabel(h));
					MIPS_ASM::push("t0");
					this->string_val = h;
				}
				else if (((v1->get_types() == 0 && v2->get_types() == 4)) && (op == 2))
				{
					this->my_type = "string";
					for (int i = 0; i < *(int*)v1->get_value(); i++)
					{
						h += (char*)v2->get_value();
					}
					MIPS_ASM::la("t0", MIPS_ASM::getStringAdressLabel(h));
					MIPS_ASM::push("t0");
					this->string_val = h;
				}
				else
					cout << "unsupported operand type(s) for " << operands[op] << " : '" << typ[v1->get_types()] << "' and '" << typ[v2->get_types()] << "'";
			}
		}
		
	}
	virtual void before_generateCode(){
		first->before_generateCode();
		second->before_generateCode();
		/*
		MIPS_ASM::pop(t1);
		MIPS_ASM::pop(t0);*/
		if ((first->my_type == "int"&& second->my_type == "int") || (first->my_type == "int"&& second->my_type == "bool")
			|| (first->my_type == "bool"&& second->my_type == "int"))
		{
			this->my_type = "int";
		}

	}
	virtual void generateCode()
	{
		string t0 = "t0";
		string t1 = "t1";
		if ((first->getNodeType() == "ValueNode") && (second->getNodeType() == "ValueNode"))
		{
			ValueNode* v1 = static_cast<ValueNode*>(first);
			ValueNode* v2 = static_cast<ValueNode*>(second);
			this->generateValue(v1, v2);
		}
		else
		{
			first->generateCode();
			second->generateCode();
			++labelCount;
			/*
			MIPS_ASM::pop(t1);
			MIPS_ASM::pop(t0);*/
			if (((first->my_type == "int"&& second->my_type == "int") || (first->my_type == "int"&& second->my_type == "bool")
				|| (first->my_type == "bool"&& second->my_type == "int"))&&(first->getNodeType()!="ArrayNode"))
			{
				this->my_type = "int";
				MIPS_ASM::pop(t1);
				MIPS_ASM::pop(t0);
				if (op == 0)
				{

					//this->my_type = "int";
					MIPS_ASM::operation(t0, t0, t1, 1);
					MIPS_ASM::push(t0);

				}
				else if (op == 1)
				{
					MIPS_ASM::operation(t0, t0, t1, 2);
					MIPS_ASM::push(t0);
				}
				else if (op == 2)
				{
					MIPS_ASM::operation(t0, t0, t1, 3);
					MIPS_ASM::push(t0);
				}
				else if (op == 3)
				{
					MIPS_ASM::operation(t0, t0, t1, 4);
					MIPS_ASM::push(t0);
				}
				else if (op == 4)
				{
					MIPS_ASM::operation(t0, t0, t1, 5);
					MIPS_ASM::push(t0);
				}
				else if (op == EQUALS || op == NOTEQUAL)
				{
					this->my_type = "bool";
					if (op == EQUALS)
					{
						/*MIPS_ASM::printComment("equal op");
						MIPS_ASM::add_instruction("sub $t2,$t1,$t0\n");
						//MIPS_ASM::push(t0);*/
						
						MIPS_ASM::printComment("equal op");
						MIPS_ASM::add_instruction("li $t2,0\n");
						MIPS_ASM::add_instruction(string("bne $t0,$t1,") + "eqop_temp" + std::to_string(labelCount) + "\n");
						MIPS_ASM::add_instruction("li $v0,1\n");
						MIPS_ASM::add_instruction("li $t2,1\n");
						MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");
					}
					else{
						MIPS_ASM::printComment("not equal op");
						MIPS_ASM::add_instruction("li $t2,1\n");
						MIPS_ASM::add_instruction(string("bne $t0,$t1,") + "eqop_temp" + std::to_string(labelCount) + "\n");
						MIPS_ASM::add_instruction("li $v0,1\n");
						MIPS_ASM::add_instruction("li $t2,0\n");
						MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");

					}
					MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
					MIPS_ASM::add_instruction("sw $t2, 0($sp)\n");
				}
				else if (op == LESS)
				{
					this->my_type = "bool";
					MIPS_ASM::slt("t2", "t0", "t1");
					MIPS_ASM::push("t2");
				}
				else if (op == GREATHER)
				{
					this->my_type = "bool";
					MIPS_ASM::slt("t2", "t1", "t0");
					MIPS_ASM::push("t2");
				}
				else if (op == EQUALLESS)
				{
					this->my_type = "bool";
					MIPS_ASM::operation("t2", "t1", "t0", 2);
					MIPS_ASM::beq("t2", "0", "equalLabel");
					MIPS_ASM::slt("t2", "t2", "0");
					MIPS_ASM::bne("t2", "0", "trueLabel");
					MIPS_ASM::label("equalLabel");
					MIPS_ASM::add_instruction("addi $t2,$0,1\n");
					MIPS_ASM::jump("saveLabel");
					MIPS_ASM::label("trueLabel");
					MIPS_ASM::operation("t2", "0", "0", 1);
					MIPS_ASM::label("saveLabel");
					MIPS_ASM::push("t2");
				}
				else if (op == EQUALGREATHER)
				{
					this->my_type = "bool";
					MIPS_ASM::operation("t2", "t0", "t1", 2);
					MIPS_ASM::beq("t2", "0", "equalLabel");
					MIPS_ASM::slt("t2", "t2", "0");
					MIPS_ASM::bne("t2", "0", "trueLabel");
					MIPS_ASM::label("equalLabel");
					MIPS_ASM::add_instruction("addi $t2,$0,1\n");
					MIPS_ASM::jump("saveLabel");
					MIPS_ASM::label("trueLabel");
					MIPS_ASM::operation("t2", "0", "0", 1);
					MIPS_ASM::label("saveLabel");
					MIPS_ASM::push("t2");
				}
			}
			else if ((first->my_type == "float"&& second->my_type == "int") || (first->my_type == "float"&& second->my_type == "bool")
				|| (first->my_type == "bool"&& second->my_type == "float") || (first->my_type == "float"&& second->my_type == "float")
				|| (first->my_type == "int"&& second->my_type == "float"))
			{
				string f0 = "f0";
				string f1 = "f1";
				MIPS_ASM::popf(f1);
				MIPS_ASM::popf(f0);
				this->my_type = "float";
				if (first->my_type == "int" || first->my_type == "bool")
				{
					MIPS_ASM::add_instruction("cvt.s.w $f1,$f1\n");

				}
				if (second->my_type == "int"||second->my_type=="bool")
				{
					MIPS_ASM::add_instruction("cvt.s.w $f0,$f0\n");

				}
				if (op == 0)
				{

					//this->my_type = "int";
					MIPS_ASM::operationf(f0, f0, f1, 1);
					MIPS_ASM::pushf(f0);

				}
				else if (op == 1)
				{
					MIPS_ASM::operationf(f0, f0, f1, 2);
					MIPS_ASM::pushf(f0);
				}
				else if (op == 2)
				{
					MIPS_ASM::operationf(f0, f0, f1, 3);
					MIPS_ASM::pushf(f0);
				}
				else if (op == 3)
				{
					MIPS_ASM::operationf(f0, f0, f1, 4);
					MIPS_ASM::pushf(f0);
				}
				else if (op == 4)
				{
					MIPS_ASM::operationf(f0, f0, f1, 5);
					MIPS_ASM::pushf(f0);
				}
				if (op == EQUALS || op == NOTEQUAL)
				{


					if (op == EQUALS)
					{
						MIPS_ASM::printComment("equal opf");
						MIPS_ASM::add_instruction("li $t0,0\n");
						MIPS_ASM::add_instruction(string("c.eq.s $f0,$f1 \n"));
						MIPS_ASM::add_instruction("bc1f eqop_temp" + std::to_string(labelCount) + "\n");
						MIPS_ASM::add_instruction("li $t0,1\n");
						MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");
					}
					else{
						MIPS_ASM::printComment("not equal opf");
						MIPS_ASM::add_instruction("li $t0,1\n");
						MIPS_ASM::add_instruction(string("c.eq.s $f0,$f1 \n"));
						MIPS_ASM::add_instruction("bc1f eqop_temp" + std::to_string(labelCount) + "\n");
						MIPS_ASM::add_instruction("li $t0,0\n");
						MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");

					}
					MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
					MIPS_ASM::add_instruction("sw $t0, 0($sp)\n");
					//MIPS_ASM::add_instruction("move $t0,$t2\n");
				}

				if (op == LESS)
				{
					//MIPS_ASM::slt("t2", "t0", "t1");



					MIPS_ASM::printComment("LESS_THAN opf");
					MIPS_ASM::add_instruction("li $t0,0\n");
					MIPS_ASM::add_instruction(string("c.lt.s $f0,$f1 \n"));
					MIPS_ASM::add_instruction("bc1f eqop_temp" + std::to_string(labelCount) + "\n");
					MIPS_ASM::add_instruction("li $t0,1\n");
					MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");
					MIPS_ASM::push("t0");
					/*MIPS_ASM::add_instruction("slt $t2,$t0,$t1\n");
					MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
					MIPS_ASM::add_instruction("sw $t2, 0($sp)\n");*/
				}

				if (op == GREATHER)
				{


					MIPS_ASM::printComment("MORE_THAN opf");
					MIPS_ASM::add_instruction("li $t0,1\n");
					MIPS_ASM::add_instruction(string("c.le.s $f0,$f1 \n"));
					MIPS_ASM::add_instruction("bc1f eqop_temp" + std::to_string(labelCount) + "\n");
					MIPS_ASM::add_instruction("li $t0,0\n");
					MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");
					MIPS_ASM::push("t0");
					//MIPS_ASM::operation("t0","0","t2",1);
					/*MIPS_ASM::add_instruction("slt $t2,$t1,$t0\n");
					MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
					MIPS_ASM::add_instruction("sw $t2, 0($sp)\n");*/
				}


				if (op == EQUALLESS)
				{


					MIPS_ASM::printComment("LESS_THAN opf");
					MIPS_ASM::add_instruction("li $t0,0\n");
					MIPS_ASM::add_instruction(string("c.le.s $f0,$f1 \n"));
					MIPS_ASM::add_instruction("bc1f eqop_temp" + std::to_string(labelCount) + "\n");
					MIPS_ASM::add_instruction("li $t0,1\n");
					MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");
					MIPS_ASM::push("t0");
				}

				if (op == EQUALGREATHER)
				{
					MIPS_ASM::printComment("Equal_THAN or equal opf");
					MIPS_ASM::add_instruction("li $t0,1\n");
					MIPS_ASM::add_instruction(string("c.lt.s $f0,$f1 \n"));
					MIPS_ASM::add_instruction("bc1f eqop_temp" + std::to_string(labelCount) + "\n");
					MIPS_ASM::add_instruction("li $t0,0\n");
					MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");
					MIPS_ASM::push("t0");
				}

			}
			else
			{
				if (first->my_type == "string" && second->my_type == "string")
				{
					string x = first->string_val;
					string y =second->string_val;
					this->my_type = "string";
					if (op == 0)
					{
						/*
						MIPS_ASM::la("t0", MIPS_ASM::getStringAdressLabel(x + y));
						MIPS_ASM::push("t0");
						this->string_val = x + y;*/
						MIPS_ASM::pop(t1);
						MIPS_ASM::pop(t0);
						MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
						string ip = MIPS_ASM::addStringAdressLabel();
						MIPS_ASM::move("a0", "t0");
						MIPS_ASM::move("a1", "t1");
						MIPS_ASM::la("a2", ip);
						MIPS_ASM::jal("concatenate_2strings");
						MIPS_ASM::la("a0", ip);
						MIPS_ASM::sw("a0", 0, "sp");
					}
					else if (op == 1)
					{
						cout << "TypeError: unsupported operand type(s) for -: 'str' and 'str'at " << this->_lineNo << endl;
					}
					else if (op == 2)
					{
						cout << "TypeError: can't multiply sequence by non-int of type 'str'at " << this->_lineNo << endl;
					}
					else if (op == 3)
					{
						cout << "TypeError: unsupported operand type(s) for /: 'str' and 'str'at " << this->_lineNo << endl;
					}
					else if (op == EQUALS || op == NOTEQUAL)
					{
						this->my_type = "bool";
						if (op == EQUALS)
						{

							if (x == y)
							{
								MIPS_ASM::li("t0", 1);
								MIPS_ASM::push("t0");
							}
							if (x != y)
							{
								MIPS_ASM::li("t0", 0);
								MIPS_ASM::push("t0");
							}
						}
						else{
							if (x == y)
							{
								MIPS_ASM::li("t0", 0);
								MIPS_ASM::push("t0");
							}
							if (x != y)
							{
								MIPS_ASM::li("t0", 1);
								MIPS_ASM::push("t0");
							}

						}
					}
					else if (op == LESS)
					{
						this->my_type = "bool";
						if (x < y)
						{
							MIPS_ASM::li("t0", 1);
							MIPS_ASM::push("t0");
						}
						else
						{
							MIPS_ASM::li("t0", 0);
							MIPS_ASM::push("t0");
						}
					}
					else if (op == GREATHER)
					{
						this->my_type = "bool";
						if (x > y)
						{
							MIPS_ASM::li("t0", 1);
							MIPS_ASM::push("t0");
						}
						else
						{
							MIPS_ASM::li("t0", 0);
							MIPS_ASM::push("t0");
						}
					}
					else if (op == EQUALLESS)
					{
						this->my_type = "bool";
						if (x <= y)
						{
							MIPS_ASM::li("t0", 1);
							MIPS_ASM::push("t0");
						}
						else
						{
							MIPS_ASM::li("t0", 0);
							MIPS_ASM::push("t0");
						}
					}
					else if (op == EQUALGREATHER)
					{
						this->my_type = "bool";
						if (x >= y)
						{
							MIPS_ASM::li("t0", 1);
							MIPS_ASM::push("t0");
						}
						else
						{
							MIPS_ASM::li("t0", 0);
							MIPS_ASM::push("t0");
						}
					}
					else
					{
						cout << "TypeError: not all arguments converted during string formattingat " << this->_lineNo << endl;
					}
				}
				else
				{
					string h = "";
					if (((first->my_type == "string" && second->my_type == "int")) && (op == 2))
					{
						this->my_type = "string";
						MIPS_ASM::pop(t1);
						MIPS_ASM::pop(t0);
						MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
							 string ip=MIPS_ASM::addStringAdressLabel();
							 MIPS_ASM::la("a1", ip);
							 MIPS_ASM::jal("concatenate_string");
							 MIPS_ASM::la("a0", ip);
							 MIPS_ASM::sw("a0", 0, "sp");
					}
					else if (((first->my_type == "int" && second->my_type == "string")) && (op == 2))
					{
						this->my_type = "string";
						MIPS_ASM::pop(t0);
						MIPS_ASM::pop(t1);
						string ip = MIPS_ASM::addStringAdressLabel();
						MIPS_ASM::la("a1", ip);
						MIPS_ASM::jal("concatenate_string");

					}
					else
						cout << "unsupported operand type(s) for  stringat " << this->_lineNo << endl;;
				}
				if (((first->getNodeType() == "ArrayNode" && second->my_type == "int")) && (op == 2))
				{
					this->my_type = "Array";
					MIPS_ASM::pop(t1);
					MIPS_ASM::pop(t0);
					MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
					string arrayName;
					arrayName = MIPS_ASM::addArrayAdressLabel(15 * 4);
					MIPS_ASM::la("a1", arrayName);
					MIPS_ASM::jal("concatenate_array");
					MIPS_ASM::la("a0", arrayName);
					MIPS_ASM::sw("a0", 0, "sp");
				}
				else if (((first->my_type == "int" && second->getNodeType() == "ArrayNode")) && (op == 2))
				{
					this->my_type = "Array";
					MIPS_ASM::pop(t0);
					MIPS_ASM::pop(t1);
					MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
					string arrayName;
					arrayName = MIPS_ASM::addArrayAdressLabel(15 * 4);
					MIPS_ASM::la("a1", arrayName);
					MIPS_ASM::jal("concatenate_array");
					MIPS_ASM::la("a0", arrayName);
					MIPS_ASM::sw("a0", 0, "sp");

				}
				if (first->my_type == "type" || second->my_type == "type" )
				{
					cout << "TypeError: unsupported operand type(s)at " << this->_lineNo << endl;
				}
			}
		
		}
	
	
		
			
	}
};
int ExpressionNode::labelCount = 0;
#endif;