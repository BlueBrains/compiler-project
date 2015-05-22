.data
string_1: .asciiz "a"
string_2: .asciiz "lolo= "
string_3: .space 1024 
string_4: .asciiz "s= "
string_5: .asciiz "helo amer "

block_head:    .byte   0:8

glob_tmp:    .byte   0:4

align_to:  .word 4

newline: .asciiz "\n"

.text
.globl main
main:
 #begin function call
sub $sp,$sp,4
sw $ra, 0($sp)
sub $sp,$sp,4
sw $fp, 0($sp)
 #reserving space in stack for scope variables
sub $sp,$sp,8
 #movesp to fp
move $fp,$sp
 #Assign node
 #Assign node RHS:
la $t9,string_1
sub $sp,$sp,4
sw $t9, 0($sp)
 #LHS:
lw $t0,0($fp)
addi $v0,$fp,0
sub $sp,$sp,4
sw $t0, 0($sp)
 #Assign node poping old val:
lw $t1, 0($sp)
add $sp,$sp,4
 #Assign node getting RHS val:
lw $t0, 0($sp)
 #Assign node storing in position val:
sw $t0,0($v0)
 #
 # Print values:
la $t9,string_2
sub $sp,$sp,4
sw $t9, 0($sp)
lw $t0, 0($sp)
add $sp,$sp,4
li $v0,4
move $a0,$t0
syscall
lw $t0,0($fp)
addi $v0,$fp,0
sub $sp,$sp,4
sw $t0, 0($sp)
li $t9,3
sub $sp,$sp,4
sw $t9, 0($sp)
lw $t1, 0($sp)
add $sp,$sp,4
lw $t0, 0($sp)
add $sp,$sp,4
sub $sp,$sp,4
la $a1,string_3
jal concatenate_string
la $a0,string_3
sw $a0,0($sp)
lw $t0, 0($sp)
add $sp,$sp,4
li $v0,4
move $a0,$t0
syscall
la $a0,newline
li $v0,4
syscall
 #Assign node
 #Assign node RHS:
sub $sp,$sp,4
jal soso8
 #LHS:
lw $t0,-4($fp)
addi $v0,$fp,-4
sub $sp,$sp,4
sw $t0, 0($sp)
 #Assign node poping old val:
lw $t1, 0($sp)
add $sp,$sp,4
 #Assign node getting RHS val:
lw $t0, 0($sp)
 #Assign node storing in position val:
sw $t0,0($v0)
 #
 # Print values:
la $t9,string_4
sub $sp,$sp,4
sw $t9, 0($sp)
lw $t0, 0($sp)
add $sp,$sp,4
li $v0,4
move $a0,$t0
syscall
lw $t0,-4($fp)
addi $v0,$fp,-4
sub $sp,$sp,4
sw $t0, 0($sp)
lw $t0, 0($sp)
add $sp,$sp,4
li $v0,1
move $a0,$t0
syscall
la $a0,newline
li $v0,4
syscall
 #releasing space in stack for scope variables
add $sp,$sp,8
lw $fp, 0($sp)
add $sp,$sp,4
lw $ra, 0($sp)
add $sp,$sp,4
sub $sp,$sp,4
sw $v0, 0($sp)
jr $ra
 #end function call
li $v0, 10 
syscall 
soso8:
 #begin function call
sub $sp,$sp,4
sw $ra, 0($sp)
sub $sp,$sp,4
sw $fp, 0($sp)
 #reserving space in stack for scope variables
sub $sp,$sp,0
 #movesp to fp
move $fp,$sp
 #return node
li $t9,2
sub $sp,$sp,4
sw $t9, 0($sp)
lw $v0, 0($sp)
add $sp,$sp,4
 #releasing space in stack for scope variables
add $sp,$sp,0
lw $fp, 0($sp)
add $sp,$sp,4
lw $ra, 0($sp)
add $sp,$sp,4
sub $sp,$sp,4
sw $v0, 0($sp)
 #end function call
jr $ra
 #end return node
 #
 # Print values:
la $t9,string_5
sub $sp,$sp,4
sw $t9, 0($sp)
lw $t0, 0($sp)
add $sp,$sp,4
li $v0,4
move $a0,$t0
syscall
la $a0,newline
li $v0,4
syscall
 #releasing space in stack for scope variables
add $sp,$sp,0
lw $fp, 0($sp)
add $sp,$sp,4
lw $ra, 0($sp)
add $sp,$sp,4
sub $sp,$sp,4
sw $v0, 0($sp)
jr $ra
 #end function call

 
 #this function for string*number
concatenate_string:
sub $sp, $sp, 4
sw $ra, 0($sp)
sub $sp, $sp, 4
sw $fp, 0($sp)
 #movet1 to t2
move $t2,$t1
li $t3,0
 #movet0 to a2
move $a2,$t0
con_loop:
 #movea2 to a0
move $a0,$a2
slt $t4,$t3,$t2
beq $t4,$0,end_con_loop
addi $t3,$t3,1
start_con:
lb $t0,0($a0)
beq $t0,$0,end_str
sb $t0,0($a1)
addi $a0,$a0,1
addi $a1,$a1,1
b start_con
end_str:
j con_loop
end_con_loop:
sb $zero 0($a1) #null terminate string
add $sp, $sp, 0
lw $fp, 0($sp)
add $sp, $sp, 4
lw $ra, 0($sp)
add $sp, $sp, 4
jr $ra

.ktext 0x80000180

.kdata
msg:   .asciiz "Trap generated \n"
ure_msg:   .asciiz "unhandled runtime error \n"
