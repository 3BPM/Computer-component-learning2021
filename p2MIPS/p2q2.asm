.data 
      str0: .space 20
        
.text
	main:
		li $v0,5
		syscall
		move $s1,$v0 ##scanf n=s1
	li $t1,0##i=0
	for1:
	beq $t1,$s1,endfor1	
	li $v0, 12
	syscall  
        sb $v0, str0($t1) ##scanf %c
	add $t1,$t1,1
	j for1
	endfor1:
	srl $s1,$s1,1
	add $s1,$s1,1
	addi $t2,$t1,-1	#n-1==t2,s1==n/2+1,t1==i ,t2==n-1
	
	li $t1,0  #i=0
for2:
	beq $t1,$s1,endfor2
	lb $t3, str0($t1)
      	lb $t4, str0($t2) #########################
      bne $t3, $t4, out
	add $t1,$t1,1
	sub $t2,$t2,1
	j for2       
      endfor2:
   
 li $v0,1
li $a0,1
syscall
li $v0,10
syscall
		
out:
li $v0,1
li $a0,0
syscall
li $v0,10
syscall

	


