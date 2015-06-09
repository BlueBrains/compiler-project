#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#ifndef CODE_GENERATOR_H
#define CODE_GENERATOR_H
#include <fstream>
#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include "ast\Node.h"
#include<vector>
using namespace std;

extern int lineNumber;
extern int colNumber;
extern string sourceFiles;
extern ofstream ofs;
class MIPS_ASM
{
private:

public:
	static int strings_count;
	static int arrays_count;
	static char alltext2[20000];
	// static char data[1000];
	static int lines;
	static int cols;
	static int static_size;
	static char current_chars[1000];
	static int o;
	static char* alltext;
	static stringstream code;
	static stringstream data;
	static stringstream main;
	//string v = addStringAdressLabel();
	static	FILE * file;
	static string getStringAdressLabel(string str);
	static string addStringAdressLabel();
	static string addArrayAdressLabel(int size);
	static void mult_string();
	static void mult_array();
	static void sum_string();
	static void writeData();
	static void writeCode();
	static void writeMain();

	static void add_data(string);
	static void add_Arraydata(string);
	static void addMainInstruction(string);

	static void add_instruction(string c);
	static char* add_data_char(char c);
	static char* add_data_char(char *c);


	static void operation(string reg1, string reg2, string reg3, int flag);
	static void operationf(string reg1, string reg2, string reg3, int flag);
	static void slt(string reg1, string reg2, string reg3);

	static void li(string reg, int v);
	static void la(string reg, string);
	static void lif(string reg, float v);

	static void reserveStack(int size);
	static void releaseStack(int size);

	static void push(string source);
	static void pushf(string source);

	static void pop(string dest);
	static void top(string dest);
	static void topf(string dest);
	static void pop();
	static void popf(string dest);

	static void beq(string reg1, string reg2, string label);
	static void bne(string reg1, string reg2, string label);
	static void label(string);

	static void jump(string);

	static void jr(string ra = "ra");

	static void jal(string);

	static void lw_fp(string, int);
	static void sw_fp(string, int);

	static void lw_fpf(string, int);
	static void sw_fpf(string, int);

	static void lw_gp(string, int);
	static void sw_gp(string, int);

	static void lw(string dest_reg, int offset, string mem_adress);
	static void lw(string dest_reg, string offset, string mem_adress);
	static void sw(string source_reg, int offset, string mem_adress);
	static void sw(string source_reg, string offset, string mem_adress);

	static void lwf(string dest_reg, int offset, string mem_adress);
	static void swf(string source_reg, int offset, string mem_adress);

	static void move(string dest_reg, string from_reg);

	static void printComment(string comment);

	static void test_amer();
};

#endif