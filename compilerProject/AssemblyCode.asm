.data

block_head:    .byte   0:8

glob_tmp:    .byte   0:4

align_to:  .word 4

newline: .asciiz "\n"

.text
.globl main
main:
li $t9,1
sub $sp,$sp,4
sw $t9, 0($sp)
li $t9,3
sub $sp,$sp,4
sw $t9, 0($sp)
li $t9,9
sub $sp,$sp,4
sw $t9, 0($sp)
lw $t1, 0($sp)
add $sp,$sp,4
lw $t0, 0($sp)
add $sp,$sp,4
add $t0,$t0,$t1
sub $sp,$sp,4
sw $t0, 0($sp)
li $t9,8
sub $sp,$sp,4
sw $t9, 0($sp)
lw $t1, 0($sp)
add $sp,$sp,4
lw $t0, 0($sp)
add $sp,$sp,4
add $t0,$t0,$t1
sub $sp,$sp,4
sw $t0, 0($sp)
lw $t1, 0($sp)
add $sp,$sp,4
lw $t0, 0($sp)
add $sp,$sp,4
add $t0,$t0,$t1
sub $sp,$sp,4
sw $t0, 0($sp)

.ktext 0x80000180

.kdata
msg:   .asciiz "Trap generated \n"
ure_msg:   .asciiz "unhandled runtime error \n"
