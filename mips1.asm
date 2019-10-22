.data
	firstMessage: .asciiz "HI MIPS MARS"
.text
	la $a0, firstMessage
	li $v0,4
	syscall
