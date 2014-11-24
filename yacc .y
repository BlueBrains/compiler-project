%output ="yacc.cpp"
%{
	#include <iostream>
	#include <FlexLexer.h>
	#include "ErrorRevovery.h"
	using namespace std;
	int yylex(void);
	int yyparse();
	void yyerror(char *);
	int lineno=0,colnumber=0;
	ErrorRecovery* err=new ErrorRecovery();
	FlexLexer* lexer = new yyFlexLexer();
	
	class Parser
	{
		public:
		int	parse()
		{
			return yyparse();
		}
	};
%}		


%union{
	struct R{
		int intVal;
		float floatVal;
		char charVal;
		char* strVal;
		int myLineNo;
		int myColno;
	}r;
}


%start program
%token	IMPORT CLASS ID SEMI_COLUMN CLOSE_S COMMA DOT ID BEGIN END
%token	DEF ASSIGN STAR ELSE IF ELIF WHILE FOR IN TRY FINALLY
%token	EXPECT WITH AS ASSERT EQUAL DEL RETURN PRINT GLOBAL
%token	RAISE PRIVATE PUBLIC PROTECTED OPEN_D CLOSE_D  RE_COT YIELD
%token	PRIMARY OR AND NOT PLUS MINUS DIV MOD NOT_EQUAL
%token	LESS_THAN LESS_OR_EQUAL MORE_THAN MORE_OR_EQUAL TRUE FALSE XOR XNOT EXCEPT
%token  NEW_LINE PASS CHAR_VALUE OPEN_S STRING_VALUE INTEGER_VALUE BREAK CONTINUE LONG_VALUE FLOAT_VALUE
%left OR
%left AND
%left NOT
%left  NOT_EQUAL EQUAL LESS_THAN LESS_OR_EQUAL  MORE_THAN MORE_OR_EQUAL
%left PLUS MINUS
%left MULTI DIV MOD FLOOR
%left  XNOT
%nonassoc stmt_1_2
%nonassoc stmt_1 stmt_2 stmt_3 stmt_4 stmt_5 stmt_6 stmt_7
%nonassoc ELSE ELIF FINALLY EXPECT DOT
%nonassoc ID BEGIN IF WHILE FOR TRY WITH ASSERT DEL RETURN PRINT GLOBAL RAISE OPEN_D RE_COT YIELD PRIMARY   PASS CHAR_VALUE OPEN_S CLOSE_S STRING_VALUE INTEGER_VALUE BREAK CONTINUE LONG_VALUE FLOAT_VALUE    


%%
program: units	{                    cout <<"prgram : Units\n";
                    if(!err->errQ->isEmpty())						   
				    err->printErrQueue();
					}
;
units: units unit	{cout<<"units: unit\n";}
		| unit	{cout<<"units: unit\n";}
;
unit: IMPORT import_list class_decl	{;}
		| class_decl				{;}
;

class_decl: class_h class_body	{cout <<"class_decl: class_h class_body\n";}
;
class_h: CLASS ID SEMI_COLUMN	{cout << "class_h: CLASS ID SEMI_COLUMN\n";}//class X :
		|CLASS ID OPEN_S CLOSE_S SEMI_COLUMN//class X ():
		{;}
		|CLASS ID OPEN_S expr_list CLOSE_S SEMI_COLUMN	
		//class X (A,B,T): OR class X(A):
		{cout << "class_h:CLASS ID OPEN_S expr_list CLOSE_S SEMI_COLUMN\n";}
		|CLASS SEMI_COLUMN	{
				    
									err->errQ->enqueue($<r.myLineNo>2,($<r.myColNo>2-strlen($<r.myColNo>2),"CLASS NAME IS NOT FOUND ","");
		}
		|ID ID SEMI_COLUMN   {
									err->errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1-strlen($<r.myColNo>1),"REServed WORD CLASS NOT FOUND ","");
							 }
		|ID SEMI_COLUMN  {
		                  err->errQ->enqueue($<r.myLineNo>2,$<r.myColNo>1-strlen($<r.myColNo>1),"REServed WORD CLASS NOT FOUND ","");
						 }
		|CLASS ID %prec stmt_1 {
		            err->errQ->enqueue($<r.myLineNo>2,$<r.myColNo>2,"ERROR: SEMI_COLUMN NOT FOUND","");
		           }
		
;
expr_list: expr_list COMMA expr	{;}
			|expr %prec stmt_1	{;}
;				
//A.B.C , X.T.F->import_list
import_list: import_list COMMA import	{;}
			//A.B.C , X.Y.T, S.D.A
			|import	{;}
;


/*A.B.C.H
reduce->import
				  B
				  DOT
Stack:A->reduce:import
			A
*/

import: import DOT ID	{;}//A.B
		|ID	%prec stmt_5{;}//A
		//A->import . B -> import . C->import
;

class_body: END		{cout<<"class_body: END	\n";}//may begin will be deleted
			|dm_list END	{;}
;
dm_list: dm_list DEF dm	{;}
			|DEF dm	{;}
;
dm: var_declaration	{;}
	|method_declaration	{;}
	|class_decl	{;}
;
var_declaration: access_modef ID 	{;}//public x
				|ID	{;}					//x
				|access_modef ID ASSIGN expr	{;}//private x = 10
				|ID ASSIGN expr	{;}//x = 5
				|access_modef ID ID {err->errQ->enqueue($<r.myLineNo>2,$<r.myColNo>3-strlen($<r.myColNo>3),"unexpected Id ","");}
				|ID ID  {err->errQ->enqueue($<r.myLineNo>2,$<r.myColNo>2-strlen($<r.myColNo>2),"unexpected id ","");}
;
method_declaration: method_h block_stmt	{;}
;
method_h: 	access_modef ID OPEN_S args_list CLOSE_S SEMI_COLUMN	{;}
			|ID OPEN_S args_list CLOSE_S SEMI_COLUMN	{;}
			|access_modef ID OPEN_S  CLOSE_S SEMI_COLUMN	{;}
			|ID OPEN_S CLOSE_S SEMI_COLUMN	{;}
			|access_modef OPEN_S args_list CLOSE_S SEMI_COLUMN {err->errQ->enqueue($<r.myLineNo>2,$<r.myColNo>2-strlen($<r.myColNo>2),"Expected ID ","");s}
			|OPEN_S args_list CLOSE_S SEMI_COLUMN {err->errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1-strlen($<r.myColNo>1),"Expected ID ","");s}
			|access_modef ID args_list CLOSE_S SEMI_COLUMN {err->errQ->enqueue($<r.myLineNo>3,$<r.myColNo>3-strlen($<r.myColNo>3),"Expected ( ","");s}
			|access_modef ID OPEN_S args_list SEMI_COLUMN  {err->errQ->enqueue($<r.myLineNo>1,$<r.myColNo>5-strlen($<r.myColNo>5),"Expected ( ","");s}
			|access_modef ID OPEN_S args_list CLOSE_S %prec stmt_1  {err->errQ->enqueue($<r.myLineNo>1,$<r.myColNo>5-strlen($<r.myColNo>5),"Expected : ","");s}

			;//storage final const polymorephsim	
args_list: args_list COMMA arg	{;}
	| arg	{;}
;
arg: ID	{;}
	| STAR ID		{;}
	|ID ASSIGN expr	{;}
	| STAR ID ASSIGN expr	{;}
;
block_stmt: BEGIN END	{;}
			|BEGIN stmt_list END	{;}
	;
stmt_list: stmt_list stmt	{;}
			|stmt	{;}
;
stmt: 			if_stmt	{;}
                | while_stmt	{;}
                | for_stmt	{;}
                | try_stmt	{;}
                | with_stmt	{;}
				|block_stmt %prec stmt_4	{;}
				|simple_stmt_list	{;}
;
if_stmt: if_header stmt %prec stmt_3	{;}
		|if_header stmt ELSE stmt	{;}
		|if_header stmt elif_stmt %prec stmt_6	{;}
		|if_header stmt elif_stmt ELSE stmt	{;}
		//|if_header block_stmt	{;}
		//|if_header block_stmt ELSE stmt	{;}
		//|if_header stmt ELSE block_stmt	{;}
		//|if_header block_stmt ELSE block_stmt	{;}
		//|if_header block_stmt elif_stmt	{;}
		//|if_header block_stmt elif_stmt ELSE stmt	{;}
		//|if_header stmt elif_stmt ELSE block_stmt	{;}
		//|if_header block_stmt elif_stmt ELSE block_stmt	{;}
		
;

elif_stmt: 	elif_header stmt elif_stmt	{;}
			|elif_header stmt %prec stmt_7	{;}
			//|elif_header block_stmt	elif_stmt	{;}
			//|elif_header block_stmt	{;}
			
;
if_header:	IF expr SEMI_COLUMN	{;}//if(x > y):
			|IF expr %prec stmt_1 { err->errQ->enqueue($<r.myLineNo>2,$<r.myColNo>2,"ERROR: Expected :","");}
;
elif_header: ELIF expr SEMI_COLUMN	{;}
;
while_stmt: while_header stmt	{;}
			//|while_header block_stmt	{;}
			

;
while_header: WHILE expr SEMI_COLUMN	{;}
			|ID expr SEMI_COLUMN { err->errQ->enqueue($<r.myLineNo>2,$<r.myColNo>1-strlen($<r.myColNo>1),"ERROR: unexpected ID","");}
			|WHILE expr %prec stmt_1  {err->errQ->enqueue($<r.myLineNo>2,$<r.myColNo>1,"ERROR: Expected :","");}
;
for_stmt: 	for_header stmt	{;}
			//|for_header block_stmt	{;}
;
for_header: FOR target_list IN expr_list	{;}
			|ID target_list IN expr_list {err->errQ->enqueue($<r.myLineNo>2,$<r.myColNo>1-strlen($<r.myColNo>1),"REServed WORD FOR Expected ","");}
;
target_list: target_list COMMA target	{;}
			|target	{;}
;
try_stmt: 	TRY SEMI_COLUMN stmt except_stmt	{;}
			|TRY SEMI_COLUMN stmt finally_stmt	{;}
			|TRY SEMI_COLUMN block_stmt except_stmt	{;}
			|TRY SEMI_COLUMN block_stmt finally_stmt	{;}
;
finally_stmt: 	//FINALLY SEMI_COLUMN stmt	{;}
				FINALLY SEMI_COLUMN block_stmt	{;}
;
except_stmt: EXCEPT SEMI_COLUMN stmt	{;}
			//|EXCEPT SEMI_COLUMN block_stmt	{;}
			|EXCEPT SEMI_COLUMN expr stmt	{;}
			//|EXCEPT SEMI_COLUMN expr COMMA target block_stmt	{;}
;
with_stmt:	WITH expr SEMI_COLUMN 	{;}
			|WITH expr AS target SEMI_COLUMN 	{;}
;
simple_stmt_list: 	expr_list	{;}
					| assert_stmt	{;}
					| assignment_stmt	{;}
					//| augmented_assignment_stmt	{;}
					| PASS	{;}
					| del_stmt	{;}
					| print_stmt	{;}
					| return_stmt	{;}
					| yield_stmt	{;}
					| raise_stmt	{;}
					| BREAK	{;}
					| CONTINUE	{;}
					| import_list	{;}
					| global_stmt	{;}
					
;
assert_stmt: 	ASSERT expr {;}
				|ASSERT expr COMMA expr	{;}
;
assignment_stmt:	target_list EQUAL expr_list 	{;}
					|target_list EQUAL yield_expression	{;}
;

del_stmt: DEL target_list	{;}
;
return_stmt:	RETURN	{;}
				|RETURN expr_list	{;}
;
yield_stmt:    yield_expression	{;}
;
print_stmt: PRINT expr_list	{;}
			|PRINT MORE_THAN MORE_THAN expr_list	{;}
			|ID expr_list {err->errQ->enqueue($<r.myLineNo>2,$<r.myColNo>1-strlen($<r.myColNo>1),"Unexpected ID ","");}
;
global_stmt :GLOBAL id_list	{;}
			|GLOBAL %prec stmt_1 {err->errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"expected ID ","");}
;
id_list: 	ID COMMA id_list	{;}
			|ID	{;}
;
raise_stmt: RAISE	{;}
			|RAISE expr	{;}
			|RAISE expr COMMA expr	{;} //must continue
			|RAISE expr COMMA %prec stmt_1	{err->errQ->enqueue($<r.myLineNo>1,$<r.myColNo>3,"expresion expected ","");}
;
access_modef: 	PRIVATE 	{;}
				|PUBLIC	{;}
				|PROTECTED	{;}
;
target: 	ID	{;}
            |OPEN_S target_list CLOSE_S 	{;}//(
            |OPEN_D  target_list CLOSE_D 	{;}//[
            |attributeref	{;}
            |subscription	{;}
            
;
attributeref: primary DOT ID	{;}
			  |ID DOT ID	{;}
;
primary: 	atom 	{;}
			| attributeref	{;}
            | subscription 	{;}
			| call	{;} //must continue
;
atom:
			literal 	{;}
			| enclosure	{;}
;
literal:    STRING_VALUE 	{;}
			| INTEGER_VALUE 	{;}
			| LONG_VALUE	{;}
            | FLOAT_VALUE 	{;}
			| CHAR_VALUE	{;}
;
enclosure: parenth_form 	{;}
			| list_display	{;}
            | string_conversion	{;} 
			| yield_atom	{;}
;
parenth_form : 	OPEN_S expr CLOSE_S	{;}
				|OPEN_S  CLOSE_S	{;}
				|OPEN_S expr %prec stmt_1	{err->errQ->enqueue($<r.myLineNo>1,$<r.myColNo>2," expected ) ","");}
				|OPEN_S %prec stmt_1_2	{err->errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1," expected ) ","");}
				|expr CLOSE_S %prec stmt_1	{err->errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1," expected ( ","");}

;
list_display:	OPEN_D  expr_list CLOSE_D	{;}
;
string_conversion:	RE_COT expr_list RE_COT	{;}
;
yield_atom:		OPEN_S yield_expression CLOSE_S		{;}
;
yield_expression:	YIELD	{;}
					|YIELD expr_list	{;}
;
subscription: PRIMARY OPEN_D expr_list CLOSE_D	{;}
;
call:	PRIMARY OPEN_D args_list CLOSE_D	{;}
;
expr:	condition 	{;}
		|literal	{;}
		|expr op expr %prec stmt_1{;}
		|long_id	{;}
		|expr expr %prec stmt_2 {err->errQ->enqueue($<r.myLineNo>2,$<r.myColNo>2-strlen($<r.myColNo>2),"Expected op ","");}
;
condition:  expr EQUAL expr			{cout<<" : \n";}
		|expr NOT_EQUAL expr		{cout<<" : \n";}
		|expr LESS_THAN expr		{cout<<" : \n";}
		|expr LESS_OR_EQUAL expr	{cout<<" : \n";}
		|expr MORE_THAN expr		{cout<<" : \n";}
		|expr MORE_OR_EQUAL expr	{cout<<" : \n";}
;
long_id: ID				{cout<<" : \n";}
		 |ID OPEN_S CLOSE_S				{cout<<" : \n";}
		 |ID OPEN_S expr_list CLOSE_S	{cout<<" : \n";}
		 |ID OPEN_S expr	  CLOSE_S	{cout<<" : \n";}
		 |long_id DOT ID	{cout<<" : \n";}
		 |long_id DOT ID OPEN_S CLOSE_S				{cout<<" : \n";}
		 |long_id DOT ID OPEN_S expr_list CLOSE_S	{cout<<" : \n";}
		 |long_id DOT ID OPEN_S expr	  CLOSE_S	{cout<<" : \n";}
;
op: PLUS				{cout<<" : \n";}
	|MINUS				{cout<<" : \n";}
	|DIV				{cout<<" : \n";}
	|MOD				{cout<<" : \n";}
	|OR					{cout<<" : \n";}
	|NOT				{cout<<" : \n";}
	|STAR				{cout<<" : \n";}
	|AND	{;}
	|XOR {;}
;
%%
void yyerror(char *s) 
{
	;
}

int yylex()
{
	return lexer->yylex();

}
void main(void)
{
	Parser* p = new Parser();
	p->parse();
	
}