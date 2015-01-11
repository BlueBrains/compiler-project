%output ="yacc.cpp"

%{
	#define _CRT_SECURE_NO_WARNINGS
	#include <iostream>
	#include <FlexLexer.h>
	#include <string>
	#include <stack>
	#include "Program.h"
	#include "SyntaxError.h"
	#include <fstream>
	#include "Streams.h"
	#include "ErrorRevovery.h"
	#include <set>
	#include "compilerProject/MyParser.h"
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
	FlexLexer* lexer = new yyFlexLexer();
	extern string sourceFile="";
	string dir_path="";
	string temp_id="";
	char* i_type;
	char* t_id=new char[10];
	char* acc_mod=new char[8];
	vector<char*> sto_mod;
	bool ss=false;
	bool ff=false;
	bool pp=true;
	int linefunc=0;
	int colmfunc=0;

	bool v_static,v_final;
	vector<char *>inhertance_list;
	vector<char *>ID_list;
	Variable* v;
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
%}		


%union{
	struct R{
		int intVal;
		float floatVal;
		char charVal;
		char* strVal;
		int lineNum;
		int colNum;
	}r;
		class YaccSimpleType * yaccSimpleType;
		class Variable * var;
		class Function * function;
		class Type * type;
}


%start programes
%token error END_OF_FILE
%token	IMPORT CLASS ID COLON CLOSE_S COMMA DOT ID END OPEN_C CLOSE_C 
%token	DEF ASSIGN STAR ELSE IF ELIF WHILE FOR IN TRY FINALLY
%token	EXPECT WITH AS ASSERT EQUAL DEL RETURN PRINT GLOBAL AND_W OR_W
%token	RAISE PRIVATE PUBLIC PROTECTED OPEN_D CLOSE_D  RE_COT YIELD
%token	PRIMARY OR AND NOT PLUS MINUS DIV MOD NOT_EQUAL FINAL STATIC SELF
%token	LESS_THAN LESS_OR_EQUAL MORE_THAN MORE_OR_EQUAL TRUE FALSE EXCEPT SEMICOLON
%token  NEW_LINE PASS CHAR_VALUE OPEN_S STRING_VALUE INTEGER_VALUE BREAK CONTINUE LONG_VALUE FLOAT_VALUE
%nonassoc stmt_1_2
%nonassoc stmt_1 stmt_2 stmt_3 stmt_4 stmt_5 stmt_6 stmt_7  stmt_9 stmt_10 stmt_11
%nonassoc DOT
%nonassoc stmt_8
%nonassoc ELSE ELIF FINALLY EXCEPT 

%nonassoc ID COLON IF WHILE FOR TRY WITH ASSERT DEL RETURN PRINT GLOBAL RAISE OPEN_D RE_COT YIELD PRIMARY PASS CHAR_VALUE OPEN_S CLOSE_S STRING_VALUE INTEGER_VALUE BREAK CONTINUE LONG_VALUE FLOAT_VALUE COMMA CLOSE_D SEMICOLON error FINAL STATIC PUBLIC PROTECTED PRIVATE OPEN_C ASSIGN END  
%left OR AND
%left NOT
%left NOT_EQUAL EQUAL LESS_THAN LESS_OR_EQUAL MORE_THAN MORE_OR_EQUAL
%left PLUS MINUS
%left MULTI DIV MOD


%%

programes: program END_OF_FILE {Streams::verbose() <<"programes: program END_OF_FILE\n";
						p->check_inhertance_list();
						if(!p->errRecovery->errQ->isEmpty())
								p->errRecovery->printErrQueue();
						p->print_symbol();
						Streams::verbose().flush();						
						}

program: program unit {	Streams::verbose() <<"prgram : program unit\n";
						Streams::verbose().flush();						
					}
				|unit      {
							
								Streams::verbose()<<"program: unit\n";
								Streams::verbose().flush();						
							}
				
;

import_stmt : IMPORT unit_list SEMICOLON {Streams::verbose()<<"import_stmt : IMPORT unit_list SEMICOLON \n";}
			  |IMPORT unit_list error {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum,"Expected ';' ","");
									  }

unit:	import_stmt class_decl	{Streams::verbose()<<"unit: import_stmt class_decl\n";}
		| class_decl				{Streams::verbose()<<"unit: class_decl\n";}
;

class_decl: class_h class_body	{Streams::verbose()<<"class_decl: class_h class_body\n"; }
;
class_h: 
		CLASS ID 	{Streams::verbose() << "class_h: CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>2,inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
					}                                                   //class X 
		|access_modef CLASS ID 	{Streams::verbose() << "class_h: access_modef CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		|STATIC CLASS ID 	{Streams::verbose() << "class_h: STATIC CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}					  
		|FINAL CLASS ID 	{Streams::verbose() << "class_h: FINAL CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		|STATIC FINAL CLASS ID 	{Streams::verbose() << "class_h: STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		|FINAL STATIC CLASS ID 	{Streams::verbose() << "class_h: FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		|STATIC error STATIC CLASS ID {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
								err->errQ->enqueue($<r.lineNum>5,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");
								$<type>$=p->createType($<r.strVal>2,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}
		|FINAL error FINAL CLASS ID 	{Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
								err->errQ->enqueue($<r.lineNum>5,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");
								$<type>$=p->createType($<r.strVal>2,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}
		|STATIC access_modef CLASS ID 	{Streams::verbose() << "class_h: STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		|FINAL access_modef CLASS ID 	{Streams::verbose() << "class_h: FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		|STATIC FINAL access_modef CLASS ID 	{Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		|FINAL STATIC access_modef CLASS ID 	{Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		|STATIC error STATIC access_modef CLASS ID {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");
								$<type>$=p->createType($<r.strVal>6,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}
		|FINAL error FINAL access_modef CLASS ID {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");
								$<type>$=p->createType($<r.strVal>6,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}
		|access_modef STATIC CLASS ID 	{Streams::verbose() << "class_h: access_modef STATIC CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		|access_modef FINAL CLASS ID 	{Streams::verbose() << "class_h: access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
							$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		|access_modef STATIC FINAL CLASS ID 	{Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
							$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		|access_modef FINAL STATIC CLASS ID 	{Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}
		|access_modef STATIC STATIC CLASS ID {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");									
								  $<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								  }
		|access_modef FINAL FINAL CLASS ID	{
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");									
								  $<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					} 
		|STATIC access_modef FINAL CLASS ID 	{Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
								$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
					}  
		|FINAL access_modef FINAL CLASS ID {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
											err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");
											$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
											t=$<type>$;
											inhertance_list.clear();
											acc_mod="";
										   }
		|STATIC access_modef STATIC CLASS ID {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
											err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");
											$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
											t=$<type>$;
											inhertance_list.clear();
											acc_mod="";
										   }
		|CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>2,inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
										acc_mod="";
								}                     //class X ()
		|access_modef CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}                     //class X ()
		|STATIC CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}                     //class X ()
		|FINAL CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}                     //class X ()
		|STATIC FINAL CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}                     //class X ()
		|FINAL STATIC CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}                     //class X ()
		|STATIC error STATIC CLASS ID OPEN_S CLOSE_S {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");
								}
		|FINAL error FINAL CLASS ID OPEN_S CLOSE_S {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");
								}
		|STATIC access_modef CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
								$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}                     //class X ()
		|FINAL access_modef CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}                     //class X ()
		|STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}                     //class X ()
		|FINAL STATIC access_modef CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
								$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}                     //class X ()
		|STATIC error STATIC access_modef CLASS ID OPEN_S CLOSE_S {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");
								$<type>$=p->createType($<r.strVal>6,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}
		|FINAL error FINAL access_modef CLASS ID OPEN_S CLOSE_S {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");
								$<type>$=p->createType($<r.strVal>6,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}
		|access_modef STATIC CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
								$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}                     //class X ()
		|access_modef FINAL CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}                     //class X ()
		|access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}                     //class X ()
		|access_modef FINAL STATIC CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
								$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}                     //class X ()
		|access_modef STATIC STATIC CLASS ID OPEN_S CLOSE_S {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");									
									$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								  }
		|access_modef FINAL FINAL CLASS ID OPEN_S CLOSE_S {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");									
									$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								  }
		|STATIC access_modef FINAL CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
								$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}                     //class X ()
		|FINAL access_modef STATIC CLASS ID OPEN_S CLOSE_S  {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S CLOSE_S \n"; colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>4+1)); 
									$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}                     //class X ()
		|STATIC access_modef STATIC CLASS ID OPEN_S CLOSE_S {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
											err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");
											$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
										   }
		|FINAL access_modef FINAL CLASS ID OPEN_S CLOSE_S {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
											err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");
										   $<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
										   }
		|CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
												$<type>$=p->createType($<r.strVal>2,inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
												acc_mod="";
											} //class X (A,B,T) OR class X(A)
		|access_modef CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		|STATIC CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		|FINAL CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>3,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		|STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		|FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		|STATIC error STATIC CLASS ID OPEN_S unit_list CLOSE_S {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");
								}
		|FINAL error FINAL CLASS ID OPEN_S unit_list CLOSE_S {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");
								}
		|STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													acc_mod="";
													inhertance_list.clear();
											} //class X (A,B,T) OR class X(A)
		|FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													acc_mod="";
													inhertance_list.clear();
											} //class X (A,B,T) OR class X(A)
		|STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: STATIC FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													acc_mod="";
													inhertance_list.clear();
											} //class X (A,B,T) OR class X(A)
		|FINAL STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: FINAL STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													acc_mod="";
													inhertance_list.clear();
											} //class X (A,B,T) OR class X(A)
		|STATIC error STATIC access_modef CLASS ID OPEN_S unit_list CLOSE_S {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");
								$<type>$=p->createType($<r.strVal>2,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								} 
		|FINAL error FINAL access_modef CLASS ID OPEN_S unit_list CLOSE_S {Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");
								$<type>$=p->createType($<r.strVal>2,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								}
		|access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		|access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>4,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		|access_modef STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: access_modef STATIC FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		|access_modef FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: access_modef FINAL STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		|access_modef STATIC STATIC CLASS ID OPEN_S unit_list CLOSE_S {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");									
									$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
										t=$<type>$;
										inhertance_list.clear();
										acc_mod="";
								  }
		|access_modef FINAL FINAL CLASS ID OPEN_S unit_list CLOSE_S {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");									
									$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
								t=$<type>$;
								inhertance_list.clear();
								acc_mod="";
								 
								  }
		|FINAL access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: FINAL access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		|STATIC access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S  {Streams::verbose() << "class_h: STATIC access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S \n";colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>5+1));
													$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum,false);
													t=$<type>$;
													inhertance_list.clear();
													acc_mod="";
											} //class X (A,B,T) OR class X(A)
		|STATIC access_modef STATIC CLASS ID OPEN_S unit_list CLOSE_S {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
											err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");
											$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum,false);
											t=$<type>$;
											inhertance_list.clear();
											acc_mod="";
										   }
		|FINAL access_modef FINAL CLASS ID OPEN_S unit_list CLOSE_S {
											Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
											err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");
											$<type>$=p->createType($<r.strVal>5,inhertance_list,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
											t=$<type>$;
											inhertance_list.clear();
											acc_mod="";
										   }
		|CLASS error	{							
									colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>1+1));
									Streams::verbose()<<"Error: Expected class name at Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>1-strlength($<r.strVal>1)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected class name","");
		}
		|ID error ID    {
									colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>2+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>1-strlength($<r.strVal>1)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected Reserved word","");
							 }
		|ID error   {
									colonStack.push(new ColonStack($<r.lineNum>1,$<r.colNum>1+1));
									Streams::verbose()<<"Error: Expected Reserved word at Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>1-strlength($<r.strVal>1)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected Reserved word","");
						 }
;

expr_list:	expr_list COMMA expr	{Streams::verbose()<<"expr_list: expr_list COMMA expr\n";}
			|expr %prec stmt_1	{Streams::verbose()<<"expr_list: expr %prec stmt_1\n";}
;				

unit_list:	unit_list COMMA unit_import	{
												t_id=new char[10];
												strcpy(t_id,temp_id.c_str());
												inhertance_list.push_back(t_id);	
												Streams::verbose()<<"unit_list:	unit_list COMMA unit_import\n";
												temp_id="";
												}		
			|unit_import	{	
								t_id=new char[10];
								strcpy(t_id,temp_id.c_str());
								inhertance_list.push_back(t_id);
								Streams::verbose()<<"unit_list:	unit_import\n";
								temp_id="";
							}


unit_import: unit_import DOT ID	{
									temp_id=temp_id+"."+$<r.strVal>3;
									Streams::verbose()<<"unit_import: unit_import DOT ID\n";
								}//A.B
			|ID {
					temp_id=temp_id+$<r.strVal>1;
					Streams::verbose()<<"unit_import: ID\n";

				}
		//A->import . B -> import . C->import
;

class_body:   COLON END		{
								Streams::verbose()<<"class_body:COLON END	\n";colonStack.pop();
								$<type>$=p->finishTypeDeclaration(t);
							}
			| COLON dm_list END	{Streams::verbose()<<"class_body:COLON dm_list END\n";colonStack.pop();
										$<type>$=p->finishTypeDeclaration(t);
									}
			| error END {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  }
			| error dm_list END {
					ColonStack* temp = colonStack.top();
					colonStack.pop();
					Streams::verbose()<<"Error: Expected ':' at Line No:"<<temp->lineNum<<" Column No:"<<temp->colNum<<endl;
						$<type>$=p->finishTypeDeclaration(t);
					err->errQ->enqueue(temp->lineNum,temp->colNum,"Expected ':' ","");
				  }
			| COLON error {					
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					$<type>$=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  }
			| COLON dm_list error {
					colonStack.pop();
					Streams::verbose()<<"Error: Expected 'end' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum<<endl;
					$<type>$=p->finishTypeDeclaration(t);
					err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum," Expected 'end' ","");									
				  }
;

dm_list:	dm_list DEF dm {Streams::verbose()<<"dm_list: dm_list DEF dm\n";}
			|DEF dm {Streams::verbose()<<"dm_list: DEF dm\n";}
;

dm: var_declaration	SEMICOLON {Streams::verbose()<<"dm:	var_declaration SEMICOLON\n";}
	|method_declaration	{Streams::verbose()<<"dm:	method_declaration\n";}
	|class_decl	{Streams::verbose()<<"dm:	class_decl\n";}
	|var_declaration error {
							Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
							err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ';' ","");
						   }
;

var_declaration: access_modef ID {
									Streams::verbose()<<"var_declaration: access_modef ID\n";
									$<var>$=p->addVariableToCurrentScope($<r.strVal>2,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
									v=$<var>$;
									acc_mod="";
									}	//public x
				|STATIC ID {
									Streams::verbose()<<"var_declaration: STATIC ID\n";
									$<var>$=p->addVariableToCurrentScope($<r.strVal>2,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
									v=$<var>$;
							}	//static x
				|FINAL ID {
								Streams::verbose()<<"var_declaration: FINAL ID\n";
								$<var>$=p->addVariableToCurrentScope($<r.strVal>2,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
									v=$<var>$;
								}	//static x
				|STATIC FINAL ID {
									Streams::verbose()<<"var_declaration: STATIC FINAL ID\n";
									$<var>$=p->addVariableToCurrentScope($<r.strVal>2,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
									v=$<var>$;
									}	//static x
				|FINAL STATIC ID {
									Streams::verbose()<<"var_declaration: FINAL STATIC ID\n";
									$<var>$=p->addVariableToCurrentScope($<r.strVal>2,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
									v=$<var>$;
									}	//static x
				|STATIC error STATIC ID {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");									
								  }
				|FINAL error FINAL ID {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");									
								  }
				|ID					{Streams::verbose()<<"var_declaration: ID\n";
										$<var>$=p->addVariableToCurrentScope($<r.strVal>1,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
										v=$<var>$;
									}					//x
				|FINAL access_modef ID		{
												Streams::verbose()<<"var_declaration: FINAL access_modef ID\n";
													$<var>$=p->addVariableToCurrentScope($<r.strVal>3,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
													v=$<var>$;
													acc_mod="";
											}
				|STATIC access_modef ID		{
												Streams::verbose()<<"var_declaration: STATIC access_modef ID\n";
													$<var>$=p->addVariableToCurrentScope($<r.strVal>3,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
													v=$<var>$;
													acc_mod="";
											}
				|access_modef ID ASSIGN expr 	{Streams::verbose()<<"var_declaration: access_modef ID ASSIGN expr\n";
													$<var>$=p->addVariableToCurrentScope($<r.strVal>2,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
													v=$<var>$;
													acc_mod="";
													}	//private x = 10
				|STATIC ID ASSIGN expr 	{Streams::verbose()<<"var_declaration: STATIC ID ASSIGN expr\n";}	//static x = 10
				|FINAL ID ASSIGN expr 	{Streams::verbose()<<"var_declaration: FINAL ID ASSIGN expr\n";}	//static x = 10
				|STATIC FINAL ID ASSIGN expr 	{Streams::verbose()<<"var_declaration: STATIC FINAL ID ASSIGN expr\n";}	//static x = 10
				|FINAL STATIC ID ASSIGN expr 	{Streams::verbose()<<"var_declaration: FINAL STATIC ID ASSIGN expr\n";}	//static x = 10
				|STATIC error STATIC ID ASSIGN expr {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");									
								  }
				|FINAL error FINAL ID ASSIGN expr {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");									
								  }
				|ID ASSIGN expr 	{Streams::verbose()<<"var_declaration: ID ASSIGN expr\n";
										$<var>$=p->addVariableToCurrentScope($<r.strVal>1,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum);
													v=$<var>$;
										}		//x = 5
				|access_modef STATIC ID {
											Streams::verbose()<<"var_declaration: access_modef STATIC ID\n";
											$<var>$=p->addVariableToCurrentScope($<r.strVal>3,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
									v=$<var>$;
									acc_mod="";
											}	//public x
				|access_modef FINAL ID {
				
											Streams::verbose()<<"var_declaration: access_modef FINAL ID\n";
												$<var>$=p->addVariableToCurrentScope($<r.strVal>3,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
												v=$<var>$;
												acc_mod="";
											}	//public x
				|access_modef STATIC FINAL ID {
												Streams::verbose()<<"var_declaration: access_modef STATIC FINAL ID\n";
													$<var>$=p->addVariableToCurrentScope($<r.strVal>4,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
												v=$<var>$;
												acc_mod="";
												}	//public x
				|access_modef FINAL STATIC ID {
												Streams::verbose()<<"var_declaration: access_modef FINAL STATIC ID\n";
													$<var>$=p->addVariableToCurrentScope($<r.strVal>4,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
												v=$<var>$;
												acc_mod="";
												}	//public x
				|access_modef STATIC error STATIC ID {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");									
								  }
				|access_modef FINAL error FINAL ID {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");									
								  }
				
				|STATIC FINAL access_modef ID {
												Streams::verbose()<<"var_declaration: STATIC FINAL access_modef ID\n";
													$<var>$=p->addVariableToCurrentScope($<r.strVal>4,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
												v=$<var>$;
												acc_mod="";
												}	//static x
				|FINAL STATIC access_modef ID {
													Streams::verbose()<<"var_declaration: FINAL STATIC access_modef ID\n";
														$<var>$=p->addVariableToCurrentScope($<r.strVal>4,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
													v=$<var>$;
													acc_mod="";
													
													}	//static x
				|STATIC error STATIC access_modef ID {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");									
								  }
				|FINAL error FINAL access_modef ID {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");									
								  }
				|access_modef STATIC ID ASSIGN expr 	{
				
															Streams::verbose()<<"var_declaration: access_modef STATIC ID ASSIGN expr\n";
																$<var>$=p->addVariableToCurrentScope($<r.strVal>3,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
																v=$<var>$;
																acc_mod="";
															}	//private x = 10
				|access_modef FINAL ID ASSIGN expr 	{
														Streams::verbose()<<"var_declaration: access_modef FINAL ID ASSIGN expr\n";
															$<var>$=p->addVariableToCurrentScope($<r.strVal>3,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
														v=$<var>$;
														acc_mod="";
													}	//private x = 10
				|access_modef STATIC FINAL ID ASSIGN expr 	{
																Streams::verbose()<<"var_declaration: access_modef STATIC FINAL ID ASSIGN expr\n";
																	$<var>$=p->addVariableToCurrentScope($<r.strVal>4,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=$<var>$;
																acc_mod="";
																}	//private x = 10
				|access_modef FINAL STATIC ID ASSIGN expr 	{
																Streams::verbose()<<"var_declaration: access_modef FINAL STATIC ID ASSIGN expr\n";
																	$<var>$=p->addVariableToCurrentScope($<r.strVal>4,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																	v=$<var>$;
																	acc_mod="";
																}	//private x = 10
				|access_modef STATIC error STATIC ID ASSIGN expr 	{
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");									
								  }
				|access_modef FINAL error FINAL ID ASSIGN expr 	{
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");									
								  }
				|STATIC access_modef ID ASSIGN expr 	{
															Streams::verbose()<<"var_declaration: STATIC access_modef ID ASSIGN expr\n";
																$<var>$=p->addVariableToCurrentScope($<r.strVal>3,acc_mod,1,0, yylval.r.lineNum, yylval.r.colNum);
																v=$<var>$;
																acc_mod="";
															}	//static x = 10
				|FINAL access_modef ID ASSIGN expr 	{
														Streams::verbose()<<"var_declaration: FINAL access_modef ID ASSIGN expr\n";
															$<var>$=p->addVariableToCurrentScope($<r.strVal>3,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum);
															v=$<var>$;
															acc_mod="";
														}	//static x = 10
				|STATIC FINAL access_modef ID ASSIGN expr 	{
																Streams::verbose()<<"var_declaration: STATIC FINAL access_modef ID ASSIGN expr\n";
																	$<var>$=p->addVariableToCurrentScope($<r.strVal>4,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																	v=$<var>$;
																	acc_mod="";
																}	//static x = 10
				|FINAL STATIC access_modef ID ASSIGN expr 	{
																Streams::verbose()<<"var_declaration: FINAL STATIC access_modef ID ASSIGN expr\n";
																	$<var>$=p->addVariableToCurrentScope($<r.strVal>4,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=$<var>$;
																acc_mod="";
																}	//static x = 10
				|STATIC error STATIC access_modef ID ASSIGN expr 	{
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");									
								  }
				|FINAL error FINAL access_modef ID ASSIGN expr {
									Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");									
								  }
				|STATIC access_modef FINAL ID ASSIGN expr {
															Streams::verbose()<<"var_declaration: STATIC access_modef FINAL ID ASSIGN expr\n";
																$<var>$=p->addVariableToCurrentScope($<r.strVal>4,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=$<var>$;
																acc_mod="";
															}	//static x = 10
				|FINAL access_modef STATIC ID ASSIGN expr {
																Streams::verbose()<<"var_declaration: FINAL access_modef FINAL ID ASSIGN expr\n";
																$<var>$=p->addVariableToCurrentScope($<r.strVal>2,acc_mod,1,1, yylval.r.lineNum, yylval.r.colNum);
																v=$<var>$;
																acc_mod="";	
															}	//static x = 10
				|STATIC access_modef STATIC error ID ASSIGN expr {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
																		err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");
																}
				|FINAL access_modef FINAL error ID ASSIGN expr {
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
																		err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");
																}
				|access_modef ID ID error  {
											Streams::verbose()<<"Error: UN Expected IDENTIFIER Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
											err->errQ->enqueue($<r.lineNum>2,$<r.colNum>3-strlen($<r.strVal>3),"UN Expected IDENTIFIER ","");
										  }
				|ID ID error {
							Streams::verbose()<<"Error: UN Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
							err->errQ->enqueue($<r.lineNum>2,$<r.colNum>3-strlen($<r.strVal>3),"UN Expected IDENTIFIER ","");						
						}
;

method_declaration: method_h block_stmt	{Streams::verbose()<<"method_declaration: method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;}
					|access_modef method_h block_stmt	{Streams::verbose()<<"method_declaration: access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;}
					|STATIC method_h block_stmt	{Streams::verbose()<<"method_declaration: STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;}
					|FINAL method_h block_stmt	{Streams::verbose()<<"method_declaration: FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;}
					|access_modef STATIC method_h block_stmt	{Streams::verbose()<<"method_declaration: access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;}					
					|access_modef FINAL method_h block_stmt	{Streams::verbose()<<"method_declaration: access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;}					
					|STATIC access_modef method_h block_stmt	{Streams::verbose()<<"method_declaration: STATIC access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,false,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;}
					|FINAL access_modef method_h block_stmt	{Streams::verbose()<<"method_declaration: FINAL access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,false,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;}
					|STATIC access_modef FINAL method_h block_stmt	{Streams::verbose()<<"method_declaration: STATIC access_modef FINAL method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;}
					|FINAL access_modef STATIC method_h block_stmt	{Streams::verbose()<<"method_declaration: FINAL access_modef STATIC method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;}
					|STATIC FINAL access_modef method_h block_stmt	{Streams::verbose()<<"method_declaration: STATIC FINAL access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;}
					|FINAL STATIC access_modef method_h block_stmt	{Streams::verbose()<<"method_declaration: FINAL STATIC access_modef method_h block_stmt\n";testfunction = p->finishFunctionDeclaration(testfunction,true,true,linefunc,colmfunc);parameters.clear();linefunc=0;colmfunc=0;}
					|FINAL access_modef FINAL error method_h block_stmt	{
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
																		err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");
																		}
					|STATIC access_modef STATIC error method_h block_stmt	{
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
																		err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");
																			}
					|STATIC STATIC error access_modef method_h block_stmt	{
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
																		err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");
																			}
					|FINAL FINAL error access_modef method_h block_stmt	{
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
																		err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlen($<r.strVal>2),"repeated modifier ","");
																			}
					|access_modef FINAL error FINAL method_h block_stmt	{
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
																		err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");
																			}
					|access_modef STATIC error STATIC method_h block_stmt	{
																		Streams::verbose()<<"Error: repeated modifier Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
																		err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlen($<r.strVal>3),"repeated modifier ","");
																			}
;


method_h: 	ID OPEN_S arguments CLOSE_S 	{Streams::verbose()<<"method_h: ID OPEN_S arguments CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, $<r.strVal>1,parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;}
			|ID OPEN_S ID CLOSE_S 		{Streams::verbose()<<"method_h: ID OPEN_S ID CLOSE_S \n";parameters.push_back($<r.strVal>3);testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, $<r.strVal>1,parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;}			
			|ID OPEN_S CLOSE_S 	{Streams::verbose()<<"method_h: ID OPEN_S CLOSE_S \n";testfunction = p->createTypeFunctionHeader(t,ss,pp,ff, $<r.strVal>1,parameters,yylval.r.lineNum, yylval.r.colNum);pp=true;ff=false;ss=false;parameters.clear();linefunc=yylval.r.lineNum;colmfunc=yylval.r.colNum;}
			|error OPEN_S arguments CLOSE_S {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>1-1<<endl;
										err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-1,"Expected IDENTIFIER ","");
									  }
			|error OPEN_S ID CLOSE_S {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>1-1<<endl;
										err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-1,"Expected IDENTIFIER ","");
									  }
			|ID error arguments CLOSE_S {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2+1<<endl;
												err->errQ->enqueue($<r.lineNum>2,$<r.colNum>2+1,"Expected '(' ","");
											   }
			|ID error ID CLOSE_S {
												Streams::verbose()<<"Error: Expected '(' at Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>2+1<<endl;
												err->errQ->enqueue($<r.lineNum>2,$<r.colNum>2+1,"Expected '(' ","");
											   }
			|ID OPEN_S arguments error  {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue($<r.lineNum>1,yylval.r.colNum-strlength(yylval.r.strVal),"Expected ')' ","");
													 }
			|ID OPEN_S ID error  {
														Streams::verbose()<<"Error: Expected ')' at Line No:"<<yylval.r.lineNum<<" Column No:"<<$<r.colNum>4+1<<endl;
														err->errQ->enqueue($<r.lineNum>1,$<r.colNum>4+1,"Expected ')' ","");
													 }
;

arguments : args_list %prec stmt_11{Streams::verbose()<<"arguments:	args_list\n";}
			|default_args_list {Streams::verbose()<<"arguments:	default_args_list\n";}
			|args_list COMMA default_args_list {Streams::verbose()<<"arguments:	args_list COMMA default_args_list\n";}
;
args_list:	args_list COMMA arg	{Streams::verbose()<<"args_list:	args_list COMMA arg\n";}
			|ID COMMA arg {Streams::verbose()<<"args_list: ID COMMA arg \n"; parameters.push_back($<r.strVal>1);}
			|args_list COMMA ID {Streams::verbose()<<"args_list:	args_list COMMA ID \n"; parameters.push_back($<r.strVal>3);}
			|ID COMMA ID {Streams::verbose()<<"args_list:	ID COMMA ID \n"; parameters.push_back($<r.strVal>1); parameters.push_back($<r.strVal>3);}
			|arg	{Streams::verbose()<<"args_list: arg \n";}
			|paraself {Streams::verbose()<<"args_list: paraself \n";}
;

paraself: SELF COMMA args_list	{Streams::verbose()<<"paraself:	SELF COMMA args_list\n";parameters.push_back("self");}
			|SELF COMMA ID {Streams::verbose()<<"paraself:	SELF COMMA ID \n"; parameters.push_back("self"); parameters.push_back($<r.strVal>3);}
			|SELF %prec stmt_1 {Streams::verbose()<<"paraself:	SELF \n"; parameters.push_back("self");}
			|args_list COMMA SELF {Streams::verbose()<<"paraself:	args_list COMMA SELF \n"; parameters.push_back("self");}
			|ID COMMA SELF {Streams::verbose()<<"paraself:	ID COMMA SELF \n"; parameters.push_back($<r.strVal>1); parameters.push_back("self");}
;
arg:	STAR ID		{
						Streams::verbose()<<"arg:	STAR ID \n";std::string tempstr($<r.strVal>2);
						std::string erro("*" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
					}
		|STAR STAR ID		{Streams::verbose()<<"arg:	STAR STAR ID \n";std::string tempstr($<r.strVal>3);
						std::string erro("**" + tempstr);
						char *cstr = new char[erro.length() + 1];
						strcpy(cstr, erro.c_str()); parameters.push_back(cstr);}
		|ID STAR error {
							Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
							err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlength($<r.strVal>2)," Un Expected '*' ","");
						}
		|ID STAR STAR error {
								Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlength($<r.strVal>2)," Un Expected '**' ","");
							 }
;


default_args_list:	default_args_list COMMA default_arg	{Streams::verbose()<<"default_args_list: default_args_list COMMA default_arg\n";}					
					|default_arg {Streams::verbose()<<"default_args_list: default_arg \n";}
					|default_args_list COMMA args_list error	{
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														}					
					|default_args_list COMMA ID error	{
														Streams::verbose()<<"Error: default argument not at end of parameter list at Line No:"<<yylval.r.lineNum<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
														err->errQ->enqueue(yylval.r.lineNum,yylval.r.colNum-strlength(yylval.r.strVal),"default argument not at end of parameter list","");					
														}
;

default_arg:  ID ASSIGN expr	{Streams::verbose()<<"default_arg:	ID ASSIGN expr \n";parameters.push_back($<r.strVal>1);}
			| STAR ID ASSIGN expr	{
										Streams::verbose()<<"arg:	STAR ID ASSIGN expr \n";std::string tempstr($<r.strVal>2);
										std::string erro("*" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);
									}
			| STAR STAR ID ASSIGN expr	{Streams::verbose()<<"default_arg:	STAR STAR ID ASSIGN expr \n";std::string tempstr($<r.strVal>3);
										std::string erro("**" + tempstr);
										char *cstr = new char[erro.length() + 1];
										strcpy(cstr, erro.c_str()); parameters.push_back(cstr);}
			| ID STAR error STAR ASSIGN expr	{
											Streams::verbose()<<"Error: Un Expected '**' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
											err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlength($<r.strVal>2)," Un Expected '**' ","");
										}
			| ID STAR error ASSIGN expr	{
											Streams::verbose()<<"Error: Un Expected '*' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>2-strlength($<r.strVal>2)<<endl;
											err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2-strlength($<r.strVal>2)," Un Expected '*' ","");
										}
;

block_stmt:  COLON  END {Streams::verbose()<<"COLON  END \n";}			 
			 |COLON stmt_list END	{Streams::verbose()<<"block_stmt: COLON stmt_list END \n";}
			 |error END {
						Streams::verbose()<<"Error: Expected ':' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1-strlength($<r.strVal>1)<<endl;
						err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected ':' ","");			 
						}
			 //|COLON error {
				//		Streams::verbose()<<"Error: Expected 'end' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1+1<<endl;
					//	err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1+1,"Expected 'end' ","");			 
						//}
			
	;

stmt_list:	stmt_list stmt	{Streams::verbose()<<"stmt_list:	stmt_list stmt \n";}
			|stmt	{Streams::verbose()<<"stmt_list:	stmt \n";}
;

stmt: 			if_stmt	{Streams::verbose()<<"stmt: 		if_stmt\n";}
                |while_stmt	{Streams::verbose()<<"stmt:	while_stmt\n";}
                |for_stmt	{Streams::verbose()<<"stmt:	for_stmt\n";}
                |try_stmt	{Streams::verbose()<<"stmt:	try_stmt\n";}
                |with_stmt	{Streams::verbose()<<"stmt:	with_stmt\n";}
				|block_stmt %prec stmt_4	{Streams::verbose()<<"stmt:	block_stmt\n";}
				|simple_stmt_list SEMICOLON	{Streams::verbose()<<"stmt:	simple_stmt_list\n";}
				|simple_stmt_list error	{
										Streams::verbose()<<"Error: Expected ';' at Line No:"<<$<r.lineNum>1<<" Column No:"<<yylval.r.colNum<<endl;
										err->errQ->enqueue($<r.lineNum>1,yylval.r.colNum," Expected ';' ","");										
									}
				|SELF DOT ID SEMICOLON	{
												Streams::verbose()<<"assignment_stmt:	self dot amer\n";
																		//cout<<"assignment list"<<endl;
																		$<var>$=p->addVariableToCurrentScope($<r.strVal>3,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,true);
																		v=$<var>$;
																		acc_mod="";
										}
				|ID SEMICOLON	{
									Streams::verbose()<<"stmt:	ID SEMICOLON\n";
									$<var>$=p->addVariableToCurrentScope($<r.strVal>1,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,false);
																		v=$<var>$;
																		acc_mod="";
								}
				|STATIC ID SEMICOLON	{
											Streams::verbose()<<"Error: illegal start of expression at Line No:"<<$<r.lineNum>1<<endl;
										err->errQ->enqueue($<r.lineNum>1,yylval.r.colNum,"Error: illegal start of expression ","");										
										}
				|FINAL ID SEMICOLON		{
												Streams::verbose()<<"stmt:	ID SEMICOLON\n";
									$<var>$=p->addVariableToCurrentScope($<r.strVal>2,acc_mod,0,1, yylval.r.lineNum, yylval.r.colNum,false);
																		v=$<var>$;
																		acc_mod="";
										}
				|ID DOT ID SEMICOLON	{Streams::verbose()<<"stmt:	ID DOT ID SEMICOLON\n";}
				|ID COMMA ID DOT ID DOT ID SEMICOLON {Streams::verbose()<<"stmt:	ID COMMA ID DOT ID DOT ID SEMICOLON\n";}
				|ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON {Streams::verbose()<<"stmt:	ID DOT ID COMMA ID DOT ID DOT ID SEMICOLON\n";}
;

if_stmt:	if_header stmt %prec stmt_3	{Streams::verbose()<<"if_stmt:	if_header stmt\n";}
			|if_header stmt ELSE stmt	{Streams::verbose()<<"if_stmt:	if_header stmt ELSE stmt\n";}
			|if_header stmt error stmt	{
										Streams::verbose()<<"Error: Expected 'else' at Line No:"<<$<r.lineNum>3<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
										err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlength($<r.strVal>3)," Expected 'else' ","");										
									}
			|if_header stmt elif_stmt %prec stmt_6	{Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt\n";}
			|if_header stmt elif_stmt ELSE stmt	{Streams::verbose()<<"if_stmt:	if_header stmt elif_stmt ELSE stmt\n";}
;

elif_stmt: 	elif_header stmt elif_stmt	{Streams::verbose()<<"elif_stmt: 	elif_header stmt elif_stmt\n";}
			|elif_header stmt %prec stmt_7	{Streams::verbose()<<"elif_stmt:	elif_header stmt\n";}
			//|elif_header error %prec stmt_7	{
				//						Streams::verbose()<<"Error: Expected statement at Line No:"<<$<r.lineNum>1<<" Column No:"<<yylval.r.colNum<<endl;
					//					err->errQ->enqueue($<r.lineNum>1,yylval.r.colNum," Expected statement ","");										
						//					}
;

if_header:	IF expr 	{Streams::verbose()<<"if_header:	IF expr \n";}		//if(x > y):			
;

elif_header:	ELIF expr {Streams::verbose()<<"elif_header:	ELIF expr \n";}
				|error ID expr { 
						Streams::verbose()<<"Error: Expected reserved word at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1-strlength($<r.strVal>1)<<endl;
						err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected reserved word 'while' ","");
					 }
;

while_stmt: while_header stmt	{Streams::verbose()<<"while_stmt: while_header stmt\n";}
			;


;
while_header: WHILE expr	{Streams::verbose()<<"while_header: WHILE expr \n";}
			//|error ID expr { 
				//		Streams::verbose()<<"Error: Expected reserved word at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1-strlength($<r.strVal>1)<<endl;
					//	err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected reserved word 'while' ","");
					 //}
			|ID error expr { 
						Streams::verbose()<<"Error: Expected reserved word 'while' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1-strlength($<r.strVal>1)<<endl;
						err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected reserved word 'while' ","");
					 }		
;

for_stmt: 	for_header stmt	{Streams::verbose()<<"for_stmt: 	for_header stmt\n";}
;

for_header: FOR target_list IN expr_list {Streams::verbose()<<"for_header: FOR target_list IN expr_list \n";}
			|FOR target_list IN list_display {Streams::verbose()<<"for_header: FOR target_list IN list_display \n";}
			|FOR ID COMMA ID IN expr_list {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN expr_list \n";}
			|FOR ID COMMA ID IN list_display {Streams::verbose()<<"for_header:	FOR ID COMMA ID IN list_display \n";}
			|FOR ID IN expr_list {Streams::verbose()<<"for_header:	FOR ID IN expr_list \n";}
			|FOR ID IN list_display {Streams::verbose()<<"for_header:	FOR ID IN list_display \n";}
			|ID error ID IN expr_list {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1-strlength($<r.strVal>1)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected reserved word 'for' ","");
								}			
			|ID error ID IN list_display {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1-strlength($<r.strVal>1)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected reserved word 'for' ","");
								}
			|ID error target_list IN expr_list {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1-strlength($<r.strVal>1)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected reserved word 'for' ","");
								}			
			|ID error target_list IN list_display {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1-strlength($<r.strVal>1)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected reserved word 'for' ","");
								}
			|FOR ID error expr_list {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected reserved word 'in' ","");
								}			
			|FOR ID error list_display {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlength($<r.strVal>3),"Expected reserved word 'in' ","");
								}
			|FOR target_list error expr_list {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected reserved word 'in' ","");
								}			
			|FOR target_list error list_display {
								Streams::verbose()<<"Error: Expected reserved word 'in' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>3-strlength($<r.strVal>3)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3-strlength($<r.strVal>3),"Expected reserved word 'in' ","");
								}
;

//A.B.C , X.T.F->import_list
import_list:	import_list COMMA import	{Streams::verbose()<<"import_list:	import_list COMMA import\n";}
				|ID COMMA import_list {Streams::verbose()<<"import_list: ID COMMA import_list \n";}
				|ID COMMA ID {Streams::verbose()<<"import_list: ID COMMA ID \n";}
				|ID COMMA ID DOT ID {Streams::verbose()<<"import_list: ID COMMA ID DOT ID \n";}
				|ID DOT ID COMMA import_list {Streams::verbose()<<"import_list: ID DOT ID COMMA import_list \n";}
				|ID DOT ID COMMA ID {Streams::verbose()<<"import_list: ID DOT ID COMMA ID \n";}
				|ID DOT ID COMMA ID DOT ID {Streams::verbose()<<"import_list: ID DOT ID COMMA ID DOT ID \n";}
				|import	{Streams::verbose()<<"import_list:	import\n";}
;


import: import DOT ID	{Streams::verbose()<<"import: import DOT ID\n";}//A.B
		|ID DOT ID DOT ID {Streams::verbose()<<"import:	ID DOT ID DOT ID;"}
		//A->import . B -> import . C->import
;

target_list:	target_list COMMA target	{Streams::verbose()<<"target_list:	target_list COMMA target\n";}
				|ID COMMA ID COMMA target	{Streams::verbose()<<"target_list:	ID COMMA ID COMMA target\n";}
				|target_list COMMA ID	{Streams::verbose()<<"target_list:	target_list COMMA ID\n";}
				|ID COMMA ID COMMA ID	{Streams::verbose()<<"target_list:	ID COMMA ID COMMA ID\n";}
				|ID COMMA target	{Streams::verbose()<<"target_list:	ID COMMA target\n";}
				|target	{Streams::verbose()<<"target_list:	target\n";}
;

try_stmt: 	TRY  stmt COLON except_stmt END	{Streams::verbose()<<"try_stmt: 	TRY  stmt except_stmt\n";}
			|TRY  stmt COLON finally_stmt END	{Streams::verbose()<<"try_stmt: 	TRY  stmt finally_stmt\n";}
;

finally_stmt: 	FINALLY  block_stmt	{Streams::verbose()<<"finally_stmt: 	FINALLY COLON block_stmt\n";}
;

except_stmt:	EXCEPT  stmt	{Streams::verbose()<<"except_stmt:	EXCEPT  stmt\n";}
				|EXCEPT expr stmt	{Streams::verbose()<<"except_stmt:	EXCEPT  expr stmt\n";}
;

with_stmt:	WITH expr  	{Streams::verbose()<<"with_stmt:	WITH expr \n";}
			|WITH expr AS target  	{Streams::verbose()<<"with_stmt:	WITH expr AS target \n";}
;

simple_stmt_list: 	expr_list	{Streams::verbose()<<"simple_stmt_list: 	expr_list\n";}
					| assert_stmt	{Streams::verbose()<<"simple_stmt_list: 	assert_stmt\n";}
					| assignment_stmt	{Streams::verbose()<<"simple_stmt_list: 	assignment_stmt\n";}
					//| augmented_assignment_stmt	{Streams::verbose()<<"simple_stmt_list: 	augmented_assignment_stmt\n";}
					| PASS	{Streams::verbose()<<"simple_stmt_list: 	PASS\n";}
					| del_stmt	{Streams::verbose()<<"simple_stmt_list: 	del_stmt\n";}
					| print_stmt	{Streams::verbose()<<"simple_stmt_list: 	print_stmt\n";}
					| return_stmt	{Streams::verbose()<<"simple_stmt_list: 	return_stmt\n";}
					| yield_stmt	{Streams::verbose()<<"simple_stmt_list: 	yield_stmt\n";}
					| raise_stmt	{Streams::verbose()<<"simple_stmt_list: 	raise_stmt\n";}
					| BREAK	{Streams::verbose()<<"simple_stmt_list: 	BREAK\n";}
					| CONTINUE	{Streams::verbose()<<"simple_stmt_list: 	CONTINUE\n";}
					| import_list	{Streams::verbose()<<"simple_stmt_list: 	import_list\n";}					
					| global_stmt	{Streams::verbose()<<"simple_stmt_list: 	global_stmt\n";}
					;
					
assert_stmt: 	ASSERT expr {Streams::verbose()<<"assert_stmt: 	ASSERT expr\n";}
				|ASSERT expr COMMA expr	{Streams::verbose()<<"assert_stmt:	ASSERT expr COMMA expr\n";}
;
left_assignment_side : expr_list {Streams::verbose()<<"left_assignment_side : expr_list\n";}
					   |parenth_form {Streams::verbose()<<"left_assignment_side : parenth_form\n";}
					   |list_display {Streams::verbose()<<"left_assignment_side : list_display\n";}
					   |dict_display {Streams::verbose()<<"left_assignment_side : dict_display\n";}
					   ;

assignment_stmt:	target_list ASSIGN left_assignment_side 	{Streams::verbose()<<"assignment_stmt:	target_list ASSIGN expr_list\n";}
					|id_dot ASSIGN left_assignment_side 	{Streams::verbose()<<"assignment_stmt:	id_dot ASSIGN expr_list\n";}
					|id_dot OPEN_D expr_list CLOSE_D ASSIGN left_assignment_side 	{Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D expr_list CLOSE_D ASSIGN expr_list\n";}
					|id_dot OPEN_D CLOSE_D ASSIGN left_assignment_side 	{Streams::verbose()<<"assignment_stmt:	id_dot OPEN_D expr_list CLOSE_D ASSIGN expr_list\n";}
					|ID COMMA ID ASSIGN left_assignment_side 	{Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN expr_list\n";}					
					|SELF DOT ID ASSIGN left_assignment_side		{
																		Streams::verbose()<<"assignment_stmt:	self dot amer\n";
																		//cout<<"assignment list"<<endl;
																		$<var>$=p->addVariableToCurrentScope($<r.strVal>3,acc_mod,0,0, yylval.r.lineNum, yylval.r.colNum,true);
																		v=$<var>$;
																		acc_mod="";
																	}
					//|target_list ASSIGN yield_expression	{Streams::verbose()<<"assignment_stmt:	target_list ASSIGN yield_expression\n";}
					//|ID COMMA ID ASSIGN yield_expression	{Streams::verbose()<<"assignment_stmt:	ID COMMA ID ASSIGN yield_expression\n";}
					//|ID ASSIGN yield_expression	{Streams::verbose()<<"assignment_stmt:	ID ASSIGN yield_expression\n";}
;

del_stmt:	DEL target_list	{Streams::verbose()<<"del_stmt:	DEL target_list\n";}
			|DEL ID COMMA ID	{Streams::verbose()<<"del_stmt:	DEL ID COMMA ID\n";}
			|DEL ID	{Streams::verbose()<<"del_stmt:	DEL ID\n";}
			|DEL ID	OPEN_D expr CLOSE_D {Streams::verbose()<<"del_stmt:	DEL ID	OPEN_D expr CLOSE_D\n";}
			|DEL ID	OPEN_D expr COLON expr CLOSE_D {Streams::verbose()<<"del_stmt:	DEL ID OPEN_D COLON CLOSE_D\n";}
			|DEL ID	OPEN_D COLON CLOSE_D {Streams::verbose()<<"del_stmt:	DEL ID OPEN_D expr COLON expr CLOSE_D\n";}
			|DEL target_list OPEN_D expr CLOSE_D {Streams::verbose()<<"del_stmt:	DEL target_list	OPEN_D expr CLOSE_D\n";}
			|DEL target_list OPEN_D expr COLON expr CLOSE_D {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D expr COLON expr CLOSE_D\n";}
			|DEL target_list OPEN_D COLON CLOSE_D {Streams::verbose()<<"del_stmt:	DEL target_list OPEN_D COLON CLOSE_D\n";}
;

return_stmt:	RETURN	{Streams::verbose()<<"return_stmt:	RETURN\n";}
				|RETURN expr_list	{Streams::verbose()<<"return_stmt:	RETURN expr_list\n";}
;

yield_stmt:		yield_expression	{Streams::verbose()<<"yield_stmt:		yield_expression\n";}
;

print_stmt: PRINT expr_list	{Streams::verbose()<<"print_stmt: PRINT expr_list\n";}
			|PRINT target_list	{Streams::verbose()<<"print_stmt: PRINT expr_list\n";}
			|PRINT MORE_THAN MORE_THAN expr_list	{Streams::verbose()<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list\n";}			
			|ID error expr_list {
								Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1-strlength($<r.strVal>1)<<endl;
								err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected reserved word 'print' ","");
								}
			|ID MORE_THAN MORE_THAN expr_list	{
												Streams::verbose()<<"Error: Expected reserved word 'for' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1-strlength($<r.strVal>1)<<endl;
												err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected reserved word 'print' ","");
												}
;
global_stmt :GLOBAL id_list	{Streams::verbose()<<"global_stmt :GLOBAL id_list\n";}
			|GLOBAL error %prec stmt_1 {
										Streams::verbose()<<"Error: Expected IDENTIFIER at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1+$<r.strVal>1<<endl;
										err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1+1,"Expected IDENTIFIER ","");
									   }
;

id_list: 	ID COMMA id_list	{Streams::verbose()<<"id_list: 	ID COMMA id_list\n";}
			|ID	{Streams::verbose()<<"id_list:	ID\n";}
;

raise_stmt: RAISE	{Streams::verbose()<<"raise_stmt: RAISE\n";}
			|RAISE expr	{Streams::verbose()<<"raise_stmt:	RAISE expr\n";}
			|RAISE expr COMMA expr	{Streams::verbose()<<"raise_stmt:	RAISE expr COMMA expr\n";} //must continue
			|RAISE expr COMMA error %prec stmt_1 {
													Streams::verbose()<<"Error: Expected expression at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>3+1<<endl;
													err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3+1,"Expected expression ","");
												 }
			|ID error expr COMMA expr {
													Streams::verbose()<<"Error: Expected reserved word 'raise' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1-strlength($<r.strVal>1)<<endl;
													err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1),"Expected reserved word 'raise' ","");
												 }
;

access_modef: 	PRIVATE 	{Streams::verbose()<<"access_modef: PRIVATE\n";acc_mod="private";pp=true;}
				|PUBLIC		{Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false}
				|PROTECTED	{Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";}
				

;

target: 	OPEN_S target_list CLOSE_S 	{Streams::verbose()<<"target: 	OPEN_S target_list CLOSE_S \n";}//(
			|OPEN_S ID COMMA ID CLOSE_S 	{Streams::verbose()<<"target: 	OPEN_S ID COMMA ID CLOSE_S\n";}//(
			|OPEN_S ID CLOSE_S 	{Streams::verbose()<<"target: 	OPEN_S ID CLOSE_S\n";}//(
            |OPEN_D target_list CLOSE_D 	{Streams::verbose()<<"target: 	OPEN_D target_list CLOSE_D\n";}//[
			|OPEN_D ID COMMA ID CLOSE_D 	{Streams::verbose()<<"target: 	OPEN_D ID COMMA ID CLOSE_D\n";}//[
			|OPEN_D ID CLOSE_D 	{Streams::verbose()<<"target: 	OPEN_D ID CLOSE_D\n";}//[
            |attributeref	{Streams::verbose()<<"target: 	attributeref\n";}
            |subscription	{Streams::verbose()<<"target: 	subscription\n";}
			;
            
attributeref: primary DOT ID	{Streams::verbose()<<"attributeref: primary DOT ID\n";}
			|ID DOT ID		{Streams::verbose()<<"attributeref: ID DOT ID\n";}
;

primary: 	atom 	{Streams::verbose()<<"primary: 	atom\n";}
			| attributeref	{Streams::verbose()<<"primary:	attributeref\n";}
            | subscription 	{Streams::verbose()<<"primary:	subscription\n";}
			| call	{Streams::verbose()<<"primary:	call\n";} //must continue
;

atom:		 enclosure	{Streams::verbose()<<"atom:	enclosure\n";}
			|literal {Streams::verbose()<<"atom:	literal\n";	}
;

literal:    STRING_VALUE 	{Streams::verbose()<<"literal:    STRING_VALUE\n";}
			| INTEGER_VALUE 	{Streams::verbose()<<"literal:	INTEGER_VALUE\n";}
			| LONG_VALUE	{Streams::verbose()<<"literal:	LONG_VALUE\n";}
            | FLOAT_VALUE 	{Streams::verbose()<<"literal:	FLOAT_VALUE\n";}
			| CHAR_VALUE	{Streams::verbose()<<"literal:	CHAR_VALUE\n";}
;

enclosure:	parenth_form 	{Streams::verbose()<<"enclosure:	parenth_form\n";}
			| list_display	{Streams::verbose()<<"enclosure:	list_display\n";}
            | string_conversion	{Streams::verbose()<<"enclosure:	string_conversion\n";} 
			| yield_atom	{Streams::verbose()<<"enclosure:	yield_atom\n";}
			| dict_display  {Streams::verbose()<<"enclosure:	dict_display\n";}
;

dict_display:	OPEN_C CLOSE_C  {Streams::verbose()<<"dict_display: OPEN_C CLOSE_C \n";}
				|OPEN_C key_datum_list CLOSE_C {Streams::verbose()<<"dict_display: OPEN_C key_datum_list CLOSE_C \n";}
  
key_datum_list: key_datum_list COMMA key_datum  {Streams::verbose()<<"key_datum_list: key_datum_list COMMA key_datum \n";}
				|key_datum_list COMMA {Streams::verbose()<<"key_datum_list: key_datum_list COMMA\n";}
				|key_datum {Streams::verbose()<<"key_datum_list: key_datum\n";}
  
key_datum :		expr COLON expr {Streams::verbose()<<"key_datum : expr COLON expr\n";}				


parenth_form : 	OPEN_S expr_list CLOSE_S	{Streams::verbose()<<"parenth_form : 	OPEN_S expr_list CLOSE_S\n";}
				|OPEN_S  CLOSE_S	{Streams::verbose()<<"parenth_form : 	OPEN_S  CLOSE_S\n";}				
				|error CLOSE_S	{
										Streams::verbose()<<"Error: Expected '(' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1-1<<endl;
										err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-1,"Expected '(' ","");
								}				
				|OPEN_S error	{
										Streams::verbose()<<"Error: Expected ')' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1+1<<endl;
										err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1+1,"Expected ')' ","");
										}
				|error expr CLOSE_S  {
													Streams::verbose()<<"Error: Expected '(' at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.colNum>1-strlength($<r.strVal>1)<<endl;
													err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlength($<r.strVal>1)," Expected '(' ","");
												 }
				|OPEN_S expr_list error {
													Streams::verbose()<<"Error: Expected ')' at Line No:"<<$<r.lineNum>1<<" Column No:"<<yylval.r.colNum-strlength(yylval.r.strVal)<<endl;
													err->errQ->enqueue($<r.lineNum>1,yylval.r.colNum-strlength(yylval.r.strVal)," Expected ')' ","");
												 }

;

list_display:	OPEN_D  expr_list CLOSE_D	{Streams::verbose()<<"list_display:	OPEN_D  expr_list CLOSE_D\n";}
				|OPEN_D CLOSE_D	{Streams::verbose()<<"list_display:	OPEN_D CLOSE_D\n";}
;

string_conversion:	RE_COT expr_list RE_COT	{Streams::verbose()<<"string_conversion:	RE_COT expr_list RE_COT\n";}
;

yield_atom:		OPEN_S yield_expression CLOSE_S		{Streams::verbose()<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";}
;

yield_expression:	YIELD	{Streams::verbose()<<"yield_expression:	YIELD\n";}
					|YIELD expr_list	{Streams::verbose()<<"yield_expression:	YIELD expr_list\n";}
;

subscription:	PRIMARY OPEN_D expr_list CLOSE_D	{Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";}				
				//|ID OPEN_D expr_list CLOSE_D	{Streams::verbose()<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";}//add this error
;

call:	PRIMARY OPEN_D args_list CLOSE_D	{Streams::verbose()<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";}
		|PRIMARY OPEN_D ID CLOSE_D	{Streams::verbose()<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";}
		//|error ID OPEN_D ID CLOSE_D	{Streams::verbose()<<"call:	ID OPEN_D ID CLOSE_D\n";}//add this error
;

expr:	condition 	{Streams::verbose()<<"expr:	condition\n";}
		|literal %prec stmt_9	{Streams::verbose()<<"expr:	literal\n";}
		|expr op expr %prec stmt_1{Streams::verbose()<<"expr:	expr op expr\n";}
		|SELF DOT ID	 %prec stmt_7{
									Streams::verbose()<<"expr:	self.id\n";
									$<var>$=p->checkVariable($<r.strVal>3,t, yylval.r.lineNum, yylval.r.colNum,true);
																		v=$<var>$;
																		acc_mod="";
									}
		|SELF DOT ID parenth_form   {
										Streams::verbose()<<"expr:	self.id()\n";
										p->insert_func_Call(t,$<r.strVal>3,yylval.r.lineNum, yylval.r.colNum);
										cout<<"hhhhhhhhh"<<endl;
									}
		|long_id	%prec stmt_3{
									Streams::verbose()<<"expr:	long_id\n";
									
									}
	
		|expr error expr %prec stmt_2 {
										Streams::verbose()<<"Error: Expected operand at Line No:"<<$<r.lineNum>1<<" Column No:"<<$<r.lineNum>2-strlength($<r.strVal>2)<<endl;
										err->errQ->enqueue($<r.lineNum>2,$<r.colNum>2-strlen($<r.strVal>2),"Expected operand ","");
									  }
;

condition:  expr EQUAL expr			{Streams::verbose()<<"condition: expr EQUAL expr\n";}
		|expr NOT_EQUAL expr		{Streams::verbose()<<"condition: expr NOT_EQUAL expr\n";}
		|expr LESS_THAN expr		{Streams::verbose()<<"condition: expr LESS_THAN expr\n";}
		|expr LESS_OR_EQUAL expr	{Streams::verbose()<<"condition: expr LESS_OR_EQUAL expr\n";}
		|expr MORE_THAN expr		{Streams::verbose()<<"condition: expr MORE_THAN expr\n";}
		|expr MORE_OR_EQUAL expr	{Streams::verbose()<<"condition: expr MORE_OR_EQUAL expr\n";}
;
id_dot : ID %prec stmt_8 {Streams::verbose()<<"id_dot:	ID\n";
								temp_id=temp_id+$<r.strVal>1;
							}
		 |id_dot DOT ID {Streams::verbose()<<"id_dot:	id_dot DOT ID\n";temp_id=temp_id+"."+$<r.strVal>3;}
		 ;

long_id: //ID	%prec stmt_8				{Streams::verbose()<<"long_id:	ID\n";}
		 //|ID OPEN_S CLOSE_S				{Streams::verbose()<<"long_id:	ID OPEN_S CLOSE_S\n";}
		 //|ID OPEN_S expr_list CLOSE_S	{Streams::verbose()<<"long_id:	ID OPEN_S expr_list CLOSE_S\n";}		 		 
		 //|long_id DOT ID				{Streams::verbose()<<"long_id:	long_id DOT ID\n";}
		 //|long_id DOT ID OPEN_S CLOSE_S				{Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S CLOSE_S\n";}
		 //|long_id DOT ID OPEN_S expr_list CLOSE_S	{Streams::verbose()<<"long_id:	long_id DOT ID OPEN_S expr_list CLOSE_S\n";}		 		 
		id_dot %prec stmt_1 {Streams::verbose()<<"long_id:	id_dot\n";
										$<var>$=p->checkVariable(const_cast<char *>(temp_id.c_str()),t, yylval.r.lineNum, yylval.r.colNum);
										v=$<var>$;
										temp_id="";
								}		 		 
		|id_dot parenth_form {Streams::verbose()<<"long_id:	id_dot parenth_form\n";}		 		 
		|id_dot OPEN_D expr CLOSE_D {Streams::verbose()<<"long_id:	id_dot OPEN_D expr CLOSE_D\n";}
		|id_dot OPEN_D expr COLON expr CLOSE_D {Streams::verbose()<<"long_id:	id_dot OPEN_D expr COLON expr CLOSE_D\n";}
		|id_dot OPEN_D COLON CLOSE_D {Streams::verbose()<<"long_id:	id_dot OPEN_D COLON CLOSE_D\n";}
;

op: PLUS				{Streams::verbose()<<"op :PLUS\n";}
	|MINUS				{Streams::verbose()<<"op :MINUS\n";}
	|DIV				{Streams::verbose()<<"op :DIV\n";}
	|MOD				{Streams::verbose()<<"op :MOD\n";}
	|OR					{Streams::verbose()<<"op :OR\n";}
	|NOT				{Streams::verbose()<<"op :NOT\n";}
	|AND				{Streams::verbose()<<"op :AND\n";}
;
%%
void yyerror(const char *s) 
{
	Program::addError(new SyntaxError(s));
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
	//addFile(input);
	sourceFile=input;
	ifstream inf(input);
	lexer = new yyFlexLexer(&inf);
	Parser* p = new Parser();
	p->parse();
	//Program::printErrors();
	err->printErrQueue();
	system("pause");
}