.data

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
sub $sp,$sp,12
 #movesp to fp
move $fp,$sp
 #Assign node
 #Assign node RHS:
li $t9,2
sub $sp,$sp,4
sw $t9, 0($sp)
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
 #Assign node
 #Assign node RHS:
li $t9,1
sub $sp,$sp,4
sw $t9, 0($sp)
 #LHS:
lw $t0,-8($fp)
addi $v0,$fp,-8
sub $sp,$sp,4
sw $t0, 0($sp)
 #Assign node poping old val:
lw $t1, 0($sp)
add $sp,$sp,4
 #Assign node getting RHS val:
lw $t0, 0($sp)
 #Assign node storing in position val:
sw $t0,0($v0)
 #releasing space in stack for scope variables
add $sp,$sp,12
lw $fp, 0($sp)
add $sp,$sp,4
lw $ra, 0($sp)
add $sp,$sp,4
sub $sp,$sp,4
sw $v0, 0($sp)
 #end function call
li $v0, 10 
syscall 

.ktext 0x80000180

.kdata
msg:   .asciiz "Trap generated \n"
ure_msg:   .asciiz "unhandled runtime error \n"
