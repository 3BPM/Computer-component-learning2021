.data
  matrix0:  .space 256 # matrix0[8][8]   8*8*4
  matrix1:  .space 256 # matrix1[8][8]   8*8*4
  matrix2:  .space 256 # matrix2[8][8]   8*8*4
   str_n:  .asciiz "\n"
   str_space:  .asciiz " "
 .text
 main:
 j scanf
 move $a0,$v0
 li $v0,1
 syscall
 
 li $v0,10
 syscall
 
 
 
 
 scanf:
 li $v0,5
  syscall
  jr $ra
