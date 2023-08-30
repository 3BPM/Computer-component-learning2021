.data
.text
addi $s0,$zero,4
addi $s1,$zero,10

sll $s0,$s1,2

li $v0,1
move $a0,$s0
syscall