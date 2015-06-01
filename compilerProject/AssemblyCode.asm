.data
array_1: .space 16 
string_1: .asciiz "j= "
string_2: .asciiz "  "

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
la $s3,array_1
li $t9,1
sub $sp,$sp,4
sw $t9, 0($sp)
lw $t1, 0($sp)
add $sp,$sp,4
sw $t1,0($s3)
addi $s3,$s3,4
li $t0,3
sub $sp,$sp,4
sw $t0, 0($sp)
lw $t1, 0($sp)
add $sp,$sp,4
sw $t1,0($s3)
addi $s3,$s3,4
li $t9,3
sub $sp,$sp,4
sw $t9, 0($sp)
lw $t1, 0($sp)
add $sp,$sp,4
sw $t1,0($s3)
addi $s3,$s3,4
li $t9,5
sub $sp,$sp,4
sw $t9, 0($sp)
lw $t1, 0($sp)
add $sp,$sp,4
sw $t1,0($s3)
addi $s3,$s3,4
la $t0,array_1
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
add $sp,$sp,4
 #Assign node
 #Assign node RHS:
li $t9,9
sub $sp,$sp,4
sw $t9, 0($sp)
 #LHS:
lw $t0,0($fp)
sub $sp,$sp,4
sw $t0, 0($sp)
li $t9,2
sub $sp,$sp,4
sw $t9, 0($sp)
lw $t1, 0($sp)
add $sp,$sp,4
lw $t0, 0($sp)
add $sp,$sp,4
sll $t1,$t1,2
add $t2,$t0,$t1
addi $v0, $t2, 0
sub $sp,$sp,4
sw $t2, 0($sp)
 #Assign node poping old val:
lw $t1, 0($sp)
add $sp,$sp,4
 #Assign node getting RHS val:
lw $t0, 0($sp)
 #Assign node storing in position val:
sw $t0,0($v0)
add $sp,$sp,4
 #Assign node
 #Assign node RHS:
li $t9,2
sub $sp,$sp,4
sw $t9, 0($sp)
 #LHS:
lw $t0,4($fp)
addi $v0,$fp,4
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
lw $t0,4($fp)
addi $v0,$fp,4
sub $sp,$sp,4
sw $t0, 0($sp)
lw $t0, 0($sp)
add $sp,$sp,4
li $v0,1
move $a0,$t0
syscall
lw $t0,0($fp)
addi $v0,$fp,0
sub $sp,$sp,4
sw $t0, 0($sp)
lw $t0,4($fp)
addi $v0,$fp,4
sub $sp,$sp,4
sw $t0, 0($sp)
lw $t1, 0($sp)
add $sp,$sp,4
lw $t0, 0($sp)
add $sp,$sp,4
sll $t1,$t1,2
add $t2,$t0,$t1
lw $t3,0($t2)
sub $sp,$sp,4
sw $t3, 0($sp)
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
li $t9,0
sub $sp,$sp,4
sw $t9, 0($sp)
 #LHS:
lw $t0,8($fp)
addi $v0,$fp,8
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
addi $v0,$sp,0
While0:
 #movev0 to sp
move $sp,$v0
lw $t0,8($fp)
addi $v0,$fp,8
sub $sp,$sp,4
sw $t0, 0($sp)
li $t9,4
sub $sp,$sp,4
sw $t9, 0($sp)
lw $t1, 0($sp)
add $sp,$sp,4
lw $t0, 0($sp)
add $sp,$sp,4
slt $t2,$t0,$t1
sub $sp,$sp,4
sw $t2, 0($sp)
lw $t0, 0($sp)
add $sp,$sp,4
beq $t0,$0,endWhile0
 #
 # Print values:
lw $t0,8($fp)
addi $v0,$fp,8
sub $sp,$sp,4
sw $t0, 0($sp)
lw $t0, 0($sp)
add $sp,$sp,4
li $v0,1
move $a0,$t0
syscall
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
lw $t0,8($fp)
addi $v0,$fp,8
sub $sp,$sp,4
sw $t0, 0($sp)
lw $t1, 0($sp)
add $sp,$sp,4
lw $t0, 0($sp)
add $sp,$sp,4
sll $t1,$t1,2
add $t2,$t0,$t1
lw $t3,0($t2)
sub $sp,$sp,4
sw $t3, 0($sp)
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
lw $t0,8($fp)
addi $v0,$fp,8
sub $sp,$sp,4
sw $t0, 0($sp)
li $t9,1
sub $sp,$sp,4
sw $t9, 0($sp)
lw $t1, 0($sp)
add $sp,$sp,4
lw $t0, 0($sp)
add $sp,$sp,4
add $t0,$t0,$t1
sub $sp,$sp,4
sw $t0, 0($sp)
 #LHS:
lw $t0,8($fp)
addi $v0,$fp,8
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
addi $v0,$sp,0
j While0
endWhile0:
 #end while statment
 #releasing space in stack for scope variables
add $sp,$sp,12
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

.ktext 0x80000180

.kdata
msg:   .asciiz "Trap generated \n"
ure_msg:   .asciiz "unhandled runtime error \n"
