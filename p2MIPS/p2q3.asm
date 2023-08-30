.data #in .data is in memory
mx1:   .space 484#because of max size is 11*11 *(int==4)
mx2: 	.space 484

nnnn: .asciiz "\n"
strspace: .asciiz " "

.macro getindex(%i,%j,%ans)#iÐÐjÁÐi*8 +j (*int==4)
mul %ans,%i,11#*11
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
move $s1,$v0#in m1
jal scanfd
move $s2,$v0#in n1

jal scanfd
move $s3,$v0#in m2
jal scanfd
move $s4,$v0#in n2

#####################input MX1  n==$s1
for1:
beq $t1,$s1,donef1############i(>)=m1 then jump
	for2:
	beq $t2,$s2,donef2##j=n1 then jump
	jal scanfd
	getindex($t1,$t2,$t5)######t1,i t2,j
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
bgeu $t1,$s3,donef11 ###i<m2
	for22:
	bgeu $t2,$s4,donef22	###j<n2
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

li $s5,0##ijklresult

############s1=m1,s3=m2; s2=n1,s4=n2
move $t1,$s1
move $t2,$s2

sub $s1,$s1,$s3
addi $s1,$s1,1
sub $s2,$s2,$s4
addi $s2,$s2,1
move $s3,$t1
move $s4,$t2
li $t1,0
for111:#i
beq $t1,$s1,donef111
li $t2,0
	for222:#j
	beq $t2,$s2,donef222#i j	
	li $t3,0#k
	add $t5,$t1,$t3#i+k
	
		for3:###### $t1 t2 t3 s1
		 beq $t5,$s3,donefor3
		 li $t4,0#l
		 add $t6,$t2,$t4#j+l
			for4:
			 beq $t6,$s4,donefor4
			getindex($t5,$t6,$t9)
			lw $s6,mx1($t9)
			getindex($t3,$t4,$t9)
			lw $s7,mx2($t9)
			mult $s6,$s7
			mflo $t0
			add $s5,$s5,$t0
			addi $t4,$t4,1
			add $t6,$t2,$t4#j+l
			j for4
			donefor4:
		addi $t3,$t3,1#k++
		add $t5,$t1,$t3#i+k
		j for3
		donefor3:
		move $a0,$s5
		jal printfd
		jal printfsp
		li $s5,0
#
	addi $t2,$t2,1#j++
	j for222
	donef222:
	li $t2,0
addi $t1,$t1,1#i++
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







