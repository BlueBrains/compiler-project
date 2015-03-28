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
	stack<string> temp_id1;
	char* i_type;
	char* t_id=new char[10];
	char* acc_mod=new char[8];
	vector<char*> sto_mod;
	bool ss=false;
	bool ff=false;
	bool pp=true;
	bool is_list=false;
	bool is_dic=false;
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


%start	file_input
%token	error ENDMARKER
%token	IMPORT CLASS END PRIMARY OR AND NOT NOT_EQUAL FINAL STATIC SELF
%token	DEF ELSE IF ELIF WHILE FOR IN TRY FINALLY ARROW PASS NONLOCAL
%token  PLUS_EQUAL MINUS_EQUAL PLUS_EQUAL DIV_EQUAL MOD_EQUAL AND_EQUAL OR_EQUAL
%token  SHAPOO_EQUAL LESS_THAN_2_EQUAL MORE_THAN_2_EQUAL STAR_2_EQUAL DIV_2_EQUAL MORE_LESS
%token  FALSE TRUE STAR_2 NUMBER_INT NUMBER_LONG NUMBER_FLOAT NAME DOT_3 
%token	EXPECT WITH AS ASSERT EQUAL DEL RETURN PRINT GLOBAL STAR_EQUAL LESS_THAN_2 
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



file_input: program ENDMARKER {Streams::verbose() <<"file_input: program ENDMARKER\n";Streams::verbose().flush();}
			;

program : import_stmt ';' temp2 {Streams::verbose() <<"program : import_stmt ';' temp2 \n";}
          |temp2 {Streams::verbose() <<"program : temp2 \n";}
		  ;

temp2:  CLASS NAME ':' suite {Streams::verbose() <<"temp2:  CLASS NAME ':' suite \n";}
		|CLASS NAME '(' ')' ':' suite {Streams::verbose() <<"temp2: CLASS NAME '(' ')' ':' suite \n";}
		|CLASS NAME '(' arglist ')' ':' suite {Streams::verbose() <<"trmp2: CLASS NAME '(' arglist ')' ':' suite \n";}
		|access CLASS NAME ':' suite {Streams::verbose() <<"temp2: access CLASS NAME ':' suite \n";}
		|access CLASS NAME '(' ')' ':' suite {Streams::verbose() <<"temp2: access CLASS NAME '(' ')' ':' suite \n";}
		|access CLASS NAME '(' arglist ')' ':' suite {Streams::verbose() <<"access CLASS NAME '(' arglist ')' ':' suite \n";}
		;
		
	//temp1:  //temp1 stmt {Streams::verbose() <<"temp1 stmt\n";}
		//|stmt {Streams::verbose() <<"stmt\n";}
	//	;

funcdef:	DEF  NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef:	DEF  NAME parameters ARROW test ':' suite \n";}
			|DEF access NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef:  DEF access NAME parameters ARROW test ':' suite \n";}
			|DEF NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF NAME parameters ':' suite\n";}
			|DEF access NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF access NAME parameters ':' suite\n";}
			|DEF STATIC NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef: DEF STATIC NAME parameters ARROW test ':' suite\n";}
			|DEF FINAL NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef: DEF FINAL NAME parameters ARROW test ':' suite\n";}
			|DEF STATIC NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF STATIC NAME parameters ':' suite\n";}
			|DEF FINAL NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF FINAL NAME parameters ':' suite\n";}
			|DEF STATIC FINAL NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef: DEF STATIC FINAL NAME parameters ARROW test ':' suite\n";}
			|DEF FINAL STATIC NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef: DEF FINAL STATIC NAME parameters ARROW test ':' suite \n";}
			|DEF STATIC FINAL NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF STATIC FINAL NAME parameters ':' suite \n";}
			|DEF FINAL STATIC NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF FINAL STATIC NAME parameters ':' suite \n";}
			|DEF FINAL access NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef: DEF FINAL access NAME parameters ARROW test ':' suite \n";}
			|DEF STATIC access NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef: DEF STATIC access NAME parameters ARROW test ':' suite \n";}
			|DEF STATIC access NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF STATIC access NAME parameters ':' suite \n";}
			|DEF FINAL access NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF STATIC access NAME parameters ':' suite";}
			|DEF STATIC FINAL access NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef: DEF STATIC FINAL access NAME parameters ARROW test ':' suite \n";}
			|DEF FINAL STATIC access NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef: DEF FINAL STATIC access NAME parameters ARROW test ':' suite \n";}
			|DEF STATIC FINAL access NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF STATIC FINAL access NAME parameters ':' suite \n";}
			|DEF FINAL STATIC access NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF FINAL STATIC access NAME parameters ':' suite \n";}
			|DEF access STATIC NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef: DEF access STATIC NAME parameters ARROW test ':' suite \n";}
			|DEF access FINAL NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef: DEF access FINAL NAME parameters ARROW test ':' suite \n";}
			|DEF access STATIC NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF access STATIC NAME parameters ':' suite \n";}
			|DEF access FINAL NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF access FINAL NAME parameters ':' suite \n";}
			|DEF access STATIC FINAL NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef: DEF access STATIC FINAL NAME parameters ARROW test ':' suite \n";}
			|DEF access FINAL STATIC NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef: DEF access FINAL STATIC NAME parameters ARROW test ':' suite \n";}
			|DEF access STATIC FINAL NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF access STATIC FINAL NAME parameters ':' suite \n";}
			|DEF access FINAL STATIC NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF access FINAL STATIC NAME parameters ':' suite \n";}
			|DEF STATIC access FINAL NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef: DEF STATIC access FINAL NAME parameters ARROW test ':' suite \n";}
			|DEF FINAL access STATIC NAME parameters ARROW test ':' suite {Streams::verbose() <<"funcdef: DEF FINAL access STATIC NAME parameters ARROW test ':' suite \n";}
			|DEF STATIC access FINAL NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF STATIC access FINAL NAME parameters ':' suite \n";}
			|DEF FINAL access STATIC NAME parameters ':' suite {Streams::verbose() <<"funcdef: DEF FINAL access STATIC NAME parameters ':' suite \n";}
			;

parameters: '(' arglist ')' {Streams::verbose() <<"parameters:'(' arglist ')'\n";}
			|'(' ')' {Streams::verbose() <<"parameters:'(' ')'\n";}
			;

stmt:	simple_stmt {Streams::verbose() <<"stmt:	simple_stmt \n";}
		| compound_stmt {Streams::verbose() <<"stmt: compound_stmt\n";}
		;
simple_stmt: small_stmt ';' {Streams::verbose() <<"simple_stmt: small_stmt ';' \n";}
			 ;
small_stmt: expr_stmt {Streams::verbose() <<"small_stmt: expr_stmt \n";}
			|del_stmt {Streams::verbose() <<"small_stmt: del_stmt \n";}
			|pass_stmt {Streams::verbose() <<"small_stmt: pass_stmt \n";}
			|flow_stmt {Streams::verbose() <<"small_stmt: flow_stmt \n";}
			|import_stmt {Streams::verbose() <<"small_stmt: import_stmt \n";}
			|global_stmt {Streams::verbose() <<"small_stmt: global_stmt \n";}
			|nonlocal_stmt {Streams::verbose() <<"small_stmt: nonlocal_stmt \n";}
			|print_stmt  {Streams::verbose() <<"small_stmt: print_stmt \n";}
			;

expr_stmt:	testlist_star_expr augassign testlist {Streams::verbose() <<"expr_stmt:	testlist_star_expr augassign testlist \n";}
			|testlist_star_expr {Streams::verbose() <<"expr_stmt: testlist_star_expr \n";}
			|testlist_star_expr right_testlist {Streams::verbose() <<"expr_stmt: testlist_star_expr right_testlist \n";}
			;
					
right_testlist : '=' testlist_star_expr right_testlist {Streams::verbose() <<"right_testlist: '=' testlist_star_expr right_testlist \n";}
				|'=' testlist_star_expr {Streams::verbose() <<"right_testlist: '=' testlist_star_expr \n";}
				;

testlist_star_expr: comma_test_star_seqJ {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ \n";}
					|comma_test_star_seqJ ',' {Streams::verbose() <<"testlist_star_expr: comma_test_star_seqJ ',' \n";}
					|',' {Streams::verbose() <<"',' \n";}
					|test comma_test_star_seqJ {Streams::verbose() <<"testlist_star_expr: test comma_test_star_seqJ \n";}
					|test {Streams::verbose() <<"testlist_star_expr: test \n";}
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
				|PUBLIC		{Streams::verbose()<<"access_modef:	PUBLIC\n";acc_mod="public";pp=false}
				|PROTECTED	{Streams::verbose()<<"access_modef:	PROTECTED\n";acc_mod="protected";}
				;
print_stmt: PRINT exprlist {Streams::verbose() <<"print_stmt: PRINT exprlist \n";}
del_stmt:   DEL exprlist {Streams::verbose() <<"del_stmt:   DEL exprlist \n";}
			;

pass_stmt:	PASS {Streams::verbose() <<"pass_stmt:	PASS \n";}
			;

flow_stmt:	break_stmt {Streams::verbose() <<"flow_stmt:	break_stmt \n";}
			| continue_stmt {Streams::verbose() <<"flow_stmt: continue_stmt\n";}
			| return_stmt {Streams::verbose() <<"flow_stmt: return_stmt\n";}
			;

break_stmt: BREAK {Streams::verbose() <<"break_stmt: BREAK \n";}
			;

continue_stmt:	CONTINUE {Streams::verbose() <<"continue_stmt:	CONTINUE \n";}
				;

return_stmt:	RETURN testlist {Streams::verbose() <<"return_stmt:	RETURN testlist \n";}
				|RETURN {Streams::verbose() <<"return_stmt:	RETURN \n";}
				;


import_stmt: import_name {Streams::verbose() <<"import_stmt: import_name \n";}
			 ;

import_name: IMPORT dotted_as_names {Streams::verbose() <<"import_name: IMPORT dotted_as_names \n";}
			 ;

comma_dotted_as_name_seq: ',' dotted_as_name {Streams::verbose() <<"comma_dotted_as_name_seq: ',' dotted_as_name \n";}
						  |comma_dotted_as_name_seq ',' dotted_as_name {Streams::verbose() <<"comma_dotted_as_name_seq: comma_dotted_as_name_seq ',' dotted_as_name \n";}

dotted_as_names: dotted_as_name {Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_names: dotted_as_name \n";}
				 |dotted_as_name comma_dotted_as_name_seq {Streams::verbose() <<"comma_dotted_as_name_seq: dotted_as_name comma_dotted_as_name_seq \n";}
				 ;


dotted_as_name: dotted_name {Streams::verbose() <<"dotted_as_name: dotted_name \n";}
				|dotted_name AS NAME {Streams::verbose() <<"dotted_as_name: dotted_name AS NAME\n";}
				;

dotted_name: NAME {Streams::verbose() <<"dotted_name: NAME \n";}
			|NAME dotted_name_seq {Streams::verbose() <<"dotted_name: NAME dotted_name_seq \n";}
			;
			
dotted_name_seq: '.' NAME {Streams::verbose() <<"dotted_name_seq: '.' NAME \n";}
				 |dotted_name_seq '.' NAME {Streams::verbose() <<"dotted_name_seq: dotted_name_seq '.' NAME \n";}
				 ;
					
comma_name_seq :	',' NAME {Streams::verbose() <<"comma_name_seq :	',' NAME \n";}
					|comma_name_seq ',' NAME {Streams::verbose() <<"comma_name_seq :	comma_name_seq ',' NAME \n";}
					;

global_stmt: GLOBAL NAME {Streams::verbose() <<"global_stmt: GLOBAL NAME \n";}
			 |GLOBAL NAME comma_name_seq {Streams::verbose() <<"global_stmt: GLOBAL NAME comma_name_seq\n";}
			 ;

nonlocal_stmt:	NONLOCAL NAME {Streams::verbose() <<"nonlocal_stmt:	NONLOCAL NAME \n";}
				|NONLOCAL NAME comma_name_seq {Streams::verbose() <<"nonlocal_stmt: NONLOCAL NAME comma_name_seq \n";}
				;

compound_stmt:  if_stmt {Streams::verbose() <<"compound_stmt:  if_stmt \n";}
				| while_stmt {Streams::verbose() <<"compound_stmt: while_stmt\n";}
				| for_stmt {Streams::verbose() <<"compound_stmt: for_stmt\n";}
				| try_stmt {Streams::verbose() <<"compound_stmt: try_stmt\n";}
				| with_stmt {Streams::verbose() <<"compound_stmt: with_stmt\n";}
				| funcdef  {Streams::verbose() <<"compound_stmt: funcdef\n";}
				| DEF classdef {Streams::verbose() <<"compound_stmt: DEF classdef\n";}
				;

elif_seq :  ELIF test ':' suite {Streams::verbose() <<"elif_seq :  ELIF test ':' suite \n";}
			|elif_seq ELIF test ':' suite {Streams::verbose() <<"elif_seq : elif_seq ELIF test ':' suite \n";}
			;
				
if_stmt:	IF test ':' suite {Streams::verbose() <<"if_stmt:	IF test ':' suite \n";}
			|IF test ':' suite elif_seq {Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq \n";}
			|IF test ':' suite ELSE ':' suite {Streams::verbose() <<"if_stmt:	IF test ':' suite ELSE ':' suite \n";}
			|IF test ':' suite elif_seq ELSE ':' suite {Streams::verbose() <<"if_stmt:	IF test ':' suite elif_seq ELSE ':' suite \n";}
			;

while_stmt: WHILE test ':' suite {Streams::verbose() <<"while_stmt: WHILE test ':' suite \n";}
			|WHILE test ':' suite ELSE ':' suite {Streams::verbose() <<"while_stmt:  WHILE test ':' suite ELSE ':' suite \n";}
			;

for_stmt:   FOR exprlist IN testlist ':' suite {Streams::verbose() <<"for_stmt:   FOR exprlist IN testlist ':' suite \n";}
			|FOR exprlist IN testlist ':' suite ELSE ':' suite {Streams::verbose() <<"for_stmt:  FOR exprlist IN testlist ':' suite ELSE ':' suite\n";}
			;

try_stmt:   TRY ':' suite try_except_cla_seq {Streams::verbose() <<" try_stmt:   TRY ':' suite try_except_cla_seq\n";}
			|TRY ':' suite try_except_cla_seq ELSE ':' suite {Streams::verbose() <<" try_stmt: TRY ':' suite try_except_cla_seq ELSE ':' suite\n";}
			|TRY ':' suite try_except_cla_seq FINALLY ':' suite {Streams::verbose() <<"try_stmt:  TRY ':' suite try_except_cla_seq FINALLY ':' suite\n";}
			|TRY ':' suite FINALLY ':' suite {Streams::verbose() <<"try_stmt:  TRY ':' suite FINALLY ':' suite\n";}
			;

try_except_cla_seq: except_clause ':' suite	{Streams::verbose() <<"try_except_cla_seq: except_clause ':' suite \n";}
					|try_except_cla_seq except_clause ':' suite {Streams::verbose() <<"try_except_cla_seq: try_except_cla_seq except_clause ':' suite\n";}
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

except_clause:  EXCEPT {Streams::verbose() <<"except_clause:  EXCEPT \n";}
				|EXCEPT test {Streams::verbose() <<"except_clause:  EXCEPT test\n";}
				|EXCEPT test AS NAME {Streams::verbose() <<"except_clause:  EXCEPT test AS NAME\n";}
				;

list_stmt : stmt {Streams:: verbose() <<"list_stmt : stmt\n";}
			|stmt list_stmt {Streams:: verbose() <<"list_stmt : stmt list_stmt\n";}
			;

suite:	list_stmt END {Streams::verbose() <<"suite:	list_stmt END\n";}
		|END {Streams::verbose() <<"suite:	END\n";}
		;

test:	or_test {Streams::verbose() <<"test:	or_test\n";}
		|or_test IF or_test ELSE test {Streams::verbose() <<"or_test IF or_test ELSE test\n";}
		;

or_seq:	OR and_test {Streams::verbose() <<"or_seq:	OR and_test \n";}
		|or_seq OR and_test {Streams::verbose() <<"or_seq: or_seq OR and_test \n";}
		;

or_test: and_test {Streams::verbose() <<"or_test:	and_test\n";}
		|and_test or_seq {Streams::verbose() <<"or_test:	and_test or_seq\n";}
		;

and_seq: AND not_test {Streams::verbose() <<"and_seq: AND not_test \n";}
		|and_seq AND not_test {Streams::verbose() <<"and_seq: and_seq AND not_test \n";}
		;

and_test: not_test {Streams::verbose() <<"and_test:	not_test\n";}
		  |not_test and_seq {Streams::verbose() <<"and_test: not_test and_seq \n";}
		  ;

not_test:	NOT not_test {Streams::verbose() <<"not_test:	NOT not_test\n";}
			| comparison {Streams::verbose() <<"not_test:	comparison\n";}
			;

comp_op_seq: comp_op expr %prec stmt_7 {Streams::verbose() <<"comp_op_seq: comp_op expr \n";}
			 |comp_op_seq comp_op expr {Streams::verbose() <<"comp_op_seq: comp_op_seq comp_op expr \n";}
			 ;
				
comparison: expr %prec stmt_2 {Streams::verbose() <<"comparison: expr\n"}
			|expr comp_op_seq %prec stmt_12 {Streams::verbose() <<"comparison: expr comp_op_seq\n"}
			;

comp_op: '<' {Streams::verbose() <<"comp_op: '<' \n";}
		|'>'{Streams::verbose() <<"comp_op: '>' \n";}
		|EQUAL {Streams::verbose() <<"comp_op: EQUAL \n";}
		|MORE_OR_EQUAL {Streams::verbose() <<"comp_op: MORE_OR_EQUAL \n";}
		|LESS_OR_EQUAL {Streams::verbose() <<"comp_op: LESS_OR_EQUAL \n";}
		|MORE_LESS {Streams::verbose() <<"comp_op: MORE_LESS \n";}
		|NOT_EQUAL {Streams::verbose() <<"comp_op: NOT_EQUAL \n";}
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
expr: xor_expr {Streams::verbose() <<"expr: xor_expr\n"}
		|xor_expr or_xor_expr_seq {Streams::verbose() <<"expr: xor_expr or_xor_expr_seq\n";}
		;

sha_and_expr_seq: '^' and_expr {Streams::verbose() <<"sha_and_expr_seq: '^' and_expr \n";}
				  |sha_and_expr_seq '^' and_expr {Streams::verbose() <<"sha_and_expr_seq: sha_and_expr_seq '^' and_expr\n";}
				  ;

xor_expr: and_expr {Streams::verbose() <<"xor_expr: and_expr\n"} 
		  |and_expr sha_and_expr_seq {Streams::verbose() <<"xor_expr: and_expr sha_and_expr_seq\n";}
		  ;

and_shift_expr_seq: '&' shift_expr {Streams::verbose() <<"and_shift_expr_seq: '&' shift_expr \n";}
					|and_shift_expr_seq '&' shift_expr {Streams::verbose() <<"and_shift_expr_seq: and_shift_expr_seq '&' shift_expr\n";}
					;

and_expr: shift_expr {Streams::verbose() <<"and_expr: shift_expr\n"} 
		  |shift_expr and_shift_expr_seq {Streams::verbose() <<"and_expr: shift_expr and_shift_expr_seq\n";}
		  ;

arith_seq:	LESS_THAN_2 arith_expr {Streams::verbose() <<"arith_seq:	LESS_THAN_2 arith_expr \n";}
			|MORE_THAN_2 arith_expr {Streams::verbose() <<"arith_seq:	MORE_THAN_2 arith_expr \n";}
			|arith_seq LESS_THAN_2 arith_expr  {Streams::verbose() <<"arith_seq:	arith_seq LESS_THAN_2 arith_expr \n";}
			|arith_seq MORE_THAN_2 arith_expr {Streams::verbose() <<"arith_seq:	arith_seq MORE_THAN_2 arith_expr \n";}
			;

shift_expr: arith_expr {Streams::verbose() <<"shift_expr: arith_expr\n"} 
			|arith_expr arith_seq {Streams::verbose() <<"shift_expr: arith_expr arith_seq\n"} 
			;

term_seq : '+' term {Streams::verbose() <<"term_seq : '+' term \n";}
			|'-' term {Streams::verbose() <<"term_seq : '-' term \n";}
			|term_seq '+' term {Streams::verbose() <<"term_seq : term_seq '+' term \n";}
			|term_seq '-' term {Streams::verbose() <<"term_seq : term_seq '-' term \n";}
			;

arith_expr: term %prec stmt_3 {Streams::verbose() <<"arith_expr: term\n"} 
			|term term_seq %prec stmt_13 {Streams::verbose() <<"arith_expr: term term_seq\n"} 
			;

factor_seq: '*' factor {Streams::verbose() <<"factor_seq: '*' factor \n";}
			|'/' factor {Streams::verbose() <<"factor_seq: '/' factor \n";}
			|'%' factor {Streams::verbose() <<"factor_seq: '%' factor \n";}
			|DIV_2 factor %prec stmt_8 {Streams::verbose() <<"factor_seq: DIV_2 factor \n";}
			|factor_seq '*' factor {Streams::verbose() <<"factor_seq: factor_seq '*' factor \n";}
			|factor_seq '/' factor {Streams::verbose() <<"factor_seq: factor_seq '/' factor \n";}
			|factor_seq '%' factor {Streams::verbose() <<"factor_seq: factor_seq '%' factor \n";}
			|factor_seq DIV_2 factor {Streams::verbose() <<"factor_seq: factor_seq DIV_2 factor \n";}
			;

term: 	factor %prec stmt_4 {Streams::verbose() <<"term: 	factor\n"} 
		|factor factor_seq {Streams::verbose() <<"term: 	factor factor_seq\n"} 
		;

factor: '+' factor {Streams::verbose() <<"factor: '+' factor \n";}
		|'-' factor {Streams::verbose() <<"factor: '-' factor \n";}
		|'~' factor {Streams::verbose() <<"factor: '~' factor \n";}
		| power {Streams::verbose() <<"factor: power\n"} 
		;

trailer_seq: trailer %prec stmt_6  {Streams::verbose() <<"trailer_seq: trailer \n";}
			 |trailer_seq trailer {Streams::verbose() <<"trailer_seq: trailer_seq trailer \n";}
			 ;
			
power:	atom %prec stmt_5 {Streams::verbose() <<"power:	atom\n"} 
		|atom trailer_seq %prec stmt_5 {Streams::verbose() <<"power: atom trailer_seq \n";}
		|atom trailer_seq STAR_2 factor {Streams::verbose() <<"power: atom trailer_seq STAR_2 factor \n";}
		|atom STAR_2 factor {Streams::verbose() <<"power: atom STAR_2 factor \n";}
		;

str_seq:	STRING %prec stmt_10 {Streams::verbose() <<"str_seq:	STRING \n";}
			|str_seq STRING {Streams::verbose() <<"str_seq:	str_seq STRING \n";}
			;

atom:	'(' ')' {Streams::verbose() <<"atom:	'(' ')' \n";}
		|'(' testlist_comp ')'  {Streams::verbose() <<"atom:	'(' testlist_comp ')' \n";}
		|'[' ']' {Streams::verbose() <<"atom:	'[' ']' \n";}
		|'{' '}' {Streams::verbose() <<"atom: '{' '}' \n";}
		|'[' testlist_comp ']' {Streams::verbose() <<"atom: '{' '}' \n";}
		|'{' dictorsetmaker '}'		{Streams::verbose() <<"atom: '{' dictorsetmaker '}' \n";}
		| NAME {Streams::verbose() <<"atom: NAME\n"} 
		| DEF NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF NAME\n"} 
		| DEF access NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF access NAME\n"} 
		| DEF STATIC NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF STATIC NAME\n"} 
		| DEF FINAL NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF FINAL NAME\n"} 
		| DEF STATIC FINAL NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF STATIC FINAL NAME\n"} 
		| DEF FINAL STATIC NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF FINAL STATIC NAME\n"} 
		| DEF STATIC access NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF STATIC access NAME\n"} 
		| DEF FINAL access NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF FINAL access NAME\n"} 
		| DEF STATIC FINAL access NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF STATIC FINAL access NAME\n"} 
		| DEF FINAL STATIC access NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF FINAL STATIC access NAME\n"} 
		| DEF access STATIC NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF access STATIC NAME\n"} 
		| DEF access FINAL NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF access FINAL NAME\n"} 
		| DEF access STATIC FINAL NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF access STATIC FINAL NAME\n"} 
		| DEF access FINAL STATIC NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF access FINAL STATIC NAME\n"} 
		| DEF STATIC access FINAL NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF STATIC access FINAL NAME\n"} 
		| DEF FINAL access STATIC NAME %prec stmt_14 {Streams::verbose() <<"atom: DEF FINAL access STATIC NAME\n"} 
		| NUMBER_INT {Streams::verbose() <<"atom: NUMBER_INT\n"} 
		| NUMBER_FLOAT {Streams::verbose() <<"atom: NUMBER_FLOAT\n"} 
		| NUMBER_LONG {Streams::verbose() <<"atom: NUMBER_FLOAT\n"} 
		| CHAR_VALUE {Streams::verbose() <<"atom: CHAR_VALUE\n"} 
		| str_seq %prec stmt_11 {Streams::verbose() <<"atom: str_seq\n"} 
		| DOT_3 {Streams::verbose() <<"atom: DOT_3\n"} 
		| NONE {Streams::verbose() <<"atom: NONE\n"} 
		| TRUE {Streams::verbose() <<"atom: TRUE\n"} 
		| FALSE {Streams::verbose() <<"atom: FALSE\n"} 
		;

comma_test_star_seq: ',' test  {Streams::verbose() <<"comma_test_star_seq: ',' test\n"} 
					 |',' star_expr {Streams::verbose() <<"comma_test_star_seq: ',' star_expr\n"} 
					 |comma_test_star_seq ',' test {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' test\n"} 
					 |comma_test_star_seq ',' star_expr {Streams::verbose() <<"comma_test_star_seq: comma_test_star_seq ',' star_expr\n"} 
					 ;

testlist_comp: test comp_for {Streams::verbose() <<"testlist_comp: test comp_for\n"} 
			   |test   {Streams::verbose() <<"testlist_comp: test\n"} 
			   |test   comma_test_star_seq  {Streams::verbose() <<"testlist_comp: test   comma_test_star_seq\n"} 
			   |test    ',' {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n"} 
			   |test   comma_test_star_seq ',' {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n"} 
			   |star_expr comp_for {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n"} 
			   |star_expr   {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n"} 
			   |star_expr   comma_test_star_seq   {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n"} 
			   |star_expr    ',' {Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n"} 
			   |star_expr   comma_test_star_seq ','	{Streams::verbose() <<"testlist_comp: comma_test_star_seq ',' star_expr\n"} 
			   ;

trailer:	'('  ')' {Streams::verbose() <<"trailer:	'('  ')'\n"} 
			|'(' arglist ')' {Streams::verbose() <<"trailer:	'(' arglist ')'\n"} 
			|'[' subscriptlist ']' {Streams::verbose() <<"trailer:	'[' subscriptlist ']'\n"} 
			|'.' NAME {Streams::verbose() <<"trailer:	'.' NAME\n"} 
			;

comma_subscript_seq: ',' subscript {Streams::verbose() <<"comma_subscript_seq: ',' subscript\n"} 
					 |comma_subscript_seq ',' subscript {Streams::verbose() <<"comma_subscript_seq: comma_subscript_seq ',' subscript\n"} 
					 ;

subscriptlist:	subscript {Streams::verbose() <<"subscriptlist:	subscript\n"} 
				|subscript comma_subscript_seq {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq\n"} 
				|subscript  ',' {Streams::verbose() <<"subscriptlist:	subscript  ','\n"} 
				|subscript comma_subscript_seq ',' {Streams::verbose() <<"subscriptlist:	subscript comma_subscript_seq ','\n"} 
				;

subscript:  test {Streams::verbose() <<"subscript:  test\n"}
			|':' {Streams::verbose() <<"subscript:  ':'\n"}
			| test ':' {Streams::verbose() <<"subscript: test ':'\n"}
			| test ':' test {Streams::verbose() <<"subscript:  test ':' test\n"}
			| test ':' sliceop {Streams::verbose() <<"subscript:  test ':' sliceop\n"}
			| test ':' test sliceop {Streams::verbose() <<"subscript:  test ':' test sliceop\n"}
			|':' test {Streams::verbose() <<"subscript:  ':' test\n"}
			|':' sliceop {Streams::verbose() <<"subscript:  ':' sliceop\n"}
			|':' test sliceop {Streams::verbose() <<"subscript:  ':' test sliceop\n"}
			;

sliceop: ':' {Streams::verbose() <<"sliceop: ':'\n"}
		 |':' test {Streams::verbose() <<"sliceop: ':' test\n"}
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

classdef: CLASS NAME ':' suite {Streams::verbose() <<"classdef: CLASS NAME ':' suite\n";}
		  |CLASS access NAME ':' suite {Streams::verbose() <<"classdef: CLASS access NAME ':' suite\n";}
		  |CLASS STATIC NAME ':' suite {Streams::verbose() <<"classdef: CLASS STATIC NAME ':' suite\n";}
		  |CLASS FINAL NAME ':' suite {Streams::verbose() <<"classdef: CLASS FINAL NAME ':' suite\n";}
		  |CLASS STATIC FINAL NAME ':' suite {Streams::verbose() <<"classdef: CLASS STATIC FINAL NAME ':' suite\n";}
		  |CLASS FINAL STATIC NAME ':' suite {Streams::verbose() <<"classdef: CLASS FINAL STATIC NAME ':' suite\n";}
		  |CLASS FINAL access NAME ':' suite {Streams::verbose() <<"classdef: CLASS FINAL access NAME ':' suite\n";}
		  |CLASS STATIC access NAME ':' suite {Streams::verbose() <<"classdef: CLASS STATIC access NAME ':' suite\n";}
		  |CLASS STATIC FINAL access NAME ':' suite {Streams::verbose() <<"classdef: CLASS STATIC FINAL access NAME ':' suite\n";}
		  |CLASS FINAL STATIC access NAME ':' suite {Streams::verbose() <<"classdef: CLASS FINAL STATIC access NAME ':' suite\n";}
		  |CLASS access STATIC NAME ':' suite {Streams::verbose() <<"classdef: CLASS access STATIC NAME ':' suite\n";}
		  |CLASS access FINAL NAME ':' suite {Streams::verbose() <<"classdef: CLASS access FINAL NAME ':' suite\n";}
		  |CLASS access STATIC FINAL NAME ':' suite {Streams::verbose() <<"classdef: CLASS access STATIC FINAL NAME ':' suite\n";}
		  |CLASS access FINAL STATIC NAME ':' suite {Streams::verbose() <<"classdef: CLASS access FINAL STATIC NAME ':' suite\n";}
		  |CLASS STATIC access FINAL NAME ':' suite {Streams::verbose() <<"classdef: CLASS STATIC access FINAL NAME ':' suite\n";}
		  |CLASS FINAL access STATIC NAME ':' suite {Streams::verbose() <<"classdef: CLASS FINAL access STATIC NAME ':' suite\n";}
		  |CLASS NAME '(' ')' ':' suite {Streams::verbose() <<"classdef: CLASS NAME '(' ')' ':' suite\n";}
		  |CLASS NAME '(' arglist ')' ':' suite {Streams::verbose() <<"classdef: CLASS NAME '(' arglist ')' ':' suite\n";}
		  ;

arg_comma_seq : argument ',' {Streams::verbose() <<"arg_comma_seq : argument ','\n";}
				|arg_comma_seq argument ',' {Streams::verbose() <<"arg_comma_seq : argument ',' arg_comma_seq\n";}
				;

comma_arg_seq:	',' argument {Streams::verbose() <<"comma_arg_seq:	',' argument\n";}
				|comma_arg_seq ',' argument  {Streams::verbose() <<"comma_arg_seq:	comma_arg_seq ',' argument\n";}
				;

arglist: argument {Streams::verbose() <<"arglist: argument\n";}
		 |default_arg {Streams::verbose() <<"arglist: default_arg\n";}
		 |argument ',' {Streams::verbose() <<"arglist: argument ','\n";}
         |'*' test {Streams::verbose() <<"arglist: '*' test\n";}
		 |'*' test ',' STAR_2 test {Streams::verbose() <<"arglist: '*' test ',' STAR_2 test\n";}
		 |'*' test comma_arg_seq {Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";}
		 |'*' test comma_default_arg_seq {Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";}
		 |'*' test comma_arg_seq comma_default_arg_seq {Streams::verbose() <<"arglist: '*' test comma_arg_seq\n";}
		 |'*' test comma_arg_seq ',' STAR_2 test  {Streams::verbose() <<"arglist: '*' test comma_arg_seq ',' STAR_2 test\n";}
         |STAR_2 test {Streams::verbose() <<"arglist: STAR_2 test\n";}
		 |arg_comma_seq argument {Streams::verbose() <<"arglist: arg_comma_seq argument\n";}
		 |arg_comma_seq default_arg {Streams::verbose() <<"arglist: arg_comma_seq default_arg\n";}
		 |arg_comma_seq default_arg_comma_seq default_arg {Streams::verbose() <<"arglist: arg_comma_seq default_arg_comma_seq default_arg\n";}
		 |arg_comma_seq argument ',' {Streams::verbose() <<"arglist: arg_comma_seq argument ','\n";}
         |arg_comma_seq '*' test  {Streams::verbose() <<"arglist: arg_comma_seq '*' test\n";}
		 |arg_comma_seq '*' test ',' STAR_2 test {Streams::verbose() <<"arglist: arg_comma_seq '*' test ',' STAR_2 test\n";}
		 |arg_comma_seq '*' test comma_arg_seq {Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq\n";}
		 |arg_comma_seq '*' test comma_default_arg_seq {Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_default_arg_seq\n";}
		 |arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq {Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq comma_default_arg_seq\n";}
		 |arg_comma_seq '*' test comma_arg_seq ',' STAR_2 test {Streams::verbose() <<"arglist: arg_comma_seq '*' test comma_arg_seq ',' STAR_2 test\n";}
         |arg_comma_seq STAR_2 test {Streams::verbose() <<"arglist: arg_comma_seq STAR_2 test\n";}
		 ;

comma_default_arg_seq: ',' default_arg {Streams::verbose() <<"comma_default_arg_seq: ',' default_arg\n";}
					   |comma_default_arg_seq ',' default_arg {Streams::verbose() <<"comma_default_arg_seq: comma_default_arg_seq ',' default_arg\n";}
					   ;

default_arg_comma_seq: default_arg ',' {Streams::verbose() <<"default_arg_comma_seq: default_arg ','\n";}
					   |default_arg_comma_seq default_arg ',' {Streams::verbose() <<"default_arg_comma_seq: default_arg_comma_seq default_arg ','\n";}
					   ;

default_arg: test '=' test {Streams::verbose() <<"default_arg: test '=' test\n";}

argument: 	test {Streams::verbose() <<"argument: 	test\n";}
			|test comp_for {Streams::verbose() <<"argument: 	test comp_for\n";}
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