.data
	message: .asciiz "hi,everybody!! \n this is my function\n" 
.text 
	main:
	jal display
	syscall 
	display:
	li $v0,4
	la $a0,message
	syscall 
	jr $ra