%{
		#include <iostream>
		#include <istream>
		#include <ostream>		
		#include <FlexLexer.h>		
%}
identifier		({letter}|"_")({letter}|{digit}|"_")*
letter			{lowercase}|{uppercase}
lowercase		[a-z]
uppercase		[A-Z]
digit			[0-9]
allChars		[0-9a-zA-Z\t\f\r\v !@#$%^&*()-=_+[\]{};':,./<>?]
stringliteralpiece [{stringprefix}]?({shortstring}|{longstring})
stringprefix	"u"|"U"|"r"|"ur"|"R"|"UR"|"Ur"|"uR"
shortstring		"'"{shortstringitem1}*"'"|"\""{shortstringitem2}*"\""
longstring		"'''"{longstringitem}*"'''"|"\"\"\""{longstringitem}*"\"\"\""
shortstringitem1	{allChars}[^\'\n]*|escapeseq
shortstringitem2	{allChars}[^\"\n]*|escapeseq
longstringitem	{allChars}[^\\]|escapeseq
escapeseq		[\\]{allChars}
longinteger    {integer}("l"|"L")
integer        {decimalinteger}|{octinteger}|{hexinteger}|{bininteger}
decimalinteger {nonzerodigit}{digit}*|"0"
octinteger		"0"("o"|"O"){octdigit}+|"0"{octdigit}+
hexinteger		"0"("x"|"X"){hexdigit}+
bininteger      "0"("b"|"B"){bindigit}+
nonzerodigit    [1-9]
octdigit        [0-7]
bindigit        "0"|"1"
hexdigit        {digit}|[a-f]|[A-F]
floatnumber		{pointfloat}|{expfloat}|{fraction}
pointfloat		({intpart}{fraction})|{intpart}"."
expfloat		({intpart}|{pointfloat}){exp}
intpart			{digit}+
fraction		"."{digit}+
exp				("e"|"E")("+"|"-"){digit}+
imagnumber		({floatnumber}|{intpart})("j"|"J")

%option c++
%option noyywrap
%%

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
"pass"			{return PASS;}
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
{octinteger}			{int v = 1;int res=0; for(int n = (strlen(yytext)-1); n >1; n--) {res =res+ v*((int)yytext[n]-48);v=v*8;} yylval.intVal   = res;return INTEGER_CONSTANT;}
{bininteger}			{int v = 1;int res=0; for(int n = (strlen(yytext)-1); n >1; n--) {res =res+ v*((int)yytext[n]-48);v=v*2;} yylval.intVal   = res;return INTEGER_CONSTANT;}
{hexinteger}			{int v = 1;int res=0;int val; for(int n = (strlen(yytext)-1); n >1; n--) {if((yytext[n]=='a')||(yytext[n]=='A')) {val=10;} else if((yytext[n]=='b')||(yytext[n]=='B')){val=11;}else if((yytext[n]=='c')||(yytext[n]=='C')){val=12;} else if((yytext[n]=='d')||(yytext[n]=='D')){val=13;} else if((yytext[n]=='e')||(yytext[n]=='E')){val=14;}else if((yytext[n]=='f')||(yytext[n]=='F')){val=15;}else {val=(int)yytext[n]-48;} res =res+ v*val;v=v*16;} yylval.intVal   = res;return INTEGER_CONSTANT;}
{integer}				{yylval.intVal   = atoi(yytext);return INTEGER_CONSTANT;}
{fraction}				{cout<<"Warning";}
{floatnumber}			{yylval.floatVal = atof(yytext); return DOUBLE_CONSTANT;}
{imagnumber}			{cout<<"Imaginary";}
\'[a-zA-z]\'			{yylval.charVal  = yytext[1];return CHAR_CONSTANT;}
{stringliteralpiece}	{yylval.strVal   = yytext;return STRING_CONSTANT;}
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
	cout<<"enter here "<<endl;
	lexer->yylex();
    return 0;
}
