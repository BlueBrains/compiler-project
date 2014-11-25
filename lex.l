%{
		#include "yacc.hpp"		
		#include <iostream>
		#include <istream>
		#include <ostream>		
		#include <FlexLexer.h>		
		extern int lineNum=1;
		extern int colNum=0;
		extern char* str = 0;
		int index;
%}
identifier		({letter}|"_")({letter}|{digit}|"_")*
letter			{lowercase}|{uppercase}
lowercase		[a-z]
uppercase		[A-Z]
digit			[0-9]
Single_line_comment		(\/\/)+[^\n]*	
longinteger    {integer}("l"|"L")
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
integer			[1-9][0-9]*|0		
float			([+-]?[0-9]+"."[0-9]+["f"]?)|[0-9]["f"]?
%option c++
%x multilinecomment
%x String
%option noyywrap

%%
"import"	{
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;
				colNum += strlen(yytext);
				return IMPORT;
			}
"class"		{
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;
				colNum += strlen(yytext);
				return CLASS;
			}
":"			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return SEMI_COLUMN;
			}
"\n"		{
				lineNum ++;
				colNum = 1;
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return NEW_LINE;
			}
"("			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return OPEN_S;
			}
")"			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return CLOSE_S;
			}
","			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return COMMA;
			} 
"."			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;								
				return DOT;
			}
"begin"		{ 
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	_BEGIN;
			}
"end"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	END;
			}
"def"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	DEF;
			}
"="			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	ASSIGN;
			}
"*"			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	STAR;
			}
"else"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	ELSE;
			}
"if"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	IF;
			}
"elif"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	ELIF;
			}
"while"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	WHILE;
			}
"for"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	FOR;
			}
"in"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	IN;
			}
"try"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	TRY;
			}
"finally"	{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	FINALLY;
			}
"except"	{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	EXPECT;
			}
"with"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	WITH;
			}
"as"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	AS;
			}
"assert"	{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	ASSERT;
			}
"=="		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	EQUAL;
			}
"del"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	DEL;
			}
"return"	{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	RETURN;
			}
"global"	{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	GLOBAL;
			}
"raise"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	RAISE;
			}
"private"	{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	PRIVATE;
			}
"public"	{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	PUBLIC;
			}
"protected"	{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	PROTECTED;
			}
"break"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return BREAK;
			}
"continue"	{	
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return CONTINUE;
			}
"["			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	OPEN_D;
			}
"]"			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	CLOSE_D;
			}
"`"			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	RE_COT;
			}
"yield"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	YIELD;
			}
"primary"	{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	PRIMARY;
			}
"||"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	OR;
			}
"&&"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	AND;
			}
"!"			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	NOT;
			}
"+"			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	PLUS;
			}
"-"			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	MINUS;
			}
"/"			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	DIV;
			}
"%"			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	MOD;
			}
"!="		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	NOT_EQUAL;
			}
"<"			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	LESS_THAN;
			}
"<="		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	LESS_OR_EQUAL;
			}
">"			{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	MORE_THAN;
			}
">="		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;				
				return	MORE_OR_EQUAL;
			}
"true"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;			
				return TRUE;
			}
"false"		{
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;			
				return FALSE;
			}
{octinteger}	{
					int v = 1;int res=0;
					for(int n = (strlen(yytext)-1); n >1; n--)
					{
						res =res+ v*((int)yytext[n]-48);
						v=v*8;
					}
					colNum += strlen(yytext);
					yylval.r.colNum = colNum;
					yylval.r.lineNum = lineNum;	
					yylval.r.intVal = res;
					return INTEGER_VALUE;
				}
{bininteger}	{
					int v = 1;int res=0;
					for(int n = (strlen(yytext)-1); n >1; n--)
					{
						res =res+ v*((int)yytext[n]-48);v=v*2;
					}
					colNum += strlen(yytext);
					yylval.r.colNum = colNum;
					yylval.r.lineNum = lineNum;	
					yylval.r.intVal = res;
					return INTEGER_VALUE;
				}
{hexinteger}	{
					int v = 1;int res=0;int val;
					for(int n = (strlen(yytext)-1); n >1; n--)
					{
						if((yytext[n]=='a')||(yytext[n]=='A')) 
						{val=10;} 
						else if((yytext[n]=='b')||(yytext[n]=='B'))
						{val=11;}
						else if((yytext[n]=='c')||(yytext[n]=='C'))
						{val=12;}
						else if((yytext[n]=='d')||(yytext[n]=='D'))
						{val=13;} 
						else if((yytext[n]=='e')||(yytext[n]=='E'))
						{val=14;}
						else if((yytext[n]=='f')||(yytext[n]=='F'))
						{val=15;}
						else 
						{
							val=(int)yytext[n]-48;
						} 
						res =res+ v*val;v=v*16;
					} 
					colNum += strlen(yytext);
					yylval.r.colNum = colNum;
					yylval.r.lineNum = lineNum;	
					yylval.r.intVal = res;
					return INTEGER_VALUE;
				}
{integer}	{
				cout<<":Integer value (yytext) ="<<yytext<<"\n";
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;								
				int i = atoi(yytext);
				cout<<":Int value as int ="<<i;
				yylval.r.intVal = i;
				if(strlen(yytext) <= 4)
					return INTEGER_VALUE;
				else
					return LONG_VALUE;
			}
{float}		{
				cout<<":Float value (yytext) ="<<yytext<<"\n";
				colNum += strlen(yytext);
				yylval.r.colNum = colNum;
				yylval.r.lineNum = lineNum;
				float f = atof(yytext);
				cout<<":Float value as float ="<<f;
				yylval.r.floatVal = f;
				return FLOAT_VALUE;							
			}
 \"       				{BEGIN String;}
<String>[\\/\"]			{cout<<"str1="<<yytext<<"\n";}
<String>[^\\]			{
							cout<<"str2="<<yytext<<"\n";
							if(str == 0){
								str = new char[255];
								index = 0;
							}
							str[index++] = yytext[0];
							
						}
<String>\\\\["]			{cout<<"str3="<<yytext<<"\n"; BEGIN INITIAL;}
<String>[^\\]\"			{
							cout<<"str4="<<yytext<<"\n"; 
							str[index++] = yytext[0];
							str[index] = '\0';
							cout<<"The Full String is = "<<str<<"\n";
							yylval.r.strVal = str;
							return STRING_VALUE;
							str = 0;
							BEGIN INITIAL;
						}
{Single_line_comment}	{cout<<"\t"<<yytext<<':'<<" it is a Single Line Comment \n";}
"/*"						 {colNum+=2;		BEGIN(multilinecomment);}
<multilinecomment>"\n"		 {lineNum+=1;	BEGIN(multilinecomment);}
<multilinecomment>"*"*[^"/"] {colNum+=strlen(yytext);	}
<multilinecomment>[^"*"]*    {colNum+=strlen(yytext);	}
<multilinecomment>"*"+"/"	 {colNum+=strlen(yytext);	 BEGIN(INITIAL);}
\'[a-zA-z]\'	{yylval.r.charVal  = yytext[1]; return CHAR_VALUE;}
{identifier}			{						
							colNum += strlen(yytext);
							yylval.r.colNum = colNum;
							yylval.r.lineNum = lineNum;			
							char* x = new char[255];
							x[0] = '\0';
							strcpy_s(x,255, yytext);
							yylval.r.strVal = x;
							return ID;												
						}
.				{cout<<"nothing";}
%%
