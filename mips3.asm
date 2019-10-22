.data
	sub1: .word 90
	sub2: .word 87	
.text
	lw $t1,sub1
	lw $t2,sub2
	add $s0,$t1,$t2
	syscall