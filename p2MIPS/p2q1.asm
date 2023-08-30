.data #in .data is in memory
mx1:   .space 256#because of max size is 8*8 *(int==4)
mx2: 	.space 256
resultmx: .space 256
nnnn: .asciiz "\n"
strspace: .asciiz " "

.macro getindex(%i,%j,%ans)#iÐÐjÁÐi*8 +j (*int==4)
sll %ans,%i,3#*8
add %ans,%ans,%j
mul %ans,%ans,4 #*4
.end_macro

.text
main:

#add $t1,$0,$0#i=0
#move $t2,$zero#j=0
li $t1,0
li $t2,0

jal scanfd
move $s1,$v0#in n
#####################input MX1  n==$s1
for1:
bgeu $t1,$s1,donef1############i>=n then jump
	for2:	
	bgeu $t2,$s1,donef2#j>=n then jump
	jal scanfd
	getindex($t1,$t2,$t5)
	sw $v0,mx1($t5)
	addi $t2,$t2,1#j++
	j for2
	donef2:
	li $t2,0
addi $t1,$t1,1
j for1
donef1:
################in MX2 n==$s1
move $t1,$0
move $t2,$0

for11:
bgeu $t1,$s1,donef11
	for22:
	bgeu $t2,$s1,donef22
	jal scanfd
	getindex($t1,$t2,$t5)
	sw $v0,mx2($t5)
	addi $t2,$t2,1
	j for22
	donef22:
	li $t2,0
addi $t1,$t1,1
j for11
donef11:
######################'calculate and printf
li $t1,0
li $t2,0
li $s5,0##result
for111:
bgeu $t1,$s1,donef111
	for222:
	bgeu $t2,$s1,donef222
	#i j 
	li $t3,0#k
		for3:###### $t1 t2 t3 s1
		beq $t3,$s1,donefor3
		getindex($t1,$t3,$t5)
		lw $s2,mx1($t5)
		getindex($t3,$t2,$t5)
		lw $s3,mx2($t5)
		mult $s2,$s3
		mflo $t0
		add $s5,$s5,$t0
		addi $t3,$t3,1
		j for3
		donefor3:
		move $a0,$s5
		jal printfd
		jal printfsp
		li $s5,0
#
	addi $t2,$t2,1
	j for222
	donef222:
	li $t2,0
addi $t1,$t1,1
jal printfn
j for111

donef111:



li $v0,10
syscall



scanfd: li $v0,5
syscall
jr $ra

printfd:
li $v0,1
syscall
jr $ra

printfn:
la $a0,nnnn
li $v0,4
syscall
jr $ra

printfsp:
la $a0,strspace
li $v0,4
syscall
jr $ra







