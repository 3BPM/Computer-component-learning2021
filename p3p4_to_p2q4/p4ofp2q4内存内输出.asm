.data
 sym: .space 28
 ary: .space 28
 str_n: .asciiz "\n"
str_sp: .asciiz " "
re: .space 4000
.text
ori $s5, $0,0x40##########起始点
 ori     $s7, $zero, 7#####排列规模
 ori     $s0, $zero, 0
 ori     $t0, $zero, 0
 j     fullyay
ending:

 ###################
 ori  $v0, $zero, 4##
 sw $a0,($s5)#############################
addu $s5,$s5,$v0
########################
 fullyay:
 slt     $at, $s0, $s7
 bne   $at,$0, begin
 ori     $t0, $zero, 0
 for1:
 beq     $t0, $s7, endfor1
 
 ori  $v0, $zero, 1##
 sll     $t9, $t0, 2
 lw      $a0, ary($t9)
 ###################
 ori  $v0, $zero, 4##
 sw $a0,($s5)#############################
addu $s5,$s5,$v0
########################
ori    $a0, $zero, 0x3a
ori   $v0, $zero, 4
 syscall 
 ori $v0,$0,1
 addu    $t0, $t0, $v0
 j       for1
 endfor1:
  ori $v0,$0,0x38
 addu    $a0, $zero,$v0
ori   $v0, $zero, 4
 ###################
 ori  $v0, $zero, 4##
 sw $a0,($s5)#############################
addu $s5,$s5,$v0
########################
 beq    $ra,$0, ending
jr $ra
 begin:
 ori     $t0, $zero, 0
 for2:
 beq     $t0, $s7, endfor2
 sll     $t9, $t0, 2
 lw      $s1, sym($t9)
ori    $at, $zero, 0
bne     $at, $s1, endif
	ori $v0,$0,1
 	addu    $t1, $t0, $v0
 	sll     $t9, $s0, 2
	sw      $t1, ary($t9)
 	ori     $t1, $zero, 1
 	sll     $t9, $t0, 2
 	sw      $t1, sym($t9)
 ori     $v0, $zero, 0xc
 subu    $sp, $sp, $v0
 sw      $t0, 8($sp)
 sw      $s0, 4($sp)
 sw      $ra, ($sp)
 ori     $v0, $zero, 1
 addu    $s0, $s0, $v0
 jal     fullyay
 lw      $ra, ($sp)
 lw      $s0, 4($sp)
 lw      $t0, 8($sp)
 ori     $v0, $zero, 0xc
 addu    $sp, $sp, $v0
 sll     $t9, $t0, 2
 sw      $zero, ($t9)
 endif:
 ori $v0,$0,1
 addu    $t0, $t0, $v0
 j       for2
 endfor2:
 beq    $ra,$0, ending
 jr      $ra
