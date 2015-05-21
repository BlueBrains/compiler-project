.data
string_1: .asciiz "kl= "
string_2: .asciiz "s= "
string_3: .asciiz "welcom koko"

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
li $t0,7
sub $sp,$sp,4
sw $t0, 0($sp)
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
la $t9,string_1
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
lw $t0, 0($sp)
add $sp,$sp,4
li $v0,1
move $a0,$t0
syscall
la $a0,newline
li $v0,4
syscall
jal koko3
 #Assign node
 #Assign node RHS:
jal soso6
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
la $t9,string_2
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
 #releasing space in stack for scope variables
add $sp,$sp,8
lw $fp, 0($sp)
add $sp,$sp,4
lw $ra, 0($sp)
add $sp,$sp,4
sub $sp,$sp,4
sw $v0, 0($sp)
 #end function call
li $v0, 10 
syscall 
koko3:
 #begin function call
sub $sp,$sp,4
sw $ra, 0($sp)
sub $sp,$sp,4
sw $fp, 0($sp)
 #reserving space in stack for scope variables
sub $sp,$sp,0
 #movesp to fp
move $fp,$sp
 #
 # Print values:
la $t9,string_3
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
 #end function call
soso6:
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
 #movefp to sp
move $sp,$fp
jr $ra
 #end return node
 #releasing space in stack for scope variables
add $sp,$sp,0
lw $fp, 0($sp)
add $sp,$sp,4
lw $ra, 0($sp)
add $sp,$sp,4
sub $sp,$sp,4
sw $v0, 0($sp)
 #end function call

.ktext 0x80000180

.kdata
msg:   .asciiz "Trap generated \n"
ure_msg:   .asciiz "unhandled runtime error \n"
