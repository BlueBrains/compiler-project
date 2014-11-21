%{
		#include <iostream>
		#include <istream>
		#include <ostream>		
		#include <FlexLexer.h>		
%}
digit			[0-9]
floatnumber		{pointfloat}|{expfloat}|{fraction}
pointfloat		({intpart}{fraction})|{intpart}"."
expfloat		({intpart}|{pointfloat}){exp}
intpart			{digit}+
fraction		"."{digit}+
exp				("e"|"E")("+"|"-"){digit}+
%option c++
%option noyywrap
%%
{intpart}				{cout<<"integer";}
{fraction}				{cout<<"warning";}
{floatnumber}			{cout<<"float";}
[a-zA-Z_][0-9a-zA-Z_]*	{cout<<"\t it is varibale:"<<yytext<<"\n";}
"and"			{return AND;}
"del"			{return DEL;}
"from"			{return FROM;}
"not"			{return NOT;}
"while"			{return WHILE;}
"as"			{return AS;}
"elif"			{return ELIF;}
"global"		{return GLOBAL;}
"or"			{return OR;}
"with"     		{return WITH;}
"assert"		{return ASSERT;}
"else"			{return ELSE;}
"if"			{return IF;}
"pass"			{return PASS;} //just for testing github add in for visual studio 2013 :D MhdSultan
"yield"    		{return YIELD;}
"break"			{return BREAK;}
"except"		{return EXCEPT;}
"import"		{return IMPORT;}
"print"         {return PRINT;}     
"class"			{return CLASS;}
"exec"			{return EXEC;}
"in"			{return IN;}
"raise"         {return RAISE;}     
"continue"		{return CONTINUE;}
"finally"		{return FINALLY;}
"is"			{return IS;}
"return"        {return RETURN;}     
"def"			{return DEF;}
"for"			{return FOR;}
"lambda"		{return LAMBDA;}
"try"			{return TRY;}
"true"			{return TRUE;}
"false"			{return FALSE;}
[a-zA-Z_][0-9a-zA-Z_]*	{yylval.strVal   = yytext;return IDENTIFIER;}
([1-9][0-9]*)|0			{yylval.intVal   = atoi(yytext);return INTEGER_CONSTANT;}
[+-]?[0-9]+"."[0-9]+	{yylval.floatVal = atof(yytext); return DOUBLE_CONSTANT;}
\'[a-zA-z]\'			{yylval.charVal  = yytext[1];return CHAR_CONSTANT;}
\".*\" 					{yylval.strVal   = yytext;return STRING_CONSTANT;}
"**"					{return POWER;}
"//"					{return DDIV;}
"*"						{return MULT;}
"+"						{return PLUS;}
"-"						{return MINUS;}
"/"						{return DIV;}
"%"						{return MODE;}
"("						{return L_PARAM_OP ;}
")"						{return R_PARAM_OP ;}
","						{return COMMA;}
"{"						{return L_SCOPE_OP;}
"}"						{return R_SCOPE_OP;}
"["						{return L_MATRIX_OP;}
"]"						{return R_MATRIX_OP;}
"<"						{return LT;}
">"						{return GT;}
"?"						{return QUESTION;}
":"						{return COLON;}
";"						{return SEMICOLON;}
"="						{return ASSIGN;}
"++"					{return ICR;}
"--"					{return DECR;}
"<="					{return LE;}
">="					{return GE;}
"=="					{return EQ;}
"!="					{return NE;}
"*="					{return MULTI_ASSIGN;}
"/="					{return DIV_ASSIGN;}
"%="					{return MODE_ASSIGN;}
"+="					{return PLUS_ASSIGN;}
"-="					{return MINUS_ASSIGN;}
\t						{;}
" "						{;}
\n						{;}
.						{cout<<"nothing";}
%%
int main()
{	
	FlexLexer* lexer = new yyFlexLexer;
	lexer->yylex();
    return 0;
}
