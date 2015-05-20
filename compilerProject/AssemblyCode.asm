.data
.align 4
S1: .asciiz "I "
S2: .asciiz "love "
S3: .asciiz "assembly"
string: .asciiz "Our three strings are:\n"
S4: .asciiz "\nThe three strings combined are: "
S5: .asciiz "\nWhen string 3 is copied into string 5, string 5 is: "
S6: .asciiz "\nWhen string 4 is copied into string 6, string 6 is: "
L1: .asciiz "\nThe length of the first string is: "
L2: .asciiz "\nThe length of string 4 is: "

.text
main:
    #display all three strings first
    li $v0, 4
    la $a0, string
    syscall
    la $a0, S1
    syscall
    la $a0, S2
    syscall
    la $a0, S3
    syscall
    #display the three string when concatenated 
    #display string 5 when string 3 is copied into it
    la $a0, S3
    la $a1, S5
    jal strcpy
    jal print2
    addi $a2, $a1, 0
    addi $v1, $v0, 0
    addi $v0, $0, 11
    la $a0, S5
    syscall
    #display string 6, when string 4 is copied into it after concatenation
    #display length of string 1 
    la $a0, S1 #load address of string
    jal strlen #call string length procedure
    move $a0, $v0
    jal print4
    addi $a1, $a0, 0 #move address of string to $a1
    addi $v1, $v0, 0 #move length of string to $v1
    addi $v0, $0, 11 #syscall code for message
    la $a0, L1 #address of message
    #display length of string 4, the concatenated string
    syscall
    li $v0, 10
    syscall

strcpy:
    lbu $t0, 0($a0) #load a byte from source string
    sb $t1, 0($a1) #store byte in destination string
    addi $a0, $a0, 1 #increment both addresses
    addi $a1, $a1, 1
    beqz $t1, cpyExit #stop when null is copied
    j strcpy

cpyExit:
    jr $ra    

print2:
    addi $sp, $sp, -12
    sw $fp, 8($sp)
    addi $fp, $sp, 16
    sw $ra, 0($fp)
    sw $s0, -4($fp)
    move $s0, $a0 # store the argument in a save register
    li $v0, 4
    la $a0, S5
    syscall
    li $v0, 1
    move $a0, $s0 # retrieve the argument from $s0
    syscall
    lw $s0, -4($fp)
    lw $ra, 0($fp)
    lw $fp, 8($sp)
    addi $sp, $sp, 12
    jr $ra


strlen:
    move $t0, $zero #initialize count to start with 0 for first character
    j strlen.test

strlen.loop:
    addi $a0, $a0, 1 #load increment string pointer
    addi $t0, $t0, 1 #increment count

strlen.test:
    lb $t1, 0($a0) #load the next character to t0
    bnez $t1, strlen.loop #end loop if null character is reached
    move $v0, $t0
    jr $ra

print4:
    addi $sp, $sp, -12
    sw $fp, 8($sp)
    addi $fp, $sp, 16
    sw $ra, 0($fp)
    sw $s0, -4($fp)
    move $s0, $a0 # store the argument in a save register
    li $v0, 4
    la $a0, L1
    syscall
    li $v0, 1
    move $a0, $s0 # retrieve the argument from $s0
    syscall
    lw $s0, -4($fp)
    lw $ra, 0($fp)
    lw $fp, 8($sp)
    addi $sp, $sp, 12
    jr $ra
