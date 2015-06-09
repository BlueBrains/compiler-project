.data
a0: .word 4
string_1: .asciiz "working :D"

block_head:    .byte   0:8

glob_tmp:    .byte   0:4

align_to:  .word 4

newline: .asciiz "\n"

endarray: .asciiz "\p"

.text
.globl main
main:
li $t9,1
sub $sp,$sp,4
sw $t9, 0($sp)
lw $t0, 0($sp)
add $sp,$sp,4
la $t1,a0
sw $t0,0($t1)
 #begin function call
sub $sp,$sp,4
sw $ra, 0($sp)
sub $sp,$sp,4
sw $fp, 0($sp)
 #reserving space in stack for scope variables
sub $sp,$sp,0
 #movesp to fp
move $fp,$sp
 #ifNode
la $t9,a0
lw $t0,0($t9)
addi $v0,$t9,0 
sub $sp,$sp,4
sw $t0, 0($sp)
li $t9,0
sub $sp,$sp,4
sw $t9, 0($sp)
lw $t1, 0($sp)
add $sp,$sp,4
lw $t0, 0($sp)
add $sp,$sp,4
slt $t2,$t1,$t0
sub $sp,$sp,4
sw $t2, 0($sp)
lw $t0, 0($sp)
add $sp,$sp,4
beq $t0,$0,endif_0
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
la $a0,newline
li $v0,4
syscall
j endif_0
else_0:
 #releasing space in stack for scope variables
add $sp,$sp,0
lw $fp, 0($sp)
add $sp,$sp,4
lw $ra, 0($sp)
add $sp,$sp,4
jr $ra
 #end function call
li $v0, 10 
syscall 

 

 
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

 
 #this function for string+string
concatenate_2strings:
sub $sp, $sp, 4
sw $ra, 0($sp)
sub $sp, $sp, 4
sw $fp, 0($sp)
sCopyFirst:
lb $t0,0($a0)
beq $t0,$0,sCopySecond
sb $t0,0($a2)
addi $a0,$a0,1
addi $a2,$a2,1
b sCopyFirst
sCopySecond:
lb $t0,0($a1)
beq $t0,$0,sDone
sb $t0,0($a2)
addi $a1,$a1,1
addi $a2,$a2,1
b sCopySecond
sDone:
sb $zero 0($a2) #null terminate string
add $sp, $sp, 0
lw $fp, 0($sp)
add $sp, $sp, 4
lw $ra, 0($sp)
add $sp, $sp, 4
jr $ra

 
 #this function for Array*number
concatenate_array:
sub $sp, $sp, 4
sw $ra, 0($sp)
sub $sp, $sp, 4
sw $fp, 0($sp)
 #movet1 to t2
move $t2,$t1
li $t3,0
la $t5,endarray
 #movet0 to a2
move $a2,$t0
conArray_loop:
 #movea2 to a0
move $a0,$a2
slt $t4,$t3,$t2
beq $t4,$0,end_conArray_loop
addi $t3,$t3,1
start_conArray:
lw $t0,0($a0)
beq $t0,$0,end_arr
sw $t0,0($a1)
addi $a0,$a0,4
addi $a1,$a1,4
b start_conArray
end_arr:
j conArray_loop
end_conArray_loop:
sw $t5,0($a1) #null terminate string
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
