.data
string_1: .asciiz "so "
string_2: .asciiz "a"
string_3: .asciiz "soso"

block_head:    .byte   0:8

glob_tmp:    .byte   0:4

align_to:  .word 4

newline: .asciiz "\n"

endarray: .asciiz "\p"

.text
.globl main
main:
 #begin function call
sub $sp,$sp,4
sw $ra, 0($sp)
sub $sp,$sp,4
sw $fp, 0($sp)
 #reserving space in stack for scope variables
sub $sp,$sp,4
 #movesp to fp
move $fp,$sp
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
li $t9,700
sub $sp,$sp,4
sw $t9, 0($sp)
lw $t0, 0($sp)
add $sp,$sp,4
li $v0,1
move $a0,$t0
syscall
la $a0,newline
li $v0,4
syscall
 #Assign node
 #Assign node RHS:
li $v0,9
li $a0,8
syscall
 #movev0 to s1
move $s1,$v0
la $t9,string_2
sw $t9,0($s1) 
 #Assign node
 #Assign node RHS:
li $t9,0
sub $sp,$sp,4
sw $t9, 0($sp)
 #LHS:
lw $t0,4($s1)
addi $v0,$s1,4
sub $sp,$sp,4
sw $t0, 0($sp)
 #Assign node poping old val:
lw $t1, 0($sp)
add $sp,$sp,4
 #Assign node getting RHS val:
lw $t0, 0($sp)
 #Assign node storing in position val:
sw $t0,0($v0)
add $sp,$sp,4
li $t9,1
sub $sp,$sp,4
sw $t9, 0($sp)
 #movesp to s5
move $s5,$sp
li $t9,2
sub $sp,$sp,4
sw $t9, 0($sp)
li $t9,5
sub $sp,$sp,4
sw $t9, 0($sp)
 #moves1 to a0
move $a0,$s1
jal __init__32
add $sp,$sp,4
add $sp,$sp,4
add $sp,$sp,4
add $sp,$sp,4
sub $sp,$sp,4
sw $s1, 0($sp)
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
add $sp,$sp,4
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
lw $t0,4($s1)
addi $v0,$s1,4
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
add $sp,$sp,4
lw $fp, 0($sp)
add $sp,$sp,4
lw $ra, 0($sp)
add $sp,$sp,4
jr $ra
 #end function call
li $v0, 10 
syscall 

 
__init__32:
 #begin function call
sub $sp,$sp,4
sw $ra, 0($sp)
sub $sp,$sp,4
sw $fp, 0($sp)
 #reserving space in stack for scope variables
sub $sp,$sp,16
 #movesp to fp
move $fp,$sp
lw $t0,0($s5)
sw $t0,4($fp)
lw $t0,-4($s5)
sw $t0,8($fp)
lw $t0,-8($s5)
sw $t0,12($fp)
sw $a0,0($fp)
 #Assign node
 #Assign node RHS:
lw $t0,4($fp)
addi $v0,$fp,4
sub $sp,$sp,4
sw $t0, 0($sp)
 #LHS:
lw $t0,4($s1)
addi $v0,$s1,4
sub $sp,$sp,4
sw $t0, 0($sp)
 #Assign node poping old val:
lw $t1, 0($sp)
add $sp,$sp,4
 #Assign node getting RHS val:
lw $t0, 0($sp)
 #Assign node storing in position val:
sw $t0,0($v0)
add $sp,$sp,4
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
lw $t0,4($fp)
addi $v0,$fp,4
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
lw $t0,4($s1)
addi $v0,$s1,4
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
lw $t0,12($fp)
addi $v0,$fp,12
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
lw $s1,0($fp)
 #releasing space in stack for scope variables
add $sp,$sp,16
lw $fp, 0($sp)
add $sp,$sp,4
lw $ra, 0($sp)
add $sp,$sp,4
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
