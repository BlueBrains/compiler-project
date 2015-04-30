%output ="yacc.cpp"
%error-verbose
%glr-parser
%{
	#pragma once
	#ifndef __YACCF__
	#define __YACCF__
	#define _CRT_SECURE_NO_WARNINGS
	#include <iostream>
	#include <FlexLexer.h>
	#include <string>
	#include <stack>
	#include "Program.h"
	#include "SyntaxError.h"
	#include <fstream>
	#include <stdlib.h>
	#include "Streams.h"
	#include "ErrorRevovery.h"
	#include "compilerProject/AST.h"
	#include"compilerProject/MyParser.h"
	#include <set>
	using namespace std;
	class ColonStack
	{
		public:
		ColonStack(int line, int col){colNum = col; lineNum = line;}
		int colNum,lineNum;
	};
	stack<ColonStack*>colonStack;
	int yylex(void);
	int yyparse();
	int strlength(char *);
	void yyerror(const char *);
	int lineno=0,colnumber=0;
	ErrorRecovery* err=new ErrorRecovery();
	extern FlexLexer* lexer = new yyFlexLexer();
	extern string sourceFile="";
	string dir_path="";
	string temp_id="";
	stack<string> temp_id1;
	stack<string> fileStack;
	vector<string> parsedFile;
	vector<string> temp_id2;
	int visit_num=0;//this variable for detected that if in right side in expretion
	char* i_type;
	bool exist;
	Node* k;
	Node* root;
	char* t_id=new char[10];
	char* acc_mod=new char[8];
	vector<char*> sto_mod;
	bool ss=false;
	bool ff=false;
	bool pro= false;
	bool pp=true;
	bool self=false;
	bool is_list=false;
	bool is_dic=false;
	bool array_right=false;
	int linefunc=0;
	int colmfunc=0;
	bool constant =false;
	Node* lastNode;
	operand op;
	operand comp_op;
	bool v_static,v_final;
	vector<char *>inhertance_list;
	vector<Node*>arrayvec;
	vector<Node*>dotvec;
	extern int lineNum;
	extern int colNum;
	vector<char *>ID_list;
	Variable* v;
	Variable* v1=new Variable();
	Type* t;
	class Function * testfunction;
	vector<char *> parameters;
	class Parser
	{
		public:
		int	parse()
		{
			return yyparse();
		}
	};
	MyParser * p = new MyParser();
	AST * ast = new AST();
%}		


%union{
	struct R{
		int intVal;
		float floatVal;
		long longVal;
		char charVal;
		char* strVal;
		int lineNum;
		int colNum;
	}r;
		class YaccSimpleType * yaccSimpleType;
		class Variable * var;
		class Function * function;
		class Type * type;
		class Node * tn;
		enum operand operands;
		
}


%start	file_input
%token	error ENDMARKER
%token	IMPORT CLASS END PRIMARY OR AND NOT NOT_EQUAL FINAL STATIC SELF
%token	DEF ELSE IF ELIF WHILE FOR IN TRY FINALLY ARROW NONLOCAL
%token  PLUS_EQUAL MINUS_EQUAL DIV_EQUAL MOD_EQUAL AND_EQUAL OR_EQUAL
%token  SHAPOO_EQUAL LESS_THAN_2_EQUAL MORE_THAN_2_EQUAL STAR_2_EQUAL DIV_2_EQUAL MORE_LESS
%token  FALSE TRUE STAR_2 NUMBER_INT NUMBER_LONG NUMBER_FLOAT NAME DOT_3 
%token	WITH AS ASSERT EQUAL DEL RETURN PRINT GLOBAL STAR_EQUAL LESS_THAN_2 
%token	RAISE PRIVATE PUBLIC PROTECTED YIELD MORE_THAN_2 STRING NONE IS DIV_2 
%token	LESS_OR_EQUAL MORE_OR_EQUAL EXCEPT PASS CHAR_VALUE BREAK CONTINUE

%nonassoc stmt_1 stmt_2 stmt_3 stmt_4 stmt_5 stmt_6 stmt_7 stmt_8  stmt_9 stmt_10 stmt_11 stmt_12 stmt_13 stmt_14
%nonassoc ',' IN MORE_LESS IS STAR_2 '(' '[' STRING
%left OR AND
%left NOT
%left NOT_EQUAL EQUAL '<' LESS_OR_EQUAL '>' MORE_OR_EQUAL
%left '+' '-'
%left '*' '/' '%'


%%



file_input: program  {Streams::verbose() <<"file_input: program ENDMARKER\n";
										p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						root = $<tn>1;		
						if(fileStack.size()==1){
							//ast->print(root, 0);
							
						p->print_symbol();
						ast->tree($<tn>1);
						ast->print($<tn>1, 0);}
						Streams::verbose().flush();	
								}
			;

program : import_stmt ';' temp2 {Streams::verbose() <<"program : import_stmt ';' temp2 \n";}
          |temp2 {Streams::verbose() <<"program : temp2 \n";}
		  ;


temp2:  classdef temp2 {Streams::verbose() <<"temp2: classdef temp2\n";
							ast->addNext($<tn>1,$<tn>2);
							cout<<"enter upper"<<endl;
						}
		|classdef  {Streams::verbose() <<"temp2: classdef \n";
							//ast->createClassNode();
							cout<<"enter classdef"<<endl;
					}
		;



//temp1:  CLASS NAME ':'  {Streams::verbose() <<"temp1:  CLASS NAME ':'  \n";}
		//|CLASS NAME '(' ')' ':'  {Streams::verbose() <<"temp1: CLASS NAME '(' ')' ':'  \n";}
		//|CLASS NAME '(' arglist ')' ':'  {Streams::verbose() <<"trmp2: CLASS NAME '(' arglist ')' ':'  \n";}
		//|access CLASS NAME ':'  {Streams::verbose() <<"temp1: access CLASS NAME ':'  \n";}
		//|access CLASS NAME '(' ')' ':'  {Streams::verbose() <<"temp1: access CLASS NAME '(' ')' ':'  \n";}
		//|access CLASS NAME '(' arglist ')' ':'  {Streams::verbose() <<"access CLASS NAME '(' arglist ')' ':'  \n";}
		//;
		

funcdef: funcheader suite {
							testfunction = p->finishFunctionDeclaration(testfunction,linefunc,colmfunc);
							$<tn>$=ast->createFunctionNode(testfunction,$<tn>2,NULL,yylval.r.lineNum,yylval.r.colNum);
							parameters.clear();
							linefunc=0;colmfunc=0;
							Streams::verbose() <<"funcdef:	funcheader suite \n";
						  }
	
funcheader:	DEF  NAME parameters ARROW test ':'  {Streams::verbose() <<"funcheader:	DEF  NAME parameters ARROW test ':'  \n";}
			|DEF access NAME parameters ARROW test ':'  {Streams::verbose() <<"funcheader:  DEF access NAME parameters ARROW test ':'  \n";}
			|DEF NAME parameters ':'  {
											testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, $<r.strVal>2,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
											Streams::verbose() <<"funcheader: DEF NAME parameters ':' \n";
											
									   }
			|DEF access NAME parameters ':'  { 
												testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,ff, $<r.strVal>3,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF access NAME parameters ':' \n";
											  }
			|DEF STATIC NAME parameters ARROW test ':'  {Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ARROW test ':' \n";}
			|DEF FINAL NAME parameters ARROW test ':'  {Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ARROW test ':' \n";}
			|DEF STATIC NAME parameters ':'  {
												testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, $<r.strVal>3,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF STATIC NAME parameters ':' \n";
											 }
			|DEF FINAL NAME parameters ':'  {
											testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, $<r.strVal>3,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
												Streams::verbose() <<"funcheader: DEF FINAL NAME parameters ':' \n";
											 }
			|DEF STATIC FINAL NAME parameters ARROW test ':'  {Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ARROW test ':' \n";}
			|DEF FINAL STATIC NAME parameters ARROW test ':'  {Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ARROW test ':'  \n";}
			|DEF STATIC FINAL NAME parameters ':'  {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, $<r.strVal>4,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF STATIC FINAL NAME parameters ':'  \n";
												    }
			|DEF FINAL STATIC NAME parameters ':'  {
													testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, $<r.strVal>4,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
													Streams::verbose() <<"funcheader: DEF FINAL STATIC NAME parameters ':'  \n";
													}
			|DEF FINAL access NAME parameters ARROW test ':'  {
																testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, $<r.strVal>4,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
																Streams::verbose() <<"funcheader: DEF FINAL access NAME parameters ARROW test ':'  \n";
															  }
			|DEF STATIC access NAME parameters ARROW test ':'  {Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ARROW test ':'  \n";}
			|DEF STATIC access NAME parameters ':'  {
											testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, $<r.strVal>4,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
														colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':'  \n";
													}
			|DEF FINAL access NAME parameters ':'  {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, $<r.strVal>4,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF STATIC access NAME parameters ':' ";
													}
			|DEF STATIC FINAL access NAME parameters ARROW test ':'  {Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ARROW test ':'  \n";}
			|DEF FINAL STATIC access NAME parameters ARROW test ':'  {Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ARROW test ':'  \n";}
			|DEF STATIC FINAL access NAME parameters ':'  {
											testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, $<r.strVal>5,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF STATIC FINAL access NAME parameters ':'  \n";
														  }
			|DEF FINAL STATIC access NAME parameters ':'  {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, $<r.strVal>5,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL STATIC access NAME parameters ':'  \n";
														  }
			|DEF access STATIC NAME parameters ARROW test ':'  {Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ARROW test ':'  \n";}
			|DEF access FINAL NAME parameters ARROW test ':'  {Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ARROW test ':'  \n";}
			|DEF access STATIC NAME parameters ':'  {
														testfunction = p->createTypeFunctionHeader(t,true,pp,pro,ff, $<r.strVal>4,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access STATIC NAME parameters ':'  \n";
													}
			|DEF access FINAL NAME parameters ':'  {
														testfunction = p->createTypeFunctionHeader(t,ss,pp,pro,true, $<r.strVal>4,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
														Streams::verbose() <<"funcheader: DEF access FINAL NAME parameters ':'  \n";
													}
			|DEF access STATIC FINAL NAME parameters ARROW test ':'  {Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ARROW test ':'  \n";}
			|DEF access FINAL STATIC NAME parameters ARROW test ':'  {Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ARROW test ':'  \n";}
			|DEF access STATIC FINAL NAME parameters ':'  {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, $<r.strVal>5,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
											colmfunc=yylval.r.colNum;
															Streams::verbose() <<"funcheader: DEF access STATIC FINAL NAME parameters ':'  \n";
			   											  }
			|DEF access FINAL STATIC NAME parameters ':'  {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, $<r.strVal>5,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF access FINAL STATIC NAME parameters ':'  \n";
			  											  }
			|DEF STATIC access FINAL NAME parameters ARROW test ':'  {Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ARROW test ':'  \n";}
			|DEF FINAL access STATIC NAME parameters ARROW test ':'  {Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ARROW test ':'  \n";}
			|DEF STATIC access FINAL NAME parameters ':'  {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, $<r.strVal>5,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF STATIC access FINAL NAME parameters ':'  \n";
			  											  }
			|DEF FINAL access STATIC NAME parameters ':'  {
															testfunction = p->createTypeFunctionHeader(t,true,pp,pro,true, $<r.strVal>5,parameters,yylval.r.lineNum, yylval.r.colNum);
											pp=true;ff=false;ss=false;pro=false;
											parameters.clear();
											linefunc=yylval.r.lineNum;
															colmfunc=yylval.r.colNum;Streams::verbose() <<"funcheader: DEF FINAL access STATIC NAME parameters ':'  \n";
														  }
			;

parameters: '(' arglist ')' {Streams::verbose() <<"parameters:'(' arglist ')'\n";}
			|'(' ')' {Streams::verbose() <<"parameters:'(' ')'\n";}
			;

stmt:	simple_stmt {	$<tn>$=$<tn>1;	Streams::verbose() <<"stmt:	simple_stmt \n";
						
					}
		| compound_stmt {	$<tn>$=$<tn>1;cout<<"line num"<<yylval.r.lineNum<<endl;	Streams::verbose() <<"stmt: compound_stmt\n";}
		;
simple_stmt: small_stmt ';' {Streams::verbose() <<"simple_stmt: small_stmt ';' \n";
								$<tn>$=$<tn>1;
							}
			 ;
small_stmt: expr_stmt	{
							Streams::verbose() <<"small_stmt: expr_stmt \n";
							$<tn>$=$<tn>1;
						}
			|del_stmt {
						Streams::verbose() <<"small_stmt: del_stmt \n";
						$<tn>$=$<tn>1;
					  }
			|pass_stmt {
							Streams::verbose() <<"small_stmt: pass_stmt \n";
							$<tn>$=$<tn>1;
					   }
			|flow_stmt {
							Streams::verbose() <<"small_stmt: flow_stmt \n";
							$<tn>$=$<tn>1;
					   }
			|import_stmt {
							Streams::verbose() <<"small_stmt: import_stmt \n";
							$<tn>$=$<tn>1;
						 }
			|global_stmt {
							Streams::verbose() <<"small_stmt: global_stmt \n";
							$<tn>$=$<tn>1;
						 }
			|nonlocal_stmt {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";}
			|print_stmt  {
							Streams::verbose() <<"small_stmt: print_stmt \n";
							$<tn>$=$<tn>1;
						 }
			;

expr_stmt:	testlist_star_expr augassign testlist {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";}
			|testlist_star_expr {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";}
			| vardef {
								Streams::verbose() <<"compound_stmt: vardef\n";
								$<tn>$=$<tn>1;
								visit_num=0;
							}
			| vardef right_testlist{
								Streams::verbose() <<"compound_stmt: vardef\n";
								//$<tn>$=$<tn>1;
								visit_num=0;
								Node *il=new Node();
								v1->init=true;
								cout<<"var name in yacc "<<v1->get_name()<<endl;
								il=ast->createCallVarNode(v1->get_name(),v1,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);	
								//il=ast->addNext(il,$<tn>2);
								v1=NULL;
								Node *il2=new Node();
								il2=ast->createAssignNode(il,$<tn>2,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
								$<tn>$=ast->addNext($<tn>1,il2);
							}

			|testlist_star_expr right_testlist {Streams::verbose() <<"expr_stmt: testlist_star_expr right_testlist \n";
													//$<amerstr>1;
													visit_num=0;
													Node *il=new Node();
													il=ast->addNext($<tn>1,$<tn>2);
													Node* p=new Node();
													$<tn>$=ast->createAssignNode($<tn>1,$<tn>2,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
													p=$<tn>$;
													if(lastNode)
													{
														//cout<<"enter heree amer \n";
														$<tn>$=ast->addNext(lastNode,p);
														
														lastNode=NULL;
														//cout<<"print in expr_stmt if";
														//$<tn>$->print();cout<<endl;
													}
													if((v)&&(array_right))
													{
														v->set_isarray(true);
													}
													
													
													
												}
			;
					
right_testlist : '=' testlist_star_expr right_testlist {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";}
				|'=' testlist_star_expr {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";$<tn>$=$<tn>2;}
				;

testlist_star_expr: comma_test_star_seqJ {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";}
					|comma_test_star_seqJ ',' {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";}
					|',' {Streams::verbose() <<"',' \n";}
					|test comma_test_star_seqJ {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";}
					|test {
								Streams::verbose() <<"testlist_star_expr: test \n"; 
								$<tn>$=$<tn>1;
							}
					|star_expr comma_test_star_seqJ ',' {Streams::verbose() <<"testlist_star_expr: star_expr comma_test_star_seqJ ',' \n";}
					|star_expr ',' {Streams::verbose() <<"testlist_star_expr: star_expr ',' \n";}
					;

comma_test_star : ',' test {Streams::verbose() <<"comma_test_star : ',' test \n";}
				|',' star_expr {Streams::verbose() <<"comma_test_star : ',' star_expr \n";}
				;

comma_test_star_seqJ : comma_test_star_seqJ comma_test_star  {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star_seqJ comma_test_star \n";}
					|comma_test_star %prec stmt_1 {Streams::verbose() <<"comma_test_star_seqJ : comma_test_star \n";}
					;
augassign:	PLUS_EQUAL {Streams::verbose() <<"augassign:	PLUS_EQUAL \n";}
			| MINUS_EQUAL {Streams::verbose() <<"augassign:	MINUS_EQUAL \n";}
			| STAR_EQUAL {Streams::verbose() <<"augassign:	STAR_EQUAL \n";}
			| DIV_EQUAL {Streams::verbose() <<"augassign:	DIV_EQUAL \n";}
			| MOD_EQUAL {Streams::verbose() <<"augassign:	MOD_EQUAL \n";}
			| AND_EQUAL {Streams::verbose() <<"augassign:	AND_EQUAL \n";}
			| OR_EQUAL {Streams::verbose() <<"augassign:	OR_EQUAL \n";}
			| SHAPOO_EQUAL {Streams::verbose() <<"augassign:	SHAPOO_EQUAL \n";}
			| LESS_THAN_2_EQUAL {Streams::verbose() <<"augassign:	LESS_THAN_2_EQUAL \n";}
			| MORE_THAN_2_EQUAL {Streams::verbose() <<"augassign:	MORE_THAN_2_EQUAL \n";}
			| STAR_2_EQUAL {Streams::verbose() <<"augassign:	STAR_2_EQUAL \n";}
			| DIV_2_EQUAL {Streams::verbose() <<"augassign:	DIV_2_EQUAL \n";}
			;

access:		 	PRIVATE 	{Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;}
				|PUBLIC		{pp=false;Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false;}
				|PROTECTED	{pro=true;Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";}
				;
print_stmt: PRINT exprlist {
							Streams::verbose() <<"print_stmt: PRINT exprlist \n";
							$<tn>$ = ast->createPrintNode($<tn>2, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						   }
del_stmt:   DEL exprlist {
							Streams::verbose() <<"del_stmt:   DEL exprlist \n";
							$<tn>$ = ast->createDelNode($<tn>2, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
			;

pass_stmt:	PASS {
					Streams::verbose() <<"pass_stmt:	PASS \n";
					$<tn>$ = ast->createPassNode(NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
				 }
			;

flow_stmt:	break_stmt {
						Streams::verbose() <<"flow_stmt:	break_stmt \n";
						$<tn>$ = $<tn>1;
					   }
			| continue_stmt {
								Streams::verbose() <<"flow_stmt: continue_stmt\n";
								$<tn>$ = $<tn>1;
							}
			| return_stmt {
							Streams::verbose() <<"flow_stmt: return_stmt\n";
							$<tn>$ = $<tn>1;
						  }
			;

break_stmt: BREAK {
					Streams::verbose() <<"break_stmt: BREAK \n";
					$<tn>$ = ast->createFlowStmtNode(NULL, NULL, breakNode, NULL,yylval.r.lineNum,yylval.r.colNum);
				  }
			;

continue_stmt:	CONTINUE {
							Streams::verbose() <<"continue_stmt:	CONTINUE \n";
							$<tn>$ = ast->createFlowStmtNode(NULL, NULL, continueNode, NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
				;

return_stmt:	RETURN testlist {
									Streams::verbose() <<"return_stmt:	RETURN testlist \n";
									$<tn>$ = ast->createFlowStmtNode($<tn>2, NULL, returnNode, NULL,yylval.r.lineNum,yylval.r.colNum);
								}
				|RETURN {
							Streams::verbose() <<"return_stmt:	RETURN \n";
							$<tn>$ = ast->createFlowStmtNode(NULL, NULL, returnNode, NULL,yylval.r.lineNum,yylval.r.colNum);
						}
				;


import_stmt: import_name {Streams::verbose() <<"import_stmt: import_name \n";}
			 ;

import_name: IMPORT dotted_as_names {Streams::verbose() <<"import_name: IMPORT dotted_as_names \n";
										inhertance_list.clear();}
			 ;

comma_dotted_as_name_seq: ',' dotted_as_name {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";}
						  |comma_dotted_as_name_seq ',' dotted_as_name {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";}

dotted_as_names: dotted_as_name {
									Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_names: dotted_as_name \n";
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								temp_id="";
					}
				 |dotted_as_name comma_dotted_as_name_seq {
															Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_name comma_dotted_as_name_seq \n";
						t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								temp_id="";
				 }
				 ;


dotted_as_name: dotted_name {Streams::verbose() <<"dotted_as_name: dotted_name \n";}
				|dotted_name AS NAME {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";}
				;

dotted_name: NAME {
					 Streams::verbose() <<"dotted_name: NAME \n";
					 temp_id=temp_id+$<r.strVal>1;
					 string sf=$<r.strVal>1;
					 cout<<sf;
					 lineNum=colNum=1;					 
					 sf.append(".txt");
					 if(find(parsedFile.begin(),parsedFile.end(),sf)==parsedFile.end())
						fileStack.push(sf);
					 while(!fileStack.empty()&&sourceFile!=fileStack.top()){
						 sf=fileStack.top();
						 sourceFile=sf;
						 ifstream inf(sf);
						 lexer->yyrestart(&inf);
						 Parser* p = new Parser();
						 p->parse();						 
						 lineNum=colNum=1;
						 parsedFile.push_back(sf);
						 if(fileStack.size()>0)
							fileStack.pop();
						 if(fileStack.size()==0)
							YYABORT;
					 }
				  }
			|NAME dotted_name_seq {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";}
			;
			
dotted_name_seq: '.' NAME {
							Streams::verbose() <<"dotted_name_seq: '.' NAME \n";
							temp_id=temp_id+"."+$<r.strVal>2;
						}
				 |dotted_name_seq '.' NAME {
												Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";
					temp_id=temp_id+"."+$<r.strVal>3;
				 }
				 ;
					
comma_name_seq :	',' NAME {
								Streams::verbose() <<"comma_name_seq :	',' NAME \n";
								$<var>$=p->addVariableToGlobalScope($<r.strVal>2, yylval.r.lineNum, yylval.r.colNum);
								v = $<var>$;
								$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							 }
					|comma_name_seq ',' NAME {
												Streams::verbose() <<"comma_name_seq :	comma_name_seq ',' NAME \n";
												$<var>$=p->addVariableToGlobalScope($<r.strVal>3, yylval.r.lineNum, yylval.r.colNum);
												v = $<var>$;
												Node* temp = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												Node* seq = $<tn>1;
												seq->Next = temp;
											 }
					;

global_stmt: GLOBAL NAME {
							Streams::verbose() <<"global_stmt: GLOBAL NAME \n";
							$<var>$=p->addVariableToGlobalScope($<r.strVal>2, yylval.r.lineNum, yylval.r.colNum);
							v = $<var>$;
							Node* temp = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
							$<tn>$ = ast->createGlobalNode(temp,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						 }
			 |GLOBAL NAME comma_name_seq {
											Streams::verbose() <<"global_stmt: GLOBAL NAME comma_name_seq\n";
											$<var>$=p->addVariableToGlobalScope($<r.strVal>2, yylval.r.lineNum, yylval.r.colNum);											
											v = $<var>$;
											Node* temp = ast->createIDNode(v,0,$<tn>3,yylval.r.lineNum,yylval.r.colNum);
											$<tn>$ = ast->createGlobalNode(temp,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
										 }
			 ;

nonlocal_stmt:	NONLOCAL NAME {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";}
				|NONLOCAL NAME comma_name_seq {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";}
				;

compound_stmt:  if_stmt {
							Streams::verbose() <<"compound_stmt:  if_stmt \n";
							$<tn>$=$<tn>1;
						}
				| while_stmt {Streams::verbose() <<"compound_stmt: while_stmt\n";}
				| for_stmt {
								Streams::verbose() <<"compound_stmt: for_stmt\n";
								$<tn>$=$<tn>1;
						   }
				| try_stmt {
								Streams::verbose() <<"compound_stmt: try_stmt\n";
								$<tn>$=$<tn>1;
						   }
				| with_stmt {Streams::verbose() <<"compound_stmt: with_stmt\n";}
				| funcdef  {	
								Streams::verbose() <<"compound_stmt: funcdef\n";
								$<tn>$=$<tn>1;
							}
				| DEF classdef {
									Streams::verbose() <<"compound_stmt: DEF classdef\n";
									$<tn>$=$<tn>2;
								}
				;
vardef :DEF NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF NAME\n";
											$<var>$=p->addVariableToCurrentScope($<r.strVal>2,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,0,0);
											v=$<var>$;
											v1=new Variable();
											v1=v;
										$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										visit_num++;
									} 
		| DEF access NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF access NAME\n";
											Streams::verbose()<<"var_declaration: access_modef ID\n";
									$<var>$=p->addVariableToCurrentScope($<r.strVal>3,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false,false);
									v=$<var>$;
									visit_num++;
									acc_mod="";
									v1=v;
									$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
											} 
		| DEF STATIC NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF STATIC NAME\n";
											Streams::verbose()<<"var_declaration: STATIC ID\n";
											$<var>$=p->addVariableToCurrentScope($<r.strVal>3,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
											v=$<var>$;
											v1=v;
											visit_num++;
											$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										} 
		| DEF FINAL NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF FINAL NAME\n";
												Streams::verbose()<<"var_declaration: FINAL ID\n";
												$<var>$=p->addVariableToCurrentScope($<r.strVal>3,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=$<var>$;
													v1=v;
													visit_num++;
													$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
										} 
		| DEF STATIC FINAL NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF STATIC FINAL NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													$<var>$=p->addVariableToCurrentScope($<r.strVal>4,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=$<var>$;
													visit_num++;
													v1=v;
													$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												} 
		| DEF FINAL STATIC NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF FINAL STATIC NAME\n";
													Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
													$<var>$=p->addVariableToCurrentScope($<r.strVal>4,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=$<var>$;
													v1=v;
													visit_num++;
													$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												} 
		| DEF STATIC access NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF STATIC access NAME\n";
													$<var>$=p->addVariableToCurrentScope($<r.strVal>4,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=$<var>$;
													acc_mod="";
													visit_num++;
													v1=v;
													$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												} 
		| DEF FINAL access NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF FINAL access NAME\n";
													$<var>$=p->addVariableToCurrentScope($<r.strVal>4,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=$<var>$;
													acc_mod="";
													v1=v;
													visit_num++;
													$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												} 
		| DEF STATIC FINAL access NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF STATIC FINAL access NAME\n";
															$<var>$=p->addVariableToCurrentScope($<r.strVal>5,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=$<var>$;
															acc_mod="";
															visit_num++;
															v1=v;
															$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
														} 
		| DEF FINAL STATIC access NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF FINAL STATIC access NAME\n";
															$<var>$=p->addVariableToCurrentScope($<r.strVal>5,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=$<var>$;
															acc_mod="";
															visit_num++;
															v1=v;
															$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
														} 
		| DEF access STATIC NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF access STATIC NAME\n";
													$<var>$=p->addVariableToCurrentScope($<r.strVal>4,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=$<var>$;
													visit_num++;
													acc_mod="";
													v1=v;
													$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
												} 
		| DEF access FINAL NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF access FINAL NAME\n";
													$<var>$=p->addVariableToCurrentScope($<r.strVal>4,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false,false);
													v=$<var>$;
													acc_mod="";
													visit_num++;
													v1=v;
													$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
											} 
		| DEF access STATIC FINAL NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF access STATIC FINAL NAME\n";
														$<var>$=p->addVariableToCurrentScope($<r.strVal>5,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=$<var>$;
														visit_num++;
														acc_mod="";
														v1=v;
														$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
													} 
		| DEF access FINAL STATIC NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF access FINAL STATIC NAME\n";
														$<var>$=p->addVariableToCurrentScope($<r.strVal>5,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=$<var>$;
														acc_mod="";
														visit_num++;
														v1=v;
														$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
													} 
		| DEF STATIC access FINAL NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF STATIC access FINAL NAME\n";
															$<var>$=p->addVariableToCurrentScope($<r.strVal>5,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
															v=$<var>$;
															acc_mod="";
															visit_num++;
															v1=v;
															$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
														} 
		| DEF FINAL access STATIC NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF FINAL access STATIC NAME\n";
														$<var>$=p->addVariableToCurrentScope($<r.strVal>5,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false,false);
														v=$<var>$;
														acc_mod="";
														visit_num++;
														v1=v;
														$<tn>$ = ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
													} 
				;
elif_seq :  ELIF test ':' suite {
									Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";
									$<tn>$ = ast->createElseIfNode($<tn>4,NULL,$<tn>2,NULL,yylval.r.lineNum,yylval.r.colNum);								
								}
			|elif_seq ELIF test ':' suite {
											Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";
											Node* elseIfNode = $<tn>1;
											elseIfNode->Next = ast->createElseIfNode($<tn>5,NULL,$<tn>3,NULL,yylval.r.lineNum,yylval.r.colNum);
											$<tn>$ = elseIfNode;											
										  }
			;
				
if_stmt:	IF test ':' suite {
								Streams::verbose() <<"if_stmt:	IF test ':' suite \n";
								$<tn>$ = ast->createIfNode($<tn>4,NULL,$<tn>2,NULL,yylval.r.lineNum,yylval.r.colNum);
							  }
			|IF test ':' suite elif_seq {
											Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";
											$<tn>$ = ast->createIfNode($<tn>4, $<tn>5, $<tn>2, NULL,yylval.r.lineNum,yylval.r.colNum);
										}
			|IF test ':' suite ELSE ':' suite {
												Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";
												Node* elseNode = ast->createElseNode($<tn>7,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
												$<tn>$ = ast->createIfNode($<tn>4,elseNode,$<tn>2,NULL,yylval.r.lineNum,yylval.r.colNum);
											  }
			|IF test ':' suite elif_seq ELSE ':' suite {
														Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq ELSE ':' suite \n";
														Node* elseIfNode = $<tn>5;
														Node* elseNode = ast->createElseNode($<tn>8,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
														elseIfNode->Next = elseNode;
														$<tn>$ = ast->createIfNode($<tn>4,elseIfNode,$<tn>2,NULL,yylval.r.lineNum,yylval.r.colNum);
													   }
			;

while_stmt: WHILE test ':' suite {
									Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";
									$<tn>$ = ast->createWhileNode($<tn>4,NULL,$<tn>2,NULL,yylval.r.lineNum,yylval.r.colNum);
								 }
			|WHILE test ':' suite ELSE ':' suite {
													Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";
													Node* whileNode= ast->createWhileNode($<tn>4,NULL,$<tn>2,NULL,yylval.r.lineNum,yylval.r.colNum);
													whileNode->Next = ast->createElseNode($<tn>7,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
													$<tn>$ = whileNode;
												 }
			;

for_stmt:   FOR exprlist IN testlist ':' suite {
												Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";
												$<tn>$ = ast->createForNode($<tn>6, NULL, $<tn>2, $<tn>4, NULL,yylval.r.lineNum,yylval.r.colNum);
											   }
			|FOR exprlist IN testlist ':' suite ELSE ':' suite {
																Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";
																Node* forNode = ast->createForNode($<tn>6, NULL, $<tn>2, $<tn>4, NULL,yylval.r.lineNum,yylval.r.colNum);
																forNode->Next = ast->createElseNode($<tn>9, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																$<tn>$ = forNode;															
															   }
			;

try_stmt:   TRY ':' suite try_except_cla_seq {
												Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";
												$<tn>$ = ast->createTryNode($<tn>3, $<tn>4, NULL,yylval.r.lineNum,yylval.r.colNum);
											 }
			|TRY ':' suite try_except_cla_seq ELSE ':' suite {
																Streams::verbose() <<" try_stmt: TRY ':' suite try_except_cla_seq ELSE ':' suite\n";
																Node* except = $<tn>4;
																while(except->Next!=NULL)
																	except = except->Next;
																except->Next = ast->createElseNode($<tn>7, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																$<tn>$ = ast->createTryNode($<tn>3, $<tn>4, NULL,yylval.r.lineNum,yylval.r.colNum);
															 }
			|TRY ':' suite try_except_cla_seq FINALLY ':' suite {
																	Streams::verbose() <<"try_stmt:  TRY ':' suite try_except_cla_seq FINALLY ':' suite\n";
																Node* except = $<tn>4;
																while(except->Next!=NULL)
																	except = except->Next;
																except->Next = ast->createFinallyNode($<tn>7, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
																$<tn>$ = ast->createTryNode($<tn>3, $<tn>4, NULL,yylval.r.lineNum,yylval.r.colNum);
																}
			|TRY ':' suite FINALLY ':' suite {
												Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";
												Node* finally = ast->createFinallyNode($<tn>6, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
												$<tn>$ = ast->createTryNode($<tn>3, finally, NULL,yylval.r.lineNum,yylval.r.colNum);
											 }
			;

try_except_cla_seq: except_clause ':' suite	{
												Streams::verbose() <<"try_except_cla_seq: except_clause ':' suite \n";
												Node* except = $<tn>1;
												except->Son = $<tn>3;
												$<tn>$ = except;
											}
					|try_except_cla_seq except_clause ':' suite {
																	Streams::verbose() <<"try_except_cla_seq: try_except_cla_seq except_clause ':' suite\n";
																	Node* except_a = $<tn>1;
																	Node* except_b = $<tn>2;
																	while(except_a->Next!=NULL)
																		except_a = except_a->Next;
																	except_a->Next = except_b;
																	except_b->Son = $<tn>4;
																	$<tn>$ = $<tn>1;
																}
					;

with_seq:	',' with_item {Streams::verbose() <<"with_seq:	',' with_item \n";}
			|with_seq ',' with_item {Streams::verbose() <<"with_seq: with_seq ',' with_item\n";}
			;
			
with_stmt:  WITH with_item ':' suite {Streams::verbose() <<"with_stmt:  WITH with_item ':' suite \n";}
			|WITH with_item with_seq ':' suite {Streams::verbose() <<"with_stmt: WITH with_item with_seq ':' suite\n";}
			;

with_item:  test {Streams::verbose() <<" with_item:  test\n";}
			|test AS expr {Streams::verbose() <<"with_item: test AS expr\n";}
			;

except_clause:  EXCEPT {
						Streams::verbose() <<"except_clause:  EXCEPT \n";
						$<tn>$ = ast->createExceptNode(NULL, NULL, NULL, NULL,yylval.r.lineNum,yylval.r.colNum);
					   }
				|EXCEPT test {
								Streams::verbose() <<"except_clause:  EXCEPT test\n";
								$<tn>$ = ast->createExceptNode(NULL, NULL, $<tn>2, NULL,yylval.r.lineNum,yylval.r.colNum);
							 }
				|EXCEPT test AS NAME {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";}
				;

list_stmt: stmt {	
						$<tn>$=$<tn>1;	Streams:: verbose() <<"list_stmt : stmt\n";
				}
			|list_stmt stmt {
								Streams:: verbose() <<"list_stmt : stmt list_stmt\n";
								Node* node = $<tn>1;
								if(node->Next!=NULL){
									while(node->Next != NULL)
										node = node->Next;
									ast->addNext(node,$<tn>2);
								}else
									ast->addNext($<tn>1,$<tn>2);
								$<tn>$=$<tn>1;	
							}
			;

suite:	list_stmt END {
							Streams::verbose() <<"suite:	list_stmt END\n";
							$<tn>$=$<tn>1;	
						}
		|END {	$<tn>$=NULL;	Streams::verbose() <<"suite:	END\n"; $<tn>$=NULL;}
		;

test:	or_test {Streams::verbose() <<"test:	or_test\n";$<tn>$=$<tn>1;}
		|or_test IF or_test ELSE test {Streams::verbose() <<"or_test IF or_test ELSE test\n";}
		;

or_seq:	OR and_test {Streams::verbose() <<"or_seq:	OR and_test \n";}
		|or_seq OR and_test {Streams::verbose() <<"or_seq: or_seq OR and_test \n";}
		;

or_test: and_test {Streams::verbose() <<"or_test:	and_test\n";$<tn>$=$<tn>1;}
		|and_test or_seq {Streams::verbose() <<"or_test:	and_test or_seq\n";}
		;

and_seq: AND not_test {Streams::verbose() <<"and_seq: AND not_test \n";}
		|and_seq AND not_test {Streams::verbose() <<"and_seq: and_seq AND not_test \n";}
		;

and_test: not_test {Streams::verbose() <<"and_test:	not_test\n";$<tn>$=$<tn>1;}
		  |not_test and_seq {Streams::verbose() <<"and_test: not_test and_seq \n";}
		  ;

not_test:	NOT not_test {Streams::verbose() <<"not_test:	NOT not_test\n";}
			| comparison {Streams::verbose() <<"not_test:	comparison\n";$<tn>$=$<tn>1;}
			;

comp_op_seq: comp_op expr %prec stmt_7 {
											Streams::verbose() <<"comp_op_seq: comp_op expr \n";
											$<tn>$=$<tn>2;
										}
			 |comp_op_seq comp_op expr {
											Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";
											$<tn>$=ast->createExprNode($<tn>1,$<tn>2,NULL,comp_op,yylval.r.lineNum,yylval.r.colNum);	
										}
			 ;
				
comparison: expr %prec stmt_2 {Streams::verbose() <<"comparison: expr\n";$<tn>$=$<tn>1;}
			|expr comp_op_seq %prec stmt_12 {
					Streams::verbose() <<"comparison: expr comp_op_seq\n";$<tn>$=$<tn>1;
						$<tn>$=ast->createExprNode($<tn>1,$<tn>2,NULL,comp_op,yylval.r.lineNum,yylval.r.colNum);
				}
			;

comp_op: '<' {	
				Streams::verbose() <<"comp_op: '<' \n";
				comp_op=LESS;
			}
		|'>'{Streams::verbose() <<"comp_op: '>' \n";comp_op=GREATHER;}
		|EQUAL {Streams::verbose() <<"comp_op: EQUAL \n";comp_op=EQUALS;}
		|MORE_OR_EQUAL {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";comp_op=EQUALGREATHER;}
		|LESS_OR_EQUAL {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";comp_op=EQUALLESS;}
		|MORE_LESS {Streams::verbose() <<"comp_op: MORE_LESS \n";}
		|NOT_EQUAL {Streams::verbose() <<"comp_op: NOT_EQUAL \n";comp_op=NOTEQUAL;}
		|IN {Streams::verbose() <<"comp_op: IN \n";}
		|NOT IN {Streams::verbose() <<"comp_op: NOT IN \n";}
		|IS {Streams::verbose() <<"comp_op: IS \n";}
		|IS NOT {Streams::verbose() <<"comp_op: IS NOT \n";}
		;

star_expr: '*' expr {Streams::verbose() <<"star_expr: '*' expr \n";}
			;

or_xor_expr_seq: '|' xor_expr {Streams::verbose() <<"or_xor_expr_seq: '|' xor_expr \n";}
				  |or_xor_expr_seq '|' xor_expr {Streams::verbose() <<"or_xor_expr_seq: or_xor_expr_seq '|' xor_expr\n";}
				  ;
expr: xor_expr {
					Streams::verbose() <<"expr: xor_expr\n";
					$<tn>$=$<tn>1;
				}
		|xor_expr or_xor_expr_seq {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";}
		;

sha_and_expr_seq: '^' and_expr {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";}
				  |sha_and_expr_seq '^' and_expr {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";}
				  ;

xor_expr: and_expr {Streams::verbose() <<"xor_expr: and_expr\n";$<tn>$=$<tn>1;} 
		  |and_expr sha_and_expr_seq {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";}
		  ;

and_shift_expr_seq: '&' shift_expr {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";}
					|and_shift_expr_seq '&' shift_expr {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";}
					;

and_expr: shift_expr {Streams::verbose() <<"and_expr: shift_expr\n";$<tn>$=$<tn>1;} 
		  |shift_expr and_shift_expr_seq {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";}
		  ;

arith_seq:	LESS_THAN_2 arith_expr {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";}
			|MORE_THAN_2 arith_expr {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";}
			|arith_seq LESS_THAN_2 arith_expr  {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";}
			|arith_seq MORE_THAN_2 arith_expr {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";}
			;

shift_expr: arith_expr {
							Streams::verbose() <<"shift_expr: arith_expr\n";
							$<tn>$=$<tn>1;
						} 
			|arith_expr arith_seq {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n";} 
			;

term_seq : '+' term {Streams::verbose() <<"term_seq : '+' term \n";
						op=PLUS;
						cout<<"op1= "<<op<<endl;
						$<operands>$=op;
						cout<<"op = "<<$<operands>$<<endl;
						$<tn>$=$<tn>2;
						}
			|'-' term {Streams::verbose() <<"term_seq : '-' term \n";
			/**
							op=MINUS;
							cout<<"amer = "<<op<<endl;
							$<operands>$=op;
							$<tn>$=$<tn>2;**/
							int* xx = new int (0);
						k = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						//k=ast->addNext(k,$<tn>2);
						$<tn>$ = ast->createExprNode(k,$<tn>2,MINUS,yylval.r.lineNum,yylval.r.colNum);
						}
			|term_seq '+' term {Streams::verbose() <<"term_seq : term_seq '+' term \n";//op=PLUS;
									k=ast->addNext($<tn>1,$<tn>3);
									$<operands>$=PLUS;
									//op=$<operands>$;
									$<tn>$ = ast->createExprNode($<tn>1,$<tn>3,NULL,PLUS,yylval.r.lineNum,yylval.r.colNum);
								}
			|term_seq '-' term {Streams::verbose() <<"term_seq : term_seq '-' term \n";//op=MINUS;
									k=ast->addNext($<tn>1,$<tn>3);
									$<operands>$=MINUS;
									//op=$<operands>$;
									$<tn>$ = ast->createExprNode($<tn>1,$<tn>3,NULL,MINUS,yylval.r.lineNum,yylval.r.colNum);
								}
			;

arith_expr: term %prec stmt_3 {Streams::verbose() <<"arith_expr: term\n";
								$<tn>$=$<tn>1;
									$<operands>$=$<operands>1;
							} 
			|term term_seq %prec stmt_13 {
											Streams::verbose() <<"arith_expr: term term_seq\n";
											k=ast->addNext($<tn>1,$<tn>2);
											//cout<<"the value of op is "<<op<<endl;
											$<tn>$ = ast->createExprNode($<tn>1,$<tn>2,NULL,PLUS/**op**/,yylval.r.lineNum,yylval.r.colNum);
											
										}
											 
			;

factor_seq: '*' factor {Streams::verbose() <<"factor_seq: '*' factor \n";
							$<operands>$=MULT;
							op=$<operands>$;
							$<tn>$=$<tn>2;
						}
			|'/' factor {Streams::verbose() <<"factor_seq: '/' factor \n";
								$<operands>$=DIV;
								op=$<operands>$;
							$<tn>$=$<tn>2;
							}
			|'%' factor {Streams::verbose() <<"factor_seq: '%' factor \n";
								$<operands>$=MOD;
								op=$<operands>$;
							$<tn>$=$<tn>2;
							}
			|DIV_2 factor %prec stmt_8 {Streams::verbose() <<"factor_seq: DIV_2 factor \n";}
			|factor_seq '*' factor {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";
									k=ast->addNext($<tn>1,$<tn>3);
									op=MULT;
									$<tn>$ = ast->createExprNode($<tn>1,$<tn>3,NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
			|factor_seq '/' factor {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";
									k=ast->addNext($<tn>1,$<tn>3);
									op=DIV;
									$<tn>$ = ast->createExprNode($<tn>1,$<tn>3,NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
			|factor_seq '%' factor {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";
									op=MOD;
									$<tn>$ = ast->createExprNode($<tn>1,$<tn>3,NULL,op,yylval.r.lineNum,yylval.r.colNum);
									}
			|factor_seq DIV_2 factor {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";}
			;

term: 	factor %prec stmt_4 {Streams::verbose() <<"term: 	factor\n";$<tn>$=$<tn>1;} 
		|factor factor_seq {Streams::verbose() <<"term: 	factor factor_seq\n";
								k=ast->addNext($<tn>1,$<tn>2);
								$<tn>$ = ast->createExprNode($<tn>1,$<tn>2,NULL,PLUS,yylval.r.lineNum,yylval.r.colNum);
							} 
		;

factor: '+' factor {Streams::verbose() <<"factor: '+' factor \n";
						$<tn>$=$<tn>2;
						
					}
		|'-' factor {Streams::verbose() <<"factor: '-' factor \n";
						int* xx = new int (0);
						k = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						//k=ast->addNext(k,$<tn>2);
						$<tn>$ = ast->createExprNode(k,$<tn>2,NULL,MINUS,yylval.r.lineNum,yylval.r.colNum);
						
						}
		|'~' factor {Streams::verbose() <<"factor: '~' factor \n";}
		| power {
					visit_num++;
					Streams::verbose() <<"factor: power\n";
					exist=false;
					if(visit_num==1)
					{
						//$<var>$=p->checkVariable(const_cast<char *>(temp_id2.back().c_str()),t, yylval.r.lineNum, yylval.r.colNum,true,is_list,is_dic);
						$<var>$=p->checkVariable(const_cast<char *>(temp_id2.back().c_str()),t,exist, yylval.r.lineNum, yylval.r.colNum,true,false,is_dic);
						v=$<var>$;
						v1=v;
						if((!exist)&&(v!=NULL))
						{
							//cout<<"hellow world  "<<v->get_name()<<endl;
							lastNode=ast->createIDNode(v,0,0,yylval.r.lineNum,yylval.r.colNum);
									
							$<tn>$=ast->createCallVarNode(temp_id2.back(),v,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);	
						}
						else
						{
							$<tn>$=$<tn>1;
						} 
					}
					else if((!constant)&&(!is_list))
					{
						if(v1)
						{
							v1->init=true;
						}
						$<var>$=p->checkVariable(const_cast<char *>(temp_id2.back().c_str()),t,exist, yylval.r.lineNum, yylval.r.colNum,false,is_list,is_dic);
						v=$<var>$;
						is_list=false;
						if(v!=NULL)
						{
							$<tn>$=ast->createCallVarNode(temp_id2.back(),v,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);	
						}
						else
						{
							$<tn>$=$<tn>1;
						}
					}
					else
					{
						if(v1)
						{
							v1->init=true;
						}
						$<tn>$=$<tn>1;
					}
						
				} 
		;

trailer_seq: trailer %prec stmt_6  {Streams::verbose() <<"trailer_seq: trailer \n";
										$<tn>$=$<tn>1;
									}
			 |trailer_seq trailer {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";
										$<tn>$=ast->addNext($<tn>1,$<tn>2);
									}
			 ;
			
power:	atom %prec stmt_5 {Streams::verbose() <<"power:	atom\n";
							//$<tn>$=ast->createCallVarNode(temp_id2.back(),NULL,NULL,NULL);
							$<tn>$=$<tn>1;
							
							} 
		|atom trailer_seq %prec stmt_5 {Streams::verbose() <<"power: atom trailer_seq \n";
											cout<<"the top is "<<temp_id2.back()<<endl;
											$<tn>$=ast->addNext($<tn>1,$<tn>2);
											dotvec.insert(dotvec.begin(),$<tn>1);
											$<tn>$=ast->createDotNode(dotvec,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
											dotvec.clear();
										}
		|atom trailer_seq STAR_2 factor {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";}
		|atom STAR_2 factor {Streams::verbose() <<"power: atom STAR_2 factor \n";}
		;

str_seq:	STRING %prec stmt_10 {Streams::verbose() <<"str_seq:	STRING \n";}
			|str_seq STRING {Streams::verbose() <<"str_seq:	str_seq STRING \n";}
			;

atom:	'(' ')' {Streams::verbose() <<"atom:	'(' ')' \n";}
		|'(' testlist_comp ')'  {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";$<tn>$=$<tn>2;arrayvec.clear();}
		|'[' ']' {Streams::verbose() <<"atom:	'[' ']' \n";
						arrayvec.clear();
						array_right=true;
						is_list=true;
						$<tn>$=ast->createArrayNode(arrayvec,0,0,yylval.r.lineNum,yylval.r.colNum);
				}
		|'{' '}' {Streams::verbose() <<"atom: '{' '}' \n";}
		|'[' testlist_comp ']' {Streams::verbose() <<"atom: '{' '}' \n";
									$<tn>$=ast->createArrayNode(arrayvec,0,0,yylval.r.lineNum,yylval.r.colNum);
									array_right=true;
									arrayvec.clear();
									}
		|'{' dictorsetmaker '}'		{Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";}
		| NAME { Streams::verbose() <<"atom: NAME\n";
									temp_id2.push_back($<r.strVal>1);
									$<tn>$=ast->createCallVarNode($<r.strVal>1,NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
					} 
		| NAME '(' ')' %prec stmt_13{ Streams::verbose() <<"atom: NAME\n";
									temp_id2.push_back($<r.strVal>1);
									parameters.clear();
									$<tn>$=ast->createCallTypeNode($<r.strVal>1,parameters,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									} 
		| NAME '(' arglist ')' { Streams::verbose() <<"atom: NAME\n";
									temp_id2.push_back($<r.strVal>1);
									$<tn>$=ast->createCallTypeNode($<r.strVal>1,parameters/*$<tn>3*/,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									parameters.clear();
												} 
		| NAME '[' subscriptlist ']' {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";
											$<var>$=p->checkVariable($<r.strVal>1,t,exist, yylval.r.lineNum, yylval.r.colNum,false,true,is_dic);
											is_list=true;
											if($<var>$)
												$<tn>$=ast->createArrayElementNode($<var>$,$<tn>3,NULL,NULL,yylval.r.lineNum,yylval.r.colNum,$<r.strVal>1);
												} 
		| NUMBER_INT {Streams::verbose() <<"atom: NUMBER_INT "<<$<r.intVal>1<<endl;;
						int* xx = new int ($<r.intVal>1);
						//cout<<"yhe number is"<<*xx<<endl;
						//cout<<"reference"<<xx<<endl;
						constant=true;
						$<tn>$ = ast->createTypeNode((void*)xx,0,0,yylval.r.lineNum,yylval.r.colNum,INT);
						visit_num++;
														} 
		| NUMBER_FLOAT {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							constant=true;
							float* x=new float($<r.floatVal>1);
							$<tn>$ = ast->createTypeNode((void*)x,0,0,yylval.r.lineNum,yylval.r.colNum,FLOAT);
						} 
		| NUMBER_LONG {Streams::verbose() <<"atom: NUMBER_FLOAT\n";
							long *xxx=new long($<r.longVal>1);
							constant=true;
							$<tn>$ = ast->createTypeNode(&xxx,0,0,yylval.r.lineNum,yylval.r.colNum,LONG);
						} 
		| CHAR_VALUE {Streams::verbose() <<"atom: CHAR_VALUE\n";} 
		| str_seq %prec stmt_11 {Streams::verbose() <<"atom: str_seq\n";
									
									$<tn>$ = ast->createTypeNode($<r.strVal>1,0,0,yylval.r.lineNum,yylval.r.colNum,STRINGS);
								} 
		| DOT_3 {Streams::verbose() <<"atom: DOT_3\n";} 
		| NONE {Streams::verbose() <<"atom: NONE\n";} 
		| TRUE {Streams::verbose() <<"atom: TRUE\n";
					$<tn>$ = ast->createTypeNode($<r.strVal>1,0,0,yylval.r.lineNum,yylval.r.colNum,True);
				} 
		| FALSE {Streams::verbose() <<"atom: FALSE\n";
					$<tn>$ = ast->createTypeNode($<r.strVal>1,0,0,yylval.r.lineNum,yylval.r.colNum,False);
				} 
		;

comma_test_star_seq: ',' test  {Streams::verbose() <<"comma_test_star_seq: ',' test\n";
							arrayvec.push_back($<tn>2);
							
							} 
					 |',' star_expr {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n";} 
					 |comma_test_star_seq ',' test {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n";
														arrayvec.push_back($<tn>3);
													} 
					 |comma_test_star_seq ',' star_expr {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n";} 
					 ;

testlist_comp: test comp_for {Streams::verbose() <<"testlist_comp: test comp_for\n";} 
			   |test   {Streams::verbose() <<"testlist_comp: test\n"; $<tn>$=$<tn>1;
								arrayvec.push_back($<tn>1);
							} 
			   |test   comma_test_star_seq  {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n";
												$<tn>$=ast->addNext($<tn>1,$<tn>2);
												arrayvec.insert(arrayvec.begin(),$<tn>1);
											} 
			   |test    ',' {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";} 
			   |test   comma_test_star_seq ',' {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";
													arrayvec.insert(arrayvec.begin(),$<tn>1);
												} 
			   |star_expr comp_for {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";} 
			   |star_expr   {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";} 
			   |star_expr   comma_test_star_seq   {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";} 
			   |star_expr    ',' {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";} 
			   |star_expr   comma_test_star_seq ','	{Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n";} 
			   ;

trailer:	'.' NAME  %prec stmt_14{Streams::verbose() <<"trailer:	'.' NAME\n";
							temp_id=temp_id2.back();
							temp_id=temp_id+"."+$<r.strVal>2;
						temp_id2.pop_back();
						temp_id2.push_back(temp_id);	
						$<tn>$=ast->createCallVarNode($<r.strVal>2,NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
						dotvec.push_back($<tn>$);
						} 
			|'.' NAME '(' ')' {
									$<tn>$=ast->createCallFunctionNode($<r.strVal>2,NULL,NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									dotvec.push_back($<tn>$);
								}
			|'.' NAME '(' arglist ')' {
									$<tn>$=ast->createCallFunctionNode($<r.strVal>2,$<tn>4,NULL,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
									dotvec.push_back($<tn>$);
								}
			|'.' NAME '[' subscriptlist ']' {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n";
												$<tn>$=ast->createArrayElementNode(NULL,$<tn>4,NULL,NULL,yylval.r.lineNum,yylval.r.colNum);
												dotvec.push_back($<tn>$);
											} ;

			;

comma_subscript_seq: ',' subscript {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n";} 
					 |comma_subscript_seq ',' subscript {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n";} 
					 ;

subscriptlist:	subscript {Streams::verbose() <<"subscriptlist:	subscript\n";} 
				|subscript comma_subscript_seq {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n";} 
				|subscript  ',' {Streams::verbose() <<"subscriptlist:	subscript  ','\n";} 
				|subscript comma_subscript_seq ',' {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n";} 
				;

subscript:  test {Streams::verbose() <<"subscript:  test\n";$<tn>$=$<tn>1;}
			|':' {Streams::verbose() <<"subscript:  ':'\n";}
			| test ':' {Streams::verbose() <<"subscript: test ':'\n";$<tn>$=$<tn>$=$<tn>1;}
			| test ':' test {Streams::verbose() <<"subscript:  test ':' test\n";}
			| test ':' sliceop {Streams::verbose() <<"subscript:  test ':' sliceop\n";}
			| test ':' test sliceop {Streams::verbose() <<"subscript:  test ':' test sliceop\n";}
			|':' test {Streams::verbose() <<"subscript:  ':' test\n";}
			|':' sliceop {Streams::verbose() <<"subscript:  ':' sliceop\n";}
			|':' test sliceop {Streams::verbose() <<"subscript:  ':' test sliceop\n";}
			;

sliceop: ':' {Streams::verbose() <<"sliceop: ':'\n";}
		 |':' test {Streams::verbose() <<"sliceop: ':' test\n";}
		 ;

comma_expr_star_seq : 	',' expr {Streams::verbose() <<"comma_expr_star_seq : 	',' expr \n";}
						|',' star_expr {Streams::verbose() <<"comma_expr_star_seq : 	',' star_expr \n";}
						|comma_expr_star_seq ',' expr {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' expr \n";}
						|comma_expr_star_seq ',' star_expr  {Streams::verbose() <<"comma_expr_star_seq : 	comma_expr_star_seq ',' star_expr \n";}
						;
		
exprlist: 	expr {Streams::verbose() <<"exprlist: 	expr \n";}
			|expr comma_expr_star_seq {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq \n";}
			|star_expr {Streams::verbose() <<"exprlist: 	star_expr \n";}
			|star_expr comma_expr_star_seq {Streams::verbose() <<"exprlist: 	star_expr comma_expr_star_seq \n";}
			|expr ',' {Streams::verbose() <<"exprlist: 	expr ',' \n";}
			|expr comma_expr_star_seq ',' {Streams::verbose() <<"exprlist: 	expr comma_expr_star_seq ',' \n";}
			|star_expr ',' {Streams::verbose() <<"exprlist: 	star_expr ',' \n";}
			|star_expr  comma_expr_star_seq ',' {Streams::verbose() <<"exprlist: 	star_expr  comma_expr_star_seq ',' \n";}
			;

comma_test: ',' test {Streams::verbose() <<"comma_test: ',' test \n";}
			|',' test comma_test {Streams::verbose() <<"',' test comma_test \n";}
			;
			
testlist:	test {Streams::verbose() <<"testlist:	test \n";}
			|test comma_test {Streams::verbose() <<"testlist:	test comma_test \n";}
			|test ',' {Streams::verbose() <<"testlist:	 test ','\n";}
			|test comma_test ',' {Streams::verbose() <<"testlist:	 test comma_test ','\n";}
			;
						
comma_test_colon_test_seq:  ',' test ':' test %prec stmt_9  {Streams::verbose() <<"comma_test_colon_test_seq:  ',' test ':' test \n";}
							|comma_test_colon_test_seq ',' test ':' test {Streams::verbose() <<"comma_test_colon_test_seq: comma_test_colon_test_seq ',' test ':' test\n";}
							;
comma_test_seq: ',' test  {Streams::verbose() <<"comma_test_seq: ',' test \n";}
				|comma_test_seq ',' test {Streams::verbose() <<"comma_test_seq: comma_test_seq ',' test \n";}
				;

dictorsetmaker: test ':' test comp_for  {Streams::verbose() <<"dictorsetmaker: test ':' test comp_for \n";}
				|test ':' test  {Streams::verbose() <<"dictorsetmaker: test ':' test \n";}
				|test ':' test ','	{Streams::verbose() <<"dictorsetmaker: test ':' test ',' \n";}
				|test ':' test comma_test_colon_test_seq  {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq \n";}
				|test ':' test comma_test_colon_test_seq ','  {Streams::verbose() <<"dictorsetmaker: test ':' test comma_test_colon_test_seq ','\n";}
				|test comp_for {Streams::verbose() <<"dictorsetmaker: test comp_for\n";}
				|test {Streams::verbose() <<"dictorsetmaker: test\n";}
				|test ',' {Streams::verbose() <<"dictorsetmaker: test ','\n";}
				|test comma_test_seq {Streams::verbose() <<"dictorsetmaker: test ','\n";}
				|test comma_test_seq ',' {Streams::verbose() <<"dictorsetmaker: test comma_test_seq ','\n";}
				;
classdef: classheader suite {
								Streams::verbose() <<"classdef: classheader suite\n";
								$<type>$=p->finishTypeDeclaration(t);
								$<tn>$=ast->createClassNode($<type>1,$<tn>2,NULL,yylval.r.lineNum,yylval.r.colNum);
							}

classheader: CLASS NAME ':'  {
								Streams::verbose() << "class_h: CLASS ID \n";
								colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>2,inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;

								inhertance_list.clear();
					}
		  |access CLASS NAME ':'  {
									Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		  |STATIC CLASS NAME ':'  {
									Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		  |FINAL CLASS NAME ':'  {
									Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		  |STATIC FINAL CLASS  NAME ':'  {
											Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		  |FINAL STATIC CLASS NAME ':'  	{
												Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		  |FINAL access CLASS NAME ':'  {
											Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		  |STATIC access CLASS NAME ':'  {
											Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		  |STATIC FINAL access CLASS NAME ':'  {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		  |FINAL STATIC access CLASS NAME ':'  {
													Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		  |access STATIC CLASS NAME ':'  {
											Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		  |access FINAL CLASS NAME ':'  {
											Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
							$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		  |access STATIC FINAL CLASS NAME ':'  {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
							$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		  |access FINAL STATIC CLASS NAME ':'  {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
							$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		  |STATIC access FINAL CLASS NAME ':'  {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
							$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		  |FINAL access STATIC CLASS NAME ':'  {
													Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
							$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		  |CLASS NAME '(' ')' ':'  {
										Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>2,inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
									t=$<type>$;
									inhertance_list.clear();
									temp_id="";
									acc_mod="";
								}     
		  |access CLASS NAME '(' ')' ':'  {
											Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}              
		  |STATIC CLASS NAME '(' ')' ':'  {
											Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}        
		  |FINAL CLASS NAME '(' ')' ':'  {
											Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								} 
		  |STATIC FINAL CLASS NAME '(' ')' ':'  {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}
		  |FINAL STATIC CLASS NAME '(' ')' ':'  {
													Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}
		  |STATIC access CLASS NAME '(' ')' ':'   {
													Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
								$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}
		  |FINAL access CLASS NAME '(' ')' ':'  {
													Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}
		  |STATIC FINAL access CLASS NAME '(' ')' ':'   {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								} 
		  |FINAL STATIC access CLASS NAME '(' ')' ':'   {
															Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								} 
		  |access STATIC CLASS NAME '(' ')' ':' {
													Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
								$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}
		  |access FINAL  CLASS NAME '(' ')' ':'   {
													Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								} 
		  |access STATIC FINAL  CLASS NAME '(' ')' ':'   {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								} 
		  |access FINAL STATIC  CLASS NAME '(' ')' ':'  {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								} 
		  |STATIC access FINAL  CLASS NAME '(' ')' ':'   {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								} 
		  |FINAL access STATIC  CLASS NAME '(' ')' ':'   {
															Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								} 
		  |CLASS NAME '(' dotted_as_names ')' ':'  {
														Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
												$<type>$=p->createType($<r.strVal>2,inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
												acc_mod="";
											} //class X (A,B,T) OR class X(A)
		  |access CLASS NAME '(' dotted_as_names ')' ':'   {
																Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		  |STATIC CLASS NAME '(' dotted_as_names ')' ':'  {
															Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		  |FINAL CLASS NAME '(' dotted_as_names ')' ':'  {
															Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		  |STATIC FINAL CLASS NAME '(' dotted_as_names ')' ':' {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		  |FINAL STATIC CLASS NAME '(' dotted_as_names ')' ':' {
																	Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		  |STATIC access CLASS NAME '(' dotted_as_names ')' ':'   {
																		Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													acc_mod="";
													inhertance_list.clear();
											} //class X (A,B,T) OR class X(A)
		  |FINAL access CLASS NAME '(' dotted_as_names ')' ':'   {
																	Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													acc_mod="";
													inhertance_list.clear();
											} //class X (A,B,T) OR class X(A)
		  |STATIC FINAL access CLASS NAME '(' dotted_as_names ')' ':'   {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													acc_mod="";
													inhertance_list.clear();
											} //class X (A,B,T) OR class X(A)
		  |FINAL STATIC access CLASS NAME '(' dotted_as_names ')' ':'   {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													acc_mod="";
													inhertance_list.clear();
											} //class X (A,B,T) OR class X(A)
		  |access STATIC CLASS NAME '(' dotted_as_names ')' ':'  {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
		  |access FINAL CLASS NAME '(' dotted_as_names ')' ':'  {Streams::verbose() <<"classheader: CLASS NAME '(' arglist ')' ':' \n";}
		  |access STATIC FINAL CLASS NAME '(' dotted_as_names ')' ':'   {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													acc_mod="";
													inhertance_list.clear();
											} //class X (A,B,T) OR class X(A)
		  |access FINAL STATIC CLASS NAME '(' dotted_as_names ')' ':'   {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													acc_mod="";
													inhertance_list.clear();
											} //class X (A,B,T) OR class X(A)
		  |STATIC access FINAL CLASS NAME '(' dotted_as_names ')' ':'  {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													acc_mod="";
													inhertance_list.clear();
											} //class X (A,B,T) OR class X(A)
		  |FINAL access STATIC CLASS NAME '(' dotted_as_names ')' ':'  {
																			Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S dotted_as_names CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													acc_mod="";
													inhertance_list.clear();
											} //class X (A,B,T) OR class X(A)
		  
		  ;

arg_comma_seq : argument ',' {Streams::verbose() <<"arg_comma_seq : argument ','\n";$<tn>$=$<tn>1;}
				|arg_comma_seq argument ',' {Streams::verbose() <<"arg_comma_seq : argument ',' arg_comma_seq\n";
													$<tn>$=ast->addNext($<tn>1,$<tn>2);
											}
				;

comma_arg_seq:	',' argument {Streams::verbose() <<"comma_arg_seq:	',' argument\n";$<tn>$=$<tn>1;}
				|comma_arg_seq ',' argument  {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";
													$<tn>$=ast->addNext($<tn>1,$<tn>2);
												}
				;

arglist: argument {Streams::verbose() <<"arglist: argument\n";$<tn>$=$<tn>1;}
		 |default_arg {Streams::verbose() <<"arglist: default_arg\n";$<tn>$=$<tn>1;}
		
		 |argument ',' {Streams::verbose() <<"arglist: argument ','\n";$<tn>$=$<tn>1;}
        
		 |'*' test {    
						std::string tempstr($<r.strVal>2);
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
						Streams::verbose() <<"arglist: '*' test\n";
				   }
		
		 |'*' test ',' STAR_2 test {
										std::string tempstr($<r.strVal>2);
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										std::string tempstr1($<r.strVal>5);
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
										
										Streams::verbose() <<"arglist: '*' test ',' STAR_2 test\n";
									}
		
		 |'*' test comma_arg_seq {
		 					   		    std::string tempstr($<r.strVal>2);
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									    
										Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
								 }
		
		 |'*' test comma_default_arg_seq {
										std::string tempstr($<r.strVal>2);
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);

											Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
										 }
		
		 |'*' test comma_arg_seq comma_default_arg_seq {
		 										std::string tempstr($<r.strVal>2);
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
															Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";
													   }
		
		 |'*' test comma_arg_seq ',' STAR_2 test  {
													std::string tempstr($<r.strVal>2);
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
										std::string tempstr1($<r.strVal>6);
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
													strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);Streams::verbose() <<"arglist: '*' test comma_arg_seq ',' STAR_2 test\n";
												  }
        
		 |STAR_2 test {
						std::string tempstr($<r.strVal>2);
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);Streams::verbose() <<"arglist: STAR_2 test\n";
					  }
		
		 |arg_comma_seq argument {Streams::verbose() <<"arglist: arg_comma_seq argument\n";
												$<tn>$=ast->addNext($<tn>1,$<tn>2);
								}
		 |arg_comma_seq default_arg {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";}
		 |arg_comma_seq default_arg_comma_seq default_arg {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";}
		 |arg_comma_seq argument ',' {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";}
        
		 |arg_comma_seq '*' test  {		
									std::string tempstr($<r.strVal>3);
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									Streams::verbose() <<"arglist: arg_comma_seq '*' test\n";
								  }
		
		 |arg_comma_seq '*' test ',' STAR_2 test {
											std::string tempstr($<r.strVal>3);
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
										std::string tempstr1($<r.strVal>6);
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
													Streams::verbose() <<"arglist: arg_comma_seq '*' test ',' STAR_2 test\n";
												 }
		
		 |arg_comma_seq '*' test comma_arg_seq {
												std::string tempstr($<r.strVal>3);
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
												Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq\n";
											   }
		
		 |arg_comma_seq '*' test comma_default_arg_seq {
														std::string tempstr($<r.strVal>3);
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
														Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_default_arg_seq\n";
													   }
		
		 |arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq {
																		std::string tempstr($<r.strVal>3);
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
																		Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq\n";
																	 }
		
		 |arg_comma_seq '*' test comma_arg_seq ',' STAR_2 test {
																std::string tempstr($<r.strVal>3);
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										
										std::string tempstr1($<r.strVal>7);
										std::string erro1("**" + tempstr1);
										char *cstr1 = new char[erro1.length() + 1];
										strcpy(cstr1, erro1.c_str()); parameters.push_back(cstr1);
																Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq ',' STAR_2 test\n";
															   }
        
		 |arg_comma_seq STAR_2 test {	std::string tempstr($<r.strVal>3);
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
										Streams::verbose() <<"arglist: arg_comma_seq STAR_2 test\n";
								    }
		
		 ;
		
 
comma_default_arg_seq: ',' default_arg {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";}
					   |comma_default_arg_seq ',' default_arg {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";}
					   ;

default_arg_comma_seq: default_arg ',' {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";}
					   |default_arg_comma_seq default_arg ',' {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";}
					   ;

default_arg: test '=' test {parameters.push_back($<r.strVal>1);Streams::verbose() <<"default_arg: test '=' test\n";}

argument: 	test {parameters.push_back($<r.strVal>1); Streams::verbose() <<"argument: 	test\n";$<tn>$=$<tn>1;}
			|test comp_for {parameters.push_back($<r.strVal>1);Streams::verbose() <<"argument: 	test comp_for\n";}
			//|test '=' test {Streams::verbose() <<"argument: test '=' test\n";}
			;

comp_iter:  comp_for {Streams::verbose() <<"comp_iter:  comp_for\n";}
			| comp_if {Streams::verbose() <<"comp_iter:  comp_if\n";}
			;

comp_for: 	FOR exprlist IN or_test {Streams::verbose() <<"comp_for: 	FOR exprlist IN or_test\n";}
			|FOR exprlist IN or_test comp_iter {Streams::verbose() <<"comp_for: FOR exprlist IN or_test comp_iter\n";}
			;

comp_if: IF or_test {Streams::verbose() <<"comp_if: IF or_test\n";}
		|IF or_test comp_iter {Streams::verbose() <<"comp_if: IF or_test comp_iter\n";}
		;

%%
void yyerror(const char *s) 
{
	Program::addError(new SyntaxError(s));
	fprintf(stderr, "Error:%s\n", s);
	//cout<<s;
}

int strlength(char * str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

int yylex()
{
	return lexer->yylex();

}
void main(void)
{
	string input = "code.txt";
	dir_path="";
	//bool f = true;
	//if (f)
	//{
	//	addFile(input);
	//}
	
	//for(int i=0;i<sfiles.size();i++)
	//{
	//    string sf=sfiles[i];
	//	lineNum=colNum=1;
	//	sourceFile=sf;
	//	ifstream inf(sf);
	//	lexer = new yyFlexLexer(&inf);
	//	Parser* p = new Parser();
	//	p->parse();
	//}
	//addFile(input);
	sourceFile=input;
	fileStack.push(input);
	ifstream inf(input);
	lexer = new yyFlexLexer(&inf);
	Parser* p = new Parser();
	p->parse();
	Program::printErrors();
	//err->printErrQueue();
	system("pause");
}
#endif;