.data
 sym: .space 28
 ary: .space 28
 str_n: .asciiz "\n"
str_sp: .asciiz " "
.text

li $v0,5
syscall #scanf

move $s7,$v0###����n==s7 n���䡣����
###����index �� ra��stack��
li $s0,0###index==s0
li $t0,0####i=0����û��

j fullyay
ending:
li $v0,10
syscall
fullyay:	

        ###############
#########################

	blt $s0,$s7,begin###if(index>=n )	��!s7<s0

#####for(i=0.................
		li $t0,0#i=0;
		for1:
		beq $t0,$s7,endfor1
		li $v0,1
		sll $t9,$t0,2#####��ȡ����Ҫ*4 *4���ƶ�2λ�� *2^2
		lw $a0,ary($t9)
		syscall###printf
		la $a0,str_sp#######printfsp
		li $v0,4
		syscall##################
		add $t0,$t0,1 #i++
		j for1
		endfor1:
############################
	###############print\n
	la $a0,str_n
	li $v0,4
	syscall
	##############RETURN
	beq $ra, $zero, ending######���������������
	jr $ra#####

########################
begin:
#########for(i=0..............
li $t0,0
for2:
	beq $t0,$s7,endfor2
	sll $t9,$t0,2
	lw $s1,sym($t9)#######��ȡ����Ҫ*4
	#############
	bne $s1,0,endif####if== IF���Ⱦ���ת
		add $t1,$t0,1###work out i+1
		sll $t9,$s0,2###������Ҫ*4���ƶ�2λ
		sw $t1,ary($t9)#####array[index]=i+1
		li $t1,1
		sll $t9,$t0,2
		sw $t1,sym($t9)##������Ҫ*4 �ƶ�2λ������#symbol[i]=1

##########################
#jrjrjrjrjrjrjrjrjrjrjrjr#
##########################
##i=$t0#####index i �ᱻ�Ӻ����ı����Դ浽stack��
############################$ra��� Ҳ�ô�
	#############
   	# push stack
   	 addi $sp,$sp,-12####make room on stack
   	 sw $t0, 8($sp)
   	 sw $s0, 4($sp)####store  index
     	sw $ra, ($sp)####store ra
addi $s0,$s0,1 #����index
jal fullyay############jal�Ǹ����
lw $ra,($sp)
lw $s0,4($sp)
lw $t0,8($sp)
addi $sp,$sp,12

##########����
######recover
 ########################
		sll $t9,$t0,2
  		sw $0,sym($t9)##������Ҫ*4 symbol[i]=0
	endif:
	add $t0,$t0,1#i++
j for2
endfor2:
beq $ra, $zero, ending######���������������
jr $ra




