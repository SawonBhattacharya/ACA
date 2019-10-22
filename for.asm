.data

msg1: .asciiz"A program in MIPS to test for loop. "

.text

li $t0,10

la $a0,msg1
for_loop:
BLT $t0,1,Exit

li $v0,4
syscall
Sub $t0,$t0,1

j for_loop

Exit:
li $v0,10
syscall