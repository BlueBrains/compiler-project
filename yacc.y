%output ="yacc.cpp"
%{
	#include <iostream>
	#include <FlexLexer.h>
	#include <stack>
	#include "ErrorRevovery.h"
	#include <set>
	using namespace std;
	int yylex(void);
	int yyparse();
	void yyerror(char *);
	int lineno=0,colnumber=0;
	ErrorRecovery* err=new ErrorRecovery();
	FlexLexer* lexer = new yyFlexLexer();
	char* i_type;
	char* acc_mod;
	vector<char *>inhertance_list;
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
		int lineNum;
		int colNum;
	}r;
}


%start program
%token	IMPORT CLASS ID SEMI_COLUMN CLOSE_S COMMA DOT ID _BEGIN END
%token	DEF ASSIGN STAR ELSE IF ELIF WHILE FOR IN TRY FINALLY MULTI
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
%nonassoc stmt_1 stmt_2 stmt_3 stmt_4 stmt_5 stmt_6 stmt_7 stmt_8
%nonassoc ELSE ELIF FINALLY EXCEPT DOT
%nonassoc ID _BEGIN IF WHILE FOR TRY WITH ASSERT DEL RETURN PRINT GLOBAL RAISE OPEN_D RE_COT YIELD PRIMARY   PASS CHAR_VALUE OPEN_S CLOSE_S STRING_VALUE INTEGER_VALUE BREAK CONTINUE LONG_VALUE FLOAT_VALUE COMMA


%%
program: units	{                    cout <<"prgram : Units\n";
                    if(!err->errQ->isEmpty())						   
				    err->printErrQueue();
					//amer
					}
;
units: units unit	{cout<<"units: unit\n";}
		| unit	{cout<<"units: unit\n";}
;

unit:	IMPORT import_list class_decl	{cout<<"unit: IMPORT import_list class_decl\n";}
		|IMPORT ID class_decl	{cout<<"unit: IMPORT ID class_decl\n";}
		|IMPORT ID DOT ID class_decl	{cout<<"unit: IMPORT ID DOT ID class_decl\n";}
		| class_decl				{cout<<"unit: class_decl\n";}
;

class_decl: class_h class_body	{cout <<"class_decl: class_h class_body\n";}
;
class_h: CLASS ID SEMI_COLUMN	{cout << "class_h: CLASS ID SEMI_COLUMN\n";$<type>$ = p->createType($<r.str>2,null, yylval.r.myLineNo, yylval.r.myColno);}//class X :
		|CLASS ID OPEN_S CLOSE_S SEMI_COLUMN//class X ():
		{$<type>$ = p->createType($<r.str>2,null, yylval.r.myLineNo, yylval.r.myColno);}


		|CLASS ID OPEN_S inherted_list CLOSE_S SEMI_COLUMN	
		//class X (A,B,T): OR class X(A):
		{cout << "class_h:CLASS ID OPEN_S expr_list CLOSE_S SEMI_COLUMN\n";
			$<type>$ = p->createType($<r.str>2,inhertance_list, yylval.r.myLineNo, yylval.r.myColno);
			inhertance_list.clear();
		}
		|CLASS SEMI_COLUMN	{
				    
									err->errQ->enqueue($<r.lineNum>2,$<r.colNum>2-strlen($<r.strVal>2),"CLASS NAME IS NOT FOUND ","");
		}
		|ID ID SEMI_COLUMN   {
									err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlen($<r.strVal>1),"REServed WORD CLASS NOT FOUND ","");
							 }
		|ID SEMI_COLUMN  {
		                  err->errQ->enqueue($<r.lineNum>2,$<r.colNum>1-strlen($<r.strVal>1),"REServed WORD CLASS NOT FOUND ","");
						 }
		|CLASS ID %prec stmt_1 {
		            err->errQ->enqueue($<r.lineNum>2,$<r.colNum>2,"ERROR: SEMI_COLUMN NOT FOUND","");
		           }
		
;
inherted_list:	inherted_list COMMA ID	{inhertance_list.push_back($<r.text>3);}
				|ID {inhertance_list.push_back($<r.text>1);}


expr_list:	expr_list COMMA expr	{;}
			|expr %prec stmt_1	{;}
;				

//A.B.C , X.T.F->import_list
import_list:	import_list COMMA import	{cout<<"import_list:	import_list COMMA import\n";}
				|ID DOT ID  COMMA import	{cout<<"import_list:	ID DOT ID  COMMA import\n";}
				|import_list COMMA ID DOT ID {cout<<"import_list:	import_list COMMA ID DOT ID\n";}
				|import_list COMMA ID	%prec stmt_2{cout<<"import_list:	|import_list COMMA ID\n";}
				|ID DOT ID COMMA ID DOT ID {cout<<"import_list:	ID DOT ID COMMA ID DOT ID\n";}
				|ID DOT ID COMMA ID	%prec stmt_1{cout<<"import_list:	ID DOT ID COMMA ID\n";}
				|ID COMMA import	{cout<<"import_list:	ID COMMA import\n";}
				|ID COMMA ID DOT ID	{cout<<"import_list:	ID COMMA ID DOT ID"\n;}
				|ID COMMA ID %prec stmt_4	{cout<<"import_list:	ID COMMA ID\n";}
			//A.B.C , X.Y.T, S.D.A
			|import	{cout<<"import_list:	import\n";}
;


/*A.B.C.H
reduce->import
				  B
				  DOT
Stack:A->reduce:import
			A
*/

import: import DOT ID	{cout<<"import DOT ID\n";}//A.B
		| ID DOT ID DOT ID {cout<<"import:	ID DOT ID DOT ID;"}
		//A->import . B -> import . C->import
;

class_body: END		{cout<<"class_body: END	\n";}//may begin will be deleted
			|dm_list END	{cout<<"class_body: dm_list END\n";}
;

dm_list:	dm_list DEF dm	{cout<<"dm_list:	dm_list DEF dm\n";}
			|DEF dm	{cout<<"dm_list:	DEF dm\n";}
			|dm    {err->errQ->enqueue($<r.lineNum>2,$<r.colNum>2,"ERROR: DEF not FOUND","");}
;

dm: var_declaration	{cout<<"dm:	var_declaration\n";}
	|method_declaration	{cout<<"dm:	var_declaration\n";}
	|class_decl	{cout<<"dm:	class_decl\n";}
;

var_declaration: access_modef ID 	{cout<<"var_declaration: access_modef ID\n";
										$<var>$ = p->insertVar($<r.str>2,null,acc_mod, yylval.r.myLineNo, yylval.r.myColno);
									}//public x
				|ID					{cout<<"var_declaration: ID\n";
											$<var>$ = p->insertVar($<r.str>2,null,"", yylval.r.myLineNo, yylval.r.myColno);
									}					//x
				|access_modef ID ASSIGN expr	{cout<<"var_declaration: access_modef ID ASSIGN expr\n";
														$<var>$ = p->insertVar($<r.str>2,null,acc_mod, yylval.r.myLineNo, yylval.r.myColno);
														//assigment staement
													}//private x = 10
				|ID ASSIGN expr	{cout<<"var_declaration:	ID ASSIGN expr\n";
									$<var>$ = p->insertVar($<r.str>2,null,"", yylval.r.myLineNo, yylval.r.myColno);
								}//x = 5
				|access_modef ID ID {err->errQ->enqueue($<r.lineNum>2,$<r.colNum>3-strlen($<r.strVal>3),"unexpected Id ","");}
				|ID ID  {err->errQ->enqueue($<r.lineNum>2,$<r.colNum>2-strlen($<r.strVal>2),"unexpected id ","");}
;

method_declaration: method_h block_stmt	{cout<<"method_declaration: method_h block_stmt\n";}
;

method_h: 	access_modef ID OPEN_S args_list CLOSE_S SEMI_COLUMN	{cout<<"method_h: 	access_modef ID OPEN_S args_list CLOSE_S SEMI_COLUMN/n";}
			|access_modef ID OPEN_S ID CLOSE_S SEMI_COLUMN	{cout<<"method_h:	access_modef ID OPEN_S ID CLOSE_S SEMI_COLUMN/n";}
			|ID OPEN_S args_list CLOSE_S SEMI_COLUMN	{cout<<"method_h:	ID OPEN_S args_list CLOSE_S SEMI_COLUMN/n";}
			|ID OPEN_S ID CLOSE_S SEMI_COLUMN		{cout<<"method_h:	ID OPEN_S ID CLOSE_S SEMI_COLUMN/n";}
			|access_modef ID OPEN_S  CLOSE_S SEMI_COLUMN	{cout<<"method_h:	access_modef ID OPEN_S  CLOSE_S SEMI_COLUMN/n";}
			|ID OPEN_S CLOSE_S SEMI_COLUMN	{cout<<"method_h:	ID OPEN_S CLOSE_S SEMI_COLUMN/n";}
			|access_modef OPEN_S args_list CLOSE_S SEMI_COLUMN {err->errQ->enqueue($<r.lineNum>2,$<r.colNum>2-strlen($<r.strVal>2),"Expected ID ","");}
			|OPEN_S args_list CLOSE_S SEMI_COLUMN {err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1-strlen($<r.strVal>1),"Expected ID ","");}
			|access_modef ID args_list CLOSE_S SEMI_COLUMN {err->errQ->enqueue($<r.lineNum>3,$<r.colNum>3-strlen($<r.strVal>3),"Expected ( ","");}
			|access_modef ID OPEN_S args_list SEMI_COLUMN  {err->errQ->enqueue($<r.lineNum>1,$<r.colNum>5-strlen($<r.strVal>5),"Expected ( ","");}
			|access_modef ID OPEN_S args_list CLOSE_S %prec stmt_1  {err->errQ->enqueue($<r.lineNum>1,$<r.colNum>5-strlen($<r.strVal>5),"Expected : ","");}

			;//storage final const polymorephsim	

args_list:	args_list COMMA arg	{cout<<"args_list:	args_list COMMA arg/n";}
			|ID COMMA arg {cout<<"args_list:	ID COMMA arg/n";}
			|args_list COMMA ID {cout<<"args_list:	args_list COMMA ID/n";}
			|ID COMMA ID {cout<<"args_list:	ID COMMA ID/n";}
			|arg	{cout<<"args_list:	arg/n";}
;

arg:	STAR ID		{cout<<"arg:	STAR ID/n";}
		| ID ASSIGN expr	{cout<<"arg:	ID ASSIGN expr/n";}
	| STAR ID ASSIGN exp	{cout<<"arg:	STAR ID ASSIGN exp/n";}
;

block_stmt: _BEGIN END	{cout<<"block_stmt: _BEGIN END/n";}
			|_BEGIN stmt_list END	{cout<<"block_stmt:	_BEGIN stmt_list END/n";}
	;

stmt_list:	stmt_list stmt	{cout<<"stmt_list:	stmt_list stmt/n";}
			|stmt	{cout<<"stmt_list:	stmt/n";}
;

stmt: 			if_stmt	{cout<<"stmt: 			if_stmt/n";}
                | while_stmt	{cout<<"stmt:	while_stmt/n";}
                | for_stmt	{cout<<"stmt:	for_stmt/n";}
                | try_stmt	{cout<<"stmt:	try_stmt/n";}
                | with_stmt	{cout<<"stmt:	with_stmt/n";}
				|block_stmt %prec stmt_4	{cout<<"stmt:	block_stmt/n";}
				|simple_stmt_list	{cout<<"stmt:	simple_stmt_list/n";}
;

if_stmt:	if_header stmt %prec stmt_3	{cout<<"if_stmt:	if_header stmt/n";}
		|if_header stmt ELSE stmt	{cout<<"if_stmt:	if_header stmt ELSE stmt/n";}
		|if_header stmt elif_stmt %prec stmt_6	{cout<<"if_stmt:	if_header stmt elif_stmt/n";}
		|if_header stmt elif_stmt ELSE stmt	{cout<<"if_stmt:	if_header stmt elif_stmt ELSE stmt/n";}
;

elif_stmt: 	elif_header stmt elif_stmt	{cout<<"elif_stmt: 	elif_header stmt elif_stmt/n";}
			|elif_header stmt %prec stmt_7	{cout<<"elif_stmt:	elif_header stmt/n";}
;

if_header:	IF expr SEMI_COLUMN	{cout<<"if_header:	IF expr SEMI_COLUMN/n";}//if(x > y):
			|IF expr %prec stmt_1 { err->errQ->enqueue($<r.lineNum>2,$<r.colNum>2,"ERROR: Expected :","");}
;

elif_header:	ELIF expr SEMI_COLUMN	{cout<<"elif_header:	ELIF expr SEMI_COLUMN/n";}
;

while_stmt: while_header stmt	{cout<<"while_stmt: while_header stmt/n";}
			;


;
while_header: WHILE expr SEMI_COLUMN	{cout<<"while_header: WHILE expr SEMI_COLUMN/n";}
			|ID expr SEMI_COLUMN { err->errQ->enqueue($<r.lineNum>2,$<r.colNum>1-strlen($<r.strVal>1),"ERROR: unexpected ID","");}
			|WHILE expr %prec stmt_1  {err->errQ->enqueue($<r.lineNum>2,$<r.colNum>1,"ERROR: Expected :","");}
;

for_stmt: 	for_header stmt	{cout<<"for_stmt: 	for_header stmt/n";}
;

for_header: FOR target_list IN expr_list	{cout<<"for_header: FOR target_list IN expr_list/n";}
			|FOR ID COMMA ID IN expr_list	{cout<<"for_header:	FOR ID COMMA ID IN expr_list/n";}
			|FOR ID IN expr_list	{cout<<"for_header:	FOR ID IN expr_list/n";}
			|ID target_list IN expr_list {err->errQ->enqueue($<r.lineNum>2,$<r.colNum>1-strlen($<r.strVal>1),"REServed WORD FOR Expected ","");}
;

target_list:	target_list COMMA target	{cout<<"target_list:	target_list COMMA target/n";}
				|ID COMMA ID COMMA target	{cout<<"target_list:	ID COMMA ID COMMA target/n";}
				|target_list COMMA ID	{cout<<"target_list:	target_list COMMA ID/n";}
				|ID COMMA ID COMMA ID	{cout<<"target_list:	ID COMMA ID COMMA ID/n";}
				|ID COMMA target	{cout<<"target_list:	ID COMMA target/n";}
			|target	{cout<<"target_list:	target/n";}
;

try_stmt: 	TRY SEMI_COLUMN stmt except_stmt	{cout<<"try_stmt: 	TRY SEMI_COLUMN stmt except_stmt/n";}
			|TRY SEMI_COLUMN stmt finally_stmt	{cout<<"try_stmt: 	TRY SEMI_COLUMN stmt finally_stmt/n";}
			|TRY SEMI_COLUMN block_stmt except_stmt	{cout<<"try_stmt: 	TRY SEMI_COLUMN block_stmt except_stmt/n";}
			|TRY SEMI_COLUMN block_stmt finally_stmt	{cout<<"try_stmt: 	TRY SEMI_COLUMN block_stmt finally_stmt/n";}
;

finally_stmt: 	FINALLY SEMI_COLUMN block_stmt	{cout<<"finally_stmt: 	FINALLY SEMI_COLUMN block_stmt/n";}
;

except_stmt:	EXCEPT SEMI_COLUMN stmt	{cout<<"except_stmt:	EXCEPT SEMI_COLUMN stmt/n";}
				|EXCEPT SEMI_COLUMN expr stmt	{cout<<"except_stmt:	EXCEPT SEMI_COLUMN expr stmt/n";}
;

with_stmt:	WITH expr SEMI_COLUMN 	{cout<<"with_stmt:	WITH expr SEMI_COLUMN/n";}
			|WITH expr AS target SEMI_COLUMN 	{cout<<"with_stmt:	WITH expr AS target SEMI_COLUMN/n";}
;

simple_stmt_list: 	expr_list	{cout<<"simple_stmt_list: 	expr_list/n";}
					| assert_stmt	{cout<<"simple_stmt_list: 	assert_stmt/n";}
					| assignment_stmt	{cout<<"simple_stmt_list: 	assignment_stmt/n";}
					//| augmented_assignment_stmt	{cout<<"simple_stmt_list: 	augmented_assignment_stmt/n";}
					| PASS	{cout<<"simple_stmt_list: 	PASS/n";}
					| del_stmt	{cout<<"simple_stmt_list: 	del_stmt/n";}
					| print_stmt	{cout<<"simple_stmt_list: 	print_stmt/n";}
					| return_stmt	{cout<<"simple_stmt_list: 	return_stmt/n";}
					| yield_stmt	{cout<<"simple_stmt_list: 	yield_stmt/n";}
					| raise_stmt	{cout<<"simple_stmt_list: 	raise_stmt/n";}
					| BREAK	{cout<<"simple_stmt_list: 	BREAK/n";}
					| CONTINUE	{cout<<"simple_stmt_list: 	CONTINUE/n";}
					| import_list	{cout<<"simple_stmt_list: 	import_list/n";}
					| global_stmt	{cout<<"simple_stmt_list: 	global_stmt/n";}
					;
					
assert_stmt: 	ASSERT expr {cout<<"assert_stmt: 	ASSERT expr/n";}
				|ASSERT expr COMMA expr	{cout<<"assert_stmt:	ASSERT expr COMMA expr/n";}
;

assignment_stmt:	target_list EQUAL expr_list 	{cout<<"assignment_stmt:	target_list EQUAL expr_list/n";}
					|ID COMMA ID EQUAL expr_list 	{cout<<"assignment_stmt:	ID COMMA ID EQUAL expr_list/n";}
					|ID EQUAL expr_list 	{cout<<"assignment_stmt:	ID EQUAL expr_list/n";}
					|target_list EQUAL yield_expression	{cout<<"assignment_stmt:	target_list EQUAL yield_expression/n";}
					|ID COMMA ID EQUAL yield_expression	{cout<<"assignment_stmt:	ID COMMA ID EQUAL yield_expression/n";}
					|ID EQUAL yield_expression	{cout<<"assignment_stmt:	ID EQUAL yield_expression/n";}
;

del_stmt:	DEL target_list	{cout<<"del_stmt:	DEL target_list/n";}
			|DEL ID COMMA ID	{cout<<"del_stmt:	DEL ID COMMA ID/n";}
			|DEL ID	{cout<<"del_stmt:	DEL ID/n";}
;

return_stmt:	RETURN	{cout<<"return_stmt:	RETURN/n";}
				|RETURN expr_list	{cout<<"return_stmt:	RETURN expr_list/n";}
;

yield_stmt:		yield_expression	{cout<<"yield_stmt:		yield_expression/n";}
;

print_stmt: PRINT expr_list	{cout<<"print_stmt: PRINT expr_list/n";}
			|PRINT MORE_THAN MORE_THAN expr_list	{cout<<"print_stmt:	PRINT MORE_THAN MORE_THAN expr_list/n";}
			|ID expr_list {err->errQ->enqueue($<r.lineNum>2,$<r.colNum>1-strlen($<r.strVal>1),"Unexpected ID ","");}
;
global_stmt :GLOBAL id_list	{cout<<"global_stmt :GLOBAL id_list/n";}
			|GLOBAL %prec stmt_1 {err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1,"expected ID ","");}
;

id_list: 	ID COMMA id_list	{cout<<"id_list: 	ID COMMA id_list/n";}
			|ID	{cout<<"id_list:	ID/n";}
;

raise_stmt: RAISE	{cout<<"raise_stmt: RAISE/n";}
			|RAISE expr	{cout<<"raise_stmt:	RAISE expr/n";}
			|RAISE expr COMMA expr	{cout<<"raise_stmt:	RAISE expr COMMA expr/n";} //must continue
			|RAISE expr COMMA %prec stmt_1	{err->errQ->enqueue($<r.lineNum>1,$<r.colNum>3,"expresion expected ","");}
;

access_modef: 	PRIVATE 	{cout<<"access_modef: 	PRIVATE/n";}
				|PUBLIC		{cout<<"access_modef:	PUBLIC/n";}
				|PROTECTED	{cout<<"access_modef:	PROTECTED/n";}
;

target: 	OPEN_S target_list CLOSE_S 	{cout<<"target: 	OPEN_S target_list CLOSE_S /n";}//(
			|OPEN_S ID COMMA ID CLOSE_S 	{cout<<"target: 	OPEN_S ID COMMA ID CLOSE_S/n";}//(
			|OPEN_S ID CLOSE_S 	{cout<<"target: 	OPEN_S ID CLOSE_S/n";}//(
            |OPEN_D target_list CLOSE_D 	{cout<<"target: 	OPEN_D target_list CLOSE_D/n";}//[
			|OPEN_D ID COMMA ID CLOSE_D 	{cout<<"target: 	OPEN_D ID COMMA ID CLOSE_D/n";}//[
			|OPEN_D ID CLOSE_D 	{cout<<"target: 	OPEN_D ID CLOSE_D/n";}//[
            |attributeref	{cout<<"target: 	attributeref/n";}
            |subscription	{cout<<"target: 	subscription/n";}
			;
            
attributeref: primary DOT ID	{cout<<"attributeref: primary DOT ID/n";}
			  |ID DOT ID %prec stmt_7	{cout<<"attributeref:	ID DOT ID/n";}
;

primary: 	atom 	{cout<<"primary: 	atom/n";}
			| attributeref	{cout<<"primary:	attributeref/n";}
            | subscription 	{cout<<"primary:	subscription/n";}
			| call	{cout<<"primary:	call/n";} //must continue
;

atom:		literal 	{cout<<"atom:		literal/n";}
			| enclosure	{cout<<"atom:	enclosure/n";}
;

literal:    STRING_VALUE 	{cout<<"literal:    STRING_VALUE/n";}
			| INTEGER_VALUE 	{cout<<"literal:	INTEGER_VALUE/n";}
			| LONG_VALUE	{cout<<"literal:	LONG_VALUE/n";}
            | FLOAT_VALUE 	{cout<<"literal:	FLOAT_VALUE/n";}
			| CHAR_VALUE	{cout<<"literal:	CHAR_VALUE/n";}
;

enclosure:	parenth_form 	{cout<<"enclosure:	parenth_form\n";}
			| list_display	{cout<<"enclosure:	list_display\n";}
            | string_conversion	{cout<<"enclosure:	string_conversion\n";} 
			| yield_atom	{cout<<"enclosure:	yield_atom\n";}
;

parenth_form : 	OPEN_S expr CLOSE_S	{cout<<"parenth_form : 	OPEN_S expr CLOSE_S";}
				|OPEN_S  CLOSE_S	{cout<<"parenth_form : 	OPEN_S  CLOSE_S";}
				|OPEN_S expr %prec stmt_1	{err->errQ->enqueue($<r.lineNum>1,$<r.colNum>2," expected ) ","");}
				|OPEN_S %prec stmt_1_2	{err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1," expected ) ","");}
				|expr CLOSE_S %prec stmt_1	{err->errQ->enqueue($<r.lineNum>1,$<r.colNum>1," expected ( ","");}

;

list_display:	OPEN_D  expr_list CLOSE_D	{cout<<"list_display:	OPEN_D  expr_list CLOSE_D\n";}
;

string_conversion:	RE_COT expr_list RE_COT	{cout<<"string_conversion:	RE_COT expr_list RE_COT\n";}
;

yield_atom:		OPEN_S yield_expression CLOSE_S		{cout<<"yield_atom:		OPEN_S yield_expression CLOSE_S\n";}
;

yield_expression:	YIELD	{cotu<<"yield_expression:	YIELD"\n;}
					|YIELD expr_list	{cout<<"yield_expression:	YIELD expr_list\n";}
;

subscription:	PRIMARY OPEN_D expr_list CLOSE_D	{cout<<"subscription:	PRIMARY OPEN_D expr_list CLOSE_D\n";}
;

call:	PRIMARY OPEN_D args_list CLOSE_D	{cout<<"call:	PRIMARY OPEN_D args_list CLOSE_D\n";}
		|PRIMARY OPEN_D ID CLOSE_D	{cout<<"call:	PRIMARY OPEN_D ID CLOSE_D\n";}
;

expr:	condition 	{cout<<"expr:	condition\n";}
		|literal	{cout<<"expr:	literal\n";}
		|expr op expr %prec stmt_1{cout<<"expr:	expr op expr\n";}
		|long_id	%prec stmt_3{cout<<"expr:	long_id\n";}
		//|expr expr %prec stmt_2 {err->errQ->enqueue($<r.lineNum>2,$<r.colNum>2-strlen($<r.strVal>2),"Expected op ","");}
;

condition:  expr EQUAL expr			{cout<<"condition: expr EQUAL expr\n";}
		|expr NOT_EQUAL expr		{cout<<"condition: expr NOT_EQUAL expr\n";}
		|expr LESS_THAN expr		{cout<<"condition: expr LESS_THAN expr\n";}
		|expr LESS_OR_EQUAL expr	{cout<<"condition: expr LESS_OR_EQUAL expr\n";}
		|expr MORE_THAN expr		{cout<<"condition: expr MORE_THAN expr\n";}
		|expr MORE_OR_EQUAL expr	{cout<<"condition: expr MORE_OR_EQUAL expr\n";}
;

long_id: ID OPEN_S	%prec stmt_8				{cout<<"long_id:	\n";}
		 |ID OPEN_S CLOSE_S				{cout<<"long_id:	ID OPEN_S CLOSE_S\n";}
		 |ID OPEN_S expr_list CLOSE_S	{cout<<"long_id:	ID OPEN_S expr_list CLOSE_S\n";}
		 |ID OPEN_S expr	  CLOSE_S	{cout<<"long_id:	ID OPEN_S expr	  CLOSE_S\n";}
		 |long_id DOT ID				{cout<<"long_id:	long_id DOT ID\n";}
		 |long_id DOT ID OPEN_S CLOSE_S				{cout<<"long_id:	long_id DOT ID OPEN_S CLOSE_S\n";}
		 |long_id DOT ID OPEN_S expr_list CLOSE_S	{cout<<"long_id:	long_id DOT ID OPEN_S expr_list CLOSE_S\n";}
		 |long_id DOT ID OPEN_S expr	  CLOSE_S	{cout<<"long_id:	long_id DOT ID OPEN_S expr CLOSE_S\n";}
;

op: PLUS				{cout<<"op :PLUS\n";}
	|MINUS				{cout<<"op :MINUS\n";}
	|DIV				{cout<<"op :DIV\n";}
	|MOD				{cout<<"op :MOD\n";}
	|OR					{cout<<"op :OR\n";}
	|NOT				{cout<<"op :NOT\n";}
	|MULTI				{cout<<"op :MULTI\n";}
	|AND	{cout<<"op :AND\n";}
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