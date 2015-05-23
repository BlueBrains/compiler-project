#pragma once
#ifndef __AST__
#define __AST__
#include"dotNode.h"
#include"ast\returnNode.h"
#include"ast\ClassNode.h"
#include"ast\expressionNode.h"
#include"ast\IDNode.h"
#include"ast\AssignmentNode.h"
#include"ast\ValueNode.h"
#include"ast\functionNode.h"
#include"ast\CallVariableNode.h"
#include"ast\CallTypeNode.h"
#include"ast\callFunctionNode.h"
#include"ast\WhileNode.h"
#include"ast\ifNode.h"
#include"ast\ElseIfNode.h"
#include"ast\ElseNode.h"
#include"ast\ForNode.h"
#include"ast\TryNode.h"
#include"ast\ExceptNode.h"
#include"ast\FinallyNode.h"
#include"ast\ArrayElementNode.h"
#include"ArrayNode.h"
#include"ast\flowStmt.h"
#include"ast\PrintNode.h"
#include"ast\GlobalNode.h"
#include"ast\DelNode.h"
#include"ast\PassNode.h"
#include"ast\subscriptNode.h"
#include"ast\BooleanNode.h"
#include"ast\shortIfNode.h"
#include"ast\ErrorNode.h"
char* arr[] =
{ "rootNode" , "valueNode", "stringValNode", "idNode", "callNode", "assignNode", "minusNode", "plusNode","moreThanNode", "lessThanNode", "exprListNode",

//statements
"ifNode", "elseIfNode", "elseNode", "stmtListNode", "whileNode", "declrationStmtNode", "expressionNode", "forNode", "tryNode", "exceptNode", "finallyNode", "flowStmtNode", "printNode", "delNode", "importNode", "globalNode", "passNode",

//function
"functionListNode", "functionNode", "functionHeaderNode", "paramNode", "paramListNode", "FunctionCall",

//type: Here AST is used as temporoy data structure to hold type to upper grammars
"idTypeNode", "intTypeNode", "stringTypeNode", "classNode", "TypeCall", "VariableCall","Unkown","DotNode" };
bool by_self = false;
class AST
{
private:
	Type* t=NULL;
	Function* f = NULL;
	Variable * v = new Variable();
	bool right_assign=false;
public:
	AST(void)
	{

	}
	~AST(void)
	{

	}
	vector<Node*>outer_node;
	void generate_main(Function* main)
	{
		main->get_FunctionNode()->generateCode();
		MIPS_ASM::add_instruction("li $v0, 10 \n");
		MIPS_ASM::add_instruction("syscall \n");
		for (int i = 0; i < func_vec.size(); i++)
		{
			MIPS_ASM::label(static_cast<FunctionNode*>(func_vec.at(i))->get_function()->get_label());
			func_vec.at(i)->generateCode();
		}
		MIPS_ASM::add_instruction("\n \n");
		MIPS_ASM::printComment("this function for string*number");
		MIPS_ASM::mult_string();
	}
	ClassNode * createClassNode(Type* t, Node * son, Node* next, int line_no, int col_no)
	{
		ClassNode* temp = new ClassNode(t, son, next,line_no,col_no);
		return temp;
	}
	FunctionNode * createFunctionNode(Function* f, Node * son, Node* next, int line_no, int col_no, vector<Node*> dp)
	{
		
		if (f->getparameters().size() > 0){
			for (int i = 0; i < f->getparameters().size(); i++)
			{
				static_cast<IDNode*>(dp.at(i))->set_variable(f->getparameters().at(i));
				if (dp.at(i)->Next != NULL)
				{
					static_cast<CallVariableNode*>(dp.at(i)->Next)->set_variable(f->getparameters().at(i));
				}
			}
			Node* temp_par = dp.at(0);
			for (int i = 1; i < dp.size(); i++)
			{
				this->addNext2(temp_par, dp.at(i));
			}
			son = this->addNext2(temp_par, son);
		}
		FunctionNode* temp = new FunctionNode(f, son, next, line_no, col_no, dp);

		f->set_FunctionNode(temp);
		stringstream ss;
		ss << f->get_name() << temp->getId();
		f->set_label(ss.str());
			/*
			CallVariableNode *toto = new CallVariableNode();

			string h;
			if (dp.size() > 0){
				toto= static_cast<CallVariableNode*>(static_cast<AssignmentNode*>(dp.at(0))->get_left());
			    h = toto->getID();
			}
			bool enter = true;
			bool start = false;
			int i = 1;
			Node* temp_w= new Node();
			temp->Son = temp_w;
			if ((dp.size()>0) && (strcmp(f->getparameters().at(0)->get_name(), h.c_str()) == 0))
			{
				temp_w = createIDNode(f->getparameters().at(0), NULL, NULL, line_no, col_no);
				temp_w->Next = dp.at(0);
				temp_w = temp_w->Next;
				start = true;
			}
			else
				temp_w = createIDNode(f->getparameters().at(0), NULL, NULL, line_no, col_no);

			while (enter && (i<f->getparameters().size())){

				if ((strcmp(f->getparameters().at(i)->get_name(), h.c_str()) == 0) || start)
				{
					for (int j = 0; j < dp.size(); j++)
					{
						temp_w->Next = createIDNode(f->getparameters().at(i), NULL, NULL, line_no, col_no);
						temp_w = temp_w->Next;
						temp_w->Next = dp.at(j);
						temp_w = temp_w->Next;
					}
					enter = false;
					break;
				}
				if (!enter)
					break;
				temp_w->Next = createIDNode(f->getparameters().at(i), NULL, NULL, line_no, col_no);
				temp_w = temp_w->Next;
				i++;
			}
			temp_w->Next = son;
		}
		else
			temp->Son = son;
			*/
		return temp;
	}
	WhileNode * createWhileNode(Node * son, Node* next, Node* cond, Node* scoop,  int line_no, int col_no)
	{
		WhileNode* temp = new WhileNode(son, next, cond, scoop);
		return temp;
	}
	ForNode* createForNode(Node * son, Node* next, Node* expr, Node* range, Node* scoop,  int line_no, int col_no)
	{
		ForNode* temp = new ForNode(son, next, expr, range, scoop);
		return temp;
	}
	TryNode* createTryNode(Node * son, Node* next, Node* scoop,  int line_no, int col_no)
	{
		TryNode* temp = new TryNode(son, next, scoop,line_no,col_no);
		return temp;
	}
	ExceptNode* createExceptNode(Node * son, Node* next, Node* exception, Node* scoop,  int line_no, int col_no)
	{
		ExceptNode* temp = new ExceptNode(son, next, exception, scoop);
		return temp;
	}
	FinallyNode* createFinallyNode(Node* son, Node* next, Node* scoop, int line_no, int col_no)
	{
		FinallyNode* temp = new FinallyNode(son, next, scoop);
		return temp;
	}
	FlowStmtNode* createFlowStmtNode(Node* son, Node* next, flowType type, Node* scoop, int line_no, int col_no){
		FlowStmtNode* temp = new FlowStmtNode(son, next, type, scoop);
		return temp;
	}	
	DelNode * createDelNode(Node* son, Node* next, Node* scoop, int line_no, int col_no){
		DelNode* temp = new DelNode(son,next,scoop);
		return temp;
	}
	PassNode * createPassNode(Node* son, Node* next, Node* scoop, int line_no, int col_no){
		PassNode* temp = new PassNode(son,next,scoop);
		return temp;
	}
	PrintNode * createPrintNode(Node* son, Node* next, Node* scoop, int line_no, int col_no){
		PrintNode* temp = new PrintNode(son,next,scoop,line_no,col_no);
		return temp;
	}
	GlobalNode * createGlobalNode(Node* son, Node* next, Node* scoop, int line_no, int col_no){
		GlobalNode* temp = new GlobalNode(son,next,scoop);
		return temp;
	}
	ExpressionNode * createExprNode(Node * son, Node* next, operand op, int line_no, int col_no)
	{
		ExpressionNode* temp = new ExpressionNode(op, son, next,line_no,col_no);
		return temp;
	}
	BooleanNode * createBooleanNode(Node*First, Node* second,  boolean_operand op,Node * son, Node* next, int line_no, int col_no)
	{
		BooleanNode* temp = new BooleanNode(First, second, op, NULL, next, line_no, col_no);
		return temp;
	}
	ExpressionNode * createExprNode(Node*First,Node* second, Node* next, operand op, int line_no, int col_no)
	{
		ExpressionNode* temp = new ExpressionNode(First,second,op, NULL, next, line_no, col_no);
		return temp;
	}
	IDNode * createIDNode(Variable* v1, Node * son, Node* next,  int line_no, int col_no)
	{
		IDNode* temp = new IDNode(v1, son, next,line_no,col_no);
		return temp;
	}
	AssignmentNode* createAssignNode(Node * son, Node* next, int line_no, int col_no)
	{
		AssignmentNode* temp = new AssignmentNode(son, next,line_no,col_no);
		return temp;
	}
	AssignmentNode* createAssignNode(Node* left_side,Node*right_side,Node * son, Node* next, int line_no, int col_no)
	{
		AssignmentNode* temp = new AssignmentNode(left_side, right_side, son, next, line_no, col_no);
		return temp;
	}
	DotNode* createDotNode(Node * son, Node* next, int line_no, int col_no)
	 {
		 DotNode* temp = new DotNode(son, next,line_no,col_no);
		 return temp;
	 }
	DotNode* createDotNode(vector<Node*>v,Node * son, Node* next, int line_no, int col_no)
	{
		DotNode* temp = new DotNode(v,son, next, line_no, col_no);
		return temp;
	}
	ErrorNode * createErrorNode(string s, Node * son, Node* next, int line_no, int col_no)
	{
		ErrorNode* temp = new ErrorNode(s, son, next, line_no, col_no);
		return temp;
	}
	ValueNode * createTypeNode(void* v1, Node * son, Node* next,  int line_no, int col_no, Types t)
	{
		
		//cout << "value is amer " << (*(int*)v1) << endl;
		ValueNode* temp = new ValueNode(v1, t, son, next,line_no,col_no);
		return temp;
	}

	CallVariableNode * createCallVarNode(string id,Variable* v, Node * son, Node* next,  int line_no, int col_no)
	{
		CallVariableNode *temp = new CallVariableNode(id, v, son, next,line_no,col_no);
		return temp;
	}
	CallTypeNode * createCallTypeNode(string id, vector<char*>args, Node * son, Node* next,  int line_no, int col_no)
	{
		CallTypeNode *temp = new CallTypeNode(id, args, son, next,line_no,col_no);
		return temp;
	}
	IfNode* createIfNode(Node* son, Node* next, Node* condition, Node* scoop,  int line_no, int col_no)
	{
		IfNode* temp = new IfNode(son, next, condition, scoop,line_no,col_no);
		return temp;
	}
	ElseIfNode* createElseIfNode(Node* son, Node* next, Node* condition, Node* scoop, int line_no, int col_no)
	{
		ElseIfNode* temp = new ElseIfNode(son, next, condition, scoop,line_no,col_no);
		return temp;
	}
	ElseNode* createElseNode(Node* son, Node* next, Node* scoop, int line_no, int col_no)
	{
		ElseNode* temp = new ElseNode(son, next, scoop,line_no,col_no);
		return temp;
	}
	CallFunctionNode* createCallFunctionNode(string id,vector <Node*> args, Function* v, Node * son, Node* next,  int line_no, int col_no)
	{
		CallFunctionNode *temp = new CallFunctionNode(id, args, v, son, next,line_no,col_no);
		//Node* i = temp;
		return temp;
	}
	shortIfNode* createShortIfNode(Node* first,Node* cond, Node* second, Node * son, Node* next, int line_no, int col_no)
	{
		shortIfNode *temp = new shortIfNode( first,cond,second, son, next, line_no, col_no);
		//Node* i = temp;
		return temp;
	}
	ArrayNode* createArrayNode(vector<Node*>elem, Node * son, Node* next,  int line_no, int col_no)
	{
		ArrayNode* temp = new ArrayNode(elem, son, next,line_no,col_no);
		//Node* u = temp;
		return temp;
	}
	ArrayElementNode* createArrayElementNode(Variable* v, Node* index, Node * son, Node* next,  int line_no, int col_no,string x = "")
	{
		ArrayElementNode* temp;
		if (x != "")
		{
			 temp = new ArrayElementNode(x,v, index, son, next,line_no,col_no);
		}
		else
			temp = new ArrayElementNode(v, index, son, next, line_no, col_no);
		//Node* u = temp;
		return temp;
	}
	SubscriptNode* createSubscriptNode(Node* first,Node* second, Node * son, Node* next, int line_no, int col_no)
	{
		SubscriptNode* temp = new SubscriptNode(first,second, son, next, line_no, col_no);
		//Node* u = temp;
		return temp;
	}
	returnNode* createReturnNode(Function* f, Node* scoop, Node* son, Node*next, int l_no, int c_no)
	{
		returnNode* temp = new returnNode( f,scoop,son,next, l_no, c_no);
		return temp;
	}
	Node * addNext(Node* base,Node* next)
	{
		while (base->Next != NULL)
			base = base->Next;
		base->Next = next;
		return base;
	}
	Node * addNext2(Node* base, Node* next)
	{
		Node* root = base;
		while (base->Next != NULL)
			base = base->Next;
		base->Next = next;
		return root;
	}
	Node * addSon(Node* base, Node* Son)
	{
		base->Son = Son;
		return base->Son;
	}
	//Node * addToLastRight(TreeNode * basic, TreeNode* newItem);
	void print(Node * tn, int lvl)
	{
		if (tn){
			cout << "my id is " << tn->getId() << "   ";
				tn->print();
			print(tn->Son, lvl + 1);
			print(tn->Next, lvl);
		}
	}
	void tree(Node* n)
			{
		Type  * t1=new Type();
		
		bool is_dot = false;
		//MyParser* p = new MyParser();
		if (n)
		{
			if (n->getNodeType() == "ClassNode")
			{
				ClassNode* test = static_cast<ClassNode*>(n);
				//cout << "class name is " << test->get_type()->get_name() << endl;
				t = test->get_type();
				outer_node.push_back(n);
			}
			else if (n->getNodeType() == "FunctionNode")
			{
				FunctionNode* test = static_cast<FunctionNode*>(n);
				f = test->get_function();
				outer_node.push_back(n);
			}
			
			else if (n->getNodeType() == "ForNode")
			{
				outer_node.push_back(n);
			}
			else if (n->getNodeType() == "IfNode")
			{
				outer_node.push_back(n);
			}
			else if (n->getNodeType() == "ElseIfNode")
			{
				outer_node.push_back(n);
			}
			else if (n->getNodeType() == "ElseNode")
			{
				outer_node.push_back(n);
			}
			else if (n->getNodeType() == "TryNode")
			{
				outer_node.push_back(n);
			}
			else if (n->getNodeType() == "ExceptNode")
			{
				outer_node.push_back(n);
			}
			
			else if (n->getNodeType() == "AssignmentNode")
			{
				//outer_node.push_back(n);
				n->check(outer_node);
				right_assign = true;
			}
			else if (n->getNodeType() == "WhileNode")
			{
				n->check(outer_node);
				outer_node.push_back(n);
			}
			else
			{
				n->check(outer_node);
				//n->generateCode();
			}
			
			if (!is_dot)
			{
				tree(n->Son);
				if ((n->getNodeType() == "WhileNode") || (n->getNodeType() == "ExceptNode") || (n->getNodeType() == "TryNode") || (n->getNodeType() == "ElseNode")
					|| (n->getNodeType() == "ElseIfNode") || (n->getNodeType() == "IfNode") || (n->getNodeType() == "ForNode") || (n->getNodeType() == "FunctionNode"))
				{
					outer_node.pop_back();
				}
			}
			else
				is_dot = false;
			tree(n->Next);
			//checkFromCurrentNode();
			}
	}
	Variable* checkVarFromCurrentNode(string id)
	{
		int i = outer_node.size() - 1;
		Node* temp = outer_node.back();
		Node* temp2;
		Variable* v=NULL;
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
	void check_dotNode(Node *n){
		Type* t1 = NULL;
		t1 = t;
		Node* temp = n->Son;
		while (temp)
		{
			if (temp->getNodeType() == "CallVariableNode")
			{
				CallVariableNode* test = static_cast<CallVariableNode*>(temp);
				string x = test->getID();
				if (x == "self")
				{
					by_self = true;

				}
				else
				{
					if ((by_self))
					{
						if (temp->Next == NULL)
						{
							if (x=="self")
								cout << "Error :not a statement self at Line No:" << n->_lineNo << " Column No:" << n->_colNo << endl;
							char* p = const_cast<char *>(x.c_str());
							v = checkVariable(t, p,temp->_lineNo,temp->_colNo);
							if (v)
							{
								Function* fo;
								if (right_assign)
									v->init = true;
								int i = outer_node.size()-1;
								if (outer_node.at(i)->getNodeType() != "ClassNode")
								{
									Node* temp2 = outer_node.at(i);
									while (outer_node.at(i)->getNodeType() != "FunctionNode")
									{
										i--;
										temp2 = outer_node.at(i);
									}
									fo = static_cast<FunctionNode*>(temp2)->get_function();
									if (fo->get_static() && !v->get_static())
									{
										cout << "Error: non-static variable " << x << " cannot be referenced from a static context at Line No:" << n->_lineNo << " Column No:" << n->_colNo << endl;
									}
									else if (!v->init)
									{
										cout << "Error: non-initialized variable " << x << " at Line No:" << n->_lineNo << " Column No:" << n->_colNo << endl;
									}
								}
								
								//cout << "v name is " << v->get_name() << endl;
								static_cast<CallVariableNode*>(temp)->set_variable(v);
							}
						}
						else
						{
							//on generating code (self.x.y)
						}
						by_self = false;
					}
					else
					{
						if (temp->Next == NULL)
						{

							if (x == "self")
								cout << "Error :not a statement self at Line No:" << n->_lineNo << " Column No:" << n->_colNo << endl;
							char* p = const_cast<char *>(x.c_str());
							if (t1)
							{
								v = checkVariable(t1, p, temp->_lineNo, temp->_colNo);
								if (v)
								{
									test->set_variable(v);
								}
							}

						}
						else{
							t1 = NULL;
							//on generating code (x.y)
						}

					}
				}
			}
			else if (temp->getNodeType() == "callFunctionNode")
			{
				CallFunctionNode* test = static_cast<CallFunctionNode*>(temp);
				string x = test->getID();
				char* p = const_cast<char *>(x.c_str());
				if ((by_self))
				{
					f = checkFunction(t1, p, temp->_lineNo, temp->_colNo);
					if (f)
					{
						static_cast<CallFunctionNode*>(temp)->set_function(f);
						if (f->getparameters().size() != 0)
						{

						}
					}
					by_self = false;
				}
			}
			else if (temp->getNodeType() == "ArrayElementNode")
			{
				ArrayElementNode* test = static_cast<ArrayElementNode*>(temp);
				string x = test->getID();
				char* p = const_cast<char *>(x.c_str());
				if ((by_self))
				{
					v = checkVariable(t, p, temp->_lineNo, temp->_colNo);
					if ((v) && (v->get_isarray()))
					{
						//cout << "v name is " << v->get_name() << endl;
						static_cast<ArrayElementNode*>(temp)->set_variable(v);
					}
					else if (!v->get_isarray())
					{
						cout << "Error: variable is not array" << x << " at Line No:" << n->_lineNo << " Column No:" << n->_colNo << endl;
					}
					by_self = false;
				}
			}
			temp = temp->Next;

		}

	}
	Variable* checkVariableFromInhertanceLoop(Type* t, char* name, string& toto, int& t_num)
	{
		Variable* v=NULL;
		int j = 0;
		vector<Type*>i_t = t->getInheritedType();
		string s = "";
		for (int i = 0; i < i_t.size(); i++)
		{
			v = (Variable*)i_t.at(i)->getScope()->m->get(name, "Variable");
			if (v)
			{
				toto = toto + v->get_name() + " ";
				t_num++;
			}
			else
			{
				checkVariableFromInhertanceLoop(i_t.at(i), name, toto, t_num);
			}

			}
		return v;
	}
	Variable* checkVariable(Type* t, char* name,int lineNo,int colNo)
	{
		Variable* v = (Variable*)t->getScope()->m->get(name, "Variable");
		if (!v){
			int j = 0;
			string s;
			v = checkVariableFromInhertanceLoop(t, name, s, j);
			if (v)
			{
				if (j > 1)
					cout << "ambigious variable in parents types " << s << endl;
			}
			else
			{
				cout << "Error :variable Not found " << name << " at Line No:" << lineNo << " Column No:" << colNo << endl;
			}
		}
		return v;
	}
	Function* checkFunction(Type* t, char* name,int lineNo,int colNo)
	{
		Function * f = (Function*)t->getScope()->m->get(name, "Function");
		if (!f){
			int j = 0;
			vector<Type*>i_t = t->getInheritedType();
			for (int i = 0; i < i_t.size(); i++)
			{
				f = (Function*)i_t.at(i)->getScope()->m->get(name, "Function");
				j++;
			}
			if (!f)
			{
				cout << "Error :Function Not found " << name << " at Line No:" << lineNo << " Column No:" << colNo << endl;
			}
			else
			{
				if (j > 1)
					cout << "ambigious function in parents types";
			}
		}
		return f;
	}
	Type* checkTypeFromInhertanceLoop(Type* t, char* name,string& toto,int& t_num)
	{
		Type* v=NULL;
		int j = 0;
		vector<Type*>i_t = t->getInheritedType();
		string s="";
		for (int i = 0; i < i_t.size(); i++)
		{
			v = (Type*)i_t.at(i)->getScope()->m->get(name, "Class");
			if (v)
			{
				toto = toto + v->get_name()+" ";
				t_num++;
			}
			else
			{
				checkTypeFromInhertanceLoop(i_t.at(i), name, toto, t_num);
			}

		}
		return v;
			}
	Type* checkType(Type* t, char* name)
	{
		Type * v = (Type*)t->getScope()->m->get(name, "Class");
		string s;
		int x = 0;
		if (!v){
			v = checkTypeFromInhertanceLoop(t, name, s, x);
			if (v)
			{
				if (x > 1)
					cout << "ambigious type in parents types " << s << endl;
			}
			else
			{
				Scope * temp = t->getScope()->parent;
				while (temp && !v){
					v = (Type*)temp->m->get(name, "Class");
					temp = temp->parent;
				}
			}
		}
		return v;
			}
	Variable* checkVarForScope(char* x)
	{
		int i = 1;
		do
		{
			if (outer_node.at(outer_node.size() - i))
			{

		}
		} while (true);
	}
};
#endif