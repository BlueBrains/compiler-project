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
{octinteger}			{cout<<"oct";}
{integer}				{cout<<"Integer";}
{fraction}				{cout<<"Warning";}
{floatnumber}			{cout<<"Float";}
{imagnumber}			{cout<<"Imaginary";}
{stringliteralpiece}	{cout<<"String";}
[a-zA-Z_][0-9a-zA-Z_]*	{cout<<"\t it is varibale:"<<yytext<<"\n";}
.						{cout<<"nothing";}
%%
int main()
{	
	FlexLexer* lexer = new yyFlexLexer;
	lexer->yylex();
    return 0;
}