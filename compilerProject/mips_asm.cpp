#include "mips_asm.h"
#include <sstream>
#include <iostream>
#include <map>
using namespace std;
int MIPS_ASM::lines = 0;
int MIPS_ASM::cols = 0;
char MIPS_ASM::alltext2[20000];
char MIPS_ASM::current_chars[1000];
int lineNumber = 0;
int colNumber = 0;
string sourceFiles = "";
//char MIPS_ASM::data[1000]="\n.data\n";
int MIPS_ASM::static_size = 4;
stringstream MIPS_ASM::code;
stringstream MIPS_ASM::data;
stringstream MIPS_ASM::main;
ofstream ofs("AssemblyCode.asm", std::ofstream::out);
FILE * MIPS_ASM::file = fopen("AssemblyCode.asm", "w");
int MIPS_ASM::strings_count = 0;
int MIPS_ASM::arrays_count = 0;
map<string, int> strings;
const string stringsLabelPrefix = "string_";
const string arrayLabelPrefix = "array_";
void MIPS_ASM::add_instruction(string c)
{

	code << c.c_str();
}
string MIPS_ASM::getStringAdressLabel(string str){
	if (strings.find(str) == strings.end())
	{
		strings[str] = ++strings_count;
		add_data(stringsLabelPrefix + std::to_string(strings[str]) + ": .asciiz \"" + str + "\"\n");
	}
	return stringsLabelPrefix + std::to_string(strings[str]);
}
string  MIPS_ASM::addStringAdressLabel()
{
	//strings[str] = ++strings_count;
	int x = ++strings_count;
	add_data(stringsLabelPrefix + std::to_string(x) + ": .space 1024 \n");
	return stringsLabelPrefix + std::to_string(x);
}
string  MIPS_ASM::addArrayAdressLabel(int size)
{
	int x = ++arrays_count;
	add_Arraydata(arrayLabelPrefix + std::to_string(x) + ": .space "+std::to_string(size)+" \n");
	return arrayLabelPrefix + std::to_string(x);
}
void  MIPS_ASM::mult_string()
{
	label("concatenate_string");
	add_instruction("sub $sp, $sp, 4\n");
	add_instruction("sw $ra, 0($sp)\n");
	add_instruction("sub $sp, $sp, 4\n");
	add_instruction("sw $fp, 0($sp)\n");
	move("t2","t1");
	li("t3", 0);
	move("a2","t0");
	label("con_loop");
	move("a0", "a2");
	slt("t4", "t3", "t2");
	beq("t4", "0", "end_con_loop");
	add_instruction("addi $t3,$t3,1\n");
	label("start_con");
	add_instruction("lb $t0,0($a0)\n");
	beq("t0", "0", "end_str");
	add_instruction("sb $t0,0($a1)\n");
	add_instruction("addi $a0,$a0,1\n");
	add_instruction("addi $a1,$a1,1\n");
	add_instruction("b start_con\n");
	label("end_str");
	jump("con_loop");
	label("end_con_loop");
	add_instruction("sb $zero 0($a1) #null terminate string\n");
	add_instruction("add $sp, $sp, 0\n");
	add_instruction("lw $fp, 0($sp)\n");
	add_instruction("add $sp, $sp, 4\n");
	add_instruction("lw $ra, 0($sp)\n");
	add_instruction("add $sp, $sp, 4\n");
	jr();
}
void  MIPS_ASM::mult_array()
{
	label("concatenate_array");
	add_instruction("sub $sp, $sp, 4\n");
	add_instruction("sw $ra, 0($sp)\n");
	add_instruction("sub $sp, $sp, 4\n");
	add_instruction("sw $fp, 0($sp)\n");
	move("t2", "t1");
	li("t3", 0);
	move("a2", "t0");
	label("conArray_loop");
	move("a0", "a2");
	slt("t4", "t3", "t2");
	beq("t4", "0", "end_conArray_loop");
	add_instruction("addi $t3,$t3,1\n");
	label("start_conArray");
	add_instruction("lw $t0,0($a0)\n");
	beq("t0", "0", "end_arr");
	add_instruction("sw $t0,0($a1)\n");
	add_instruction("addi $a0,$a0,1\n");
	add_instruction("addi $a1,$a1,1\n");
	add_instruction("b start_conArray\n");
	label("end_arr");
	jump("conArray_loop");
	label("end_conArray_loop");
	add_instruction("sw $zero 0($a1) #null terminate string\n");
	add_instruction("add $sp, $sp, 0\n");
	add_instruction("lw $fp, 0($sp)\n");
	add_instruction("add $sp, $sp, 4\n");
	add_instruction("lw $ra, 0($sp)\n");
	add_instruction("add $sp, $sp, 4\n");
	jr();
}
void  MIPS_ASM::sum_string()
{
	label("concatenate_2strings");
	add_instruction("sub $sp, $sp, 4\n");
	add_instruction("sw $ra, 0($sp)\n");
	add_instruction("sub $sp, $sp, 4\n");
	add_instruction("sw $fp, 0($sp)\n");
	label("sCopyFirst");
	add_instruction("lb $t0,0($a0)\n");
	beq("t0", "0", "sCopySecond");
	add_instruction("sb $t0,0($a2)\n");
	add_instruction("addi $a0,$a0,1\n");
	add_instruction("addi $a2,$a2,1\n");
	add_instruction("b sCopyFirst\n");
	label("sCopySecond");
	add_instruction("lb $t0,0($a1)\n");
	beq("t0", "0", "sDone");
	add_instruction("sb $t0,0($a2)\n");
	add_instruction("addi $a1,$a1,1\n");
	add_instruction("addi $a2,$a2,1\n");
	add_instruction("b sCopySecond\n");
	label("sDone");
	add_instruction("sb $zero 0($a2) #null terminate string\n");
	add_instruction("add $sp, $sp, 0\n");
	add_instruction("lw $fp, 0($sp)\n");
	add_instruction("add $sp, $sp, 4\n");
	add_instruction("lw $ra, 0($sp)\n");
	add_instruction("add $sp, $sp, 4\n");
	jr();
}
void MIPS_ASM::add_data(string c)
{
	data << c;

}
void MIPS_ASM::add_Arraydata(string c)
{
	string ss = data.str();
	c += ss;
	data = stringstream();
	data << c;

}
void MIPS_ASM::addMainInstruction(string c)
{
	main << c;
}

static bool char_exists(char* c)
{
	for (int i = 0; i < sizeof(MIPS_ASM::current_chars); i++)
	{
		if (MIPS_ASM::current_chars[i] != NULL)
		{
			char temp[2] = "";
			temp[0] = MIPS_ASM::current_chars[i];
			if (strcmp(temp, c) == 0)
				return true;
		}
	}
	return false;
}

char* MIPS_ASM::add_data_char(char c)
{
	char charr[2] = "";
	sprintf(charr, "%c", c);

	char label[10] = "";
	char cc[50] = "char_";
	strcat(cc, charr);
	strcpy(label, cc);
	strcat(cc, ": .asciiz \"");
	strcat(cc, charr);
	strcat(cc, "\"\n");


	if (!char_exists(charr))
	{
		strcat(MIPS_ASM::current_chars, charr);
		MIPS_ASM::data << cc;
	}

	return label;
}

char* MIPS_ASM::add_data_char(char * c)
{
	char * charr = new char(strlen(c));
	sprintf(charr, "%s", c);

	char label[100] = "";
	char cc[50] = "str_";
	strcat(cc, charr);
	strcpy(label, cc);
	strcat(cc, ": .asciiz \"");
	strcat(cc, charr);
	strcat(cc, "\"\n");


	if (!char_exists(charr))
	{
		strcat(MIPS_ASM::current_chars, charr);
		MIPS_ASM::data << cc;
	}

	return label;
}

void MIPS_ASM::writeData()
{
	//	fputs(MIPS_ASM::data,MIPS_ASM::file);
	//fputs("\nnewline: .asciiz \"\\n\"",MIPS_ASM::file);	
	//fclose(MIPS_ASM::file);
	ofs <<data.str();
	data = stringstream();
}

void MIPS_ASM::writeCode()
{
	ofs << code.str();
	code = stringstream();
}
void MIPS_ASM::writeMain()
{
	ofs << main.str();
	main = stringstream();

}
void MIPS_ASM::operation(string reg1, string reg2, string reg3, int flag)
{
	//
	// 1 : +  2:- 3:* 4:/ 5:%
	//
	string c = "";

	if (flag == 1)
		c += "add $";
	else if (flag == 2)
		c += "sub $";

	else if (flag == 3)
		c += "mul $";

	else if (flag == 4)
		c += "div $";

	else if (flag == 5)
		c += "rem $";

	c += reg1;
	c += ",$";

	c += reg2;
	c += ",$";

	c += reg3;
	c += "\n";
	MIPS_ASM::add_instruction(c);

}

void MIPS_ASM::operationf(string reg1, string reg2, string reg3, int flag)
{
	string c = "";

	if (flag == 1)
		c += "add.s $";
	else if (flag == 2)
		c += "sub.s $";

	else if (flag == 3)
		c += "mul.s $";

	else if (flag == 4)
		c += "div.s $";

	else if (flag == 5)
		c += "rem.s $";


	c += reg1;
	c += ",$";

	c += reg2;
	c += ",$";

	c += reg3;
	c += "\n";
	MIPS_ASM::add_instruction(c);

}

void MIPS_ASM::slt(string reg1, string reg2, string reg3)
{
	string c = "slt $";
	c += reg1;
	c += ",$";
	c += reg2;
	c += ",$";
	c += reg3;
	c += "\n";
	MIPS_ASM::add_instruction(c);

}
void MIPS_ASM::la(string reg, string d)
{
	string c = "la $";
	c += reg;
	c += ",";
	c += d;
	c += "\n";
	MIPS_ASM::add_instruction(c);



}

void MIPS_ASM::li(string reg, int v)
{
	string c = "li $";

	c += reg;
	c += ",";
	c += to_string(v);
	c += "\n";
	MIPS_ASM::add_instruction(c);



}


void MIPS_ASM::lif(string reg, float v)
{
	string c = "li.s $";

	c += reg;
	c += ",";
	c += std::to_string(v);
	c += "\n";
	MIPS_ASM::add_instruction(c);



}

void MIPS_ASM::push(string source)
{
	MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
	string c = "sw $";
	c += source;
	c += ", 0($sp)\n";
	MIPS_ASM::add_instruction(c);

}
void MIPS_ASM::reserveStack(int size)
{
	MIPS_ASM::printComment("reserving space in stack for scope variables");
	MIPS_ASM::add_instruction(string("sub $sp,$sp,") + to_string(size) + string("\n"));
}

void MIPS_ASM::releaseStack(int size) 
{
	MIPS_ASM::printComment("releasing space in stack for scope variables");
	MIPS_ASM::add_instruction(string("add $sp,$sp,") + to_string(size) + string("\n"));
}


void MIPS_ASM::pop(string dest)
{
	string c = "lw $";
	c += dest;
	c += ", 0($sp)\n";
	MIPS_ASM::add_instruction(c);
	MIPS_ASM::add_instruction("add $sp,$sp,4\n");

}
 
void MIPS_ASM::top(string dest)
{
	string c = "lw $";
	c += dest;
	c += ", 0($sp)\n";
	MIPS_ASM::add_instruction(c);

}
void MIPS_ASM::pop()
{
	MIPS_ASM::add_instruction("add $sp,$sp,4\n");

}

void MIPS_ASM::pushf(string source)
{
	MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
	string c = "s.s $";
	c += source;
	c += ", 0($sp)\n";
	MIPS_ASM::add_instruction(c);

}


void MIPS_ASM::popf(string dest)
{
	string c = "l.s $";

	c += dest;
	c += ", 0($sp)\n";
	MIPS_ASM::add_instruction(c);
	MIPS_ASM::add_instruction("add $sp,$sp,4\n");

}

void MIPS_ASM::beq(string reg1, string reg2, string label)
{
	string c = "beq $";


	c += reg1;
	c += ",$";
	c += reg2;
	c += ",";
	c += label;
	c += "\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::bne(string reg1, string reg2, string label)
{
	string c = "bne $";
	c += reg1;
	c += ",$";
	c += reg2;
	c += ",";
	c += label;
	c += "\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::label(string label)
{
	string c = "";
	c += label;
	c += ":\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::jump(string label)
{
	string c = "";
	c += "j ";
	c += label;
	c += "\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::jr(string reg)
{
	string c = "";
	c += "jr $";
	c += reg;
	c += "\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::jal(string label)
{
	string c = "";
	c = "jal ";
	c += label;
	c += "\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::lw_fp(string reg, int o)
{

	string c = "";
	c = "lw $";
	c += reg;
	c += ",";
	c += to_string(o);
	c += "($fp)\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::sw_fp(string reg, int o)
{
	string c = "";
	c = "sw $";
	c += reg;
	c += ",";
	c += to_string(o);
	c += "($fp)\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::lw_gp(string reg, int o)
{
	string c = "";
	c = "lw $";
	c += reg;
	c += ",";
	c += to_string(o);
	c += "($gp)\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::sw_gp(string reg, int o)
{
	string c = "";
	c = "sw $";
	c = reg;
	c = ",";
	c += to_string(o);
	c += "($gp)\n";
	MIPS_ASM::add_instruction(c);
}


void MIPS_ASM::lw_fpf(string reg, int o)
{
	string c = "";
	c = "l.s $";
	c += reg;
	c += ",";
	c += to_string(o);
	c += "($fp)\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::sw_fpf(string reg, int o)
{
	string c = "";
	c = "s.s $";
	c += reg;
	c += ",";
	c += to_string(o);
	c += "($fp)\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::lw(string dest_reg, int offset, string mem_adress)
{
	string  c = "lw $";
	c += dest_reg;
	c += ",";
	c += to_string(offset);
	c += "($";
	c += mem_adress;
	c += ")\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::lw(string dest_reg, string offset, string mem_adress)
{
	string  c = "lw $";
	c += dest_reg;
	c += ",";
	c += offset;
	c += "($";
	c += mem_adress;
	c += ")\n";
	MIPS_ASM::add_instruction(c);
}
void MIPS_ASM::sw(string source_reg, int offset, string mem_adress)
{
	string c = "sw $";
	c += source_reg;
	c += ",";
	c += to_string(offset);
	c += "($";
	c += mem_adress;
	c += ")\n";
	MIPS_ASM::add_instruction(c);
}
void MIPS_ASM::sw(string source_reg, string offset, string mem_adress)
{
	string c = "sw $";
	c += source_reg;
	c += ",";
	c += offset;
	c += "($";
	c += mem_adress;
	c += ")\n";
	MIPS_ASM::add_instruction(c);
}
void MIPS_ASM::move(string dest_reg, string from_reg)
{
	string c = "move $";
	c += dest_reg;
	c += ",$";
	c += from_reg;
	MIPS_ASM::printComment("move" + from_reg + " to " + dest_reg);
	c += "\n";
	MIPS_ASM::add_instruction(c);

}

void MIPS_ASM::printComment(string comment)
{
	stringstream cmt(comment);
	string line;
	while (getline(cmt, line))
	{
		string c = " #";
		c += line + "\n";
		MIPS_ASM::add_instruction(c);

	}
}


