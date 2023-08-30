 .data
      symbol:     .space 28 # 4*7
      array:      .space 28 # 4*7
      str_enter:  .asciiz "\n"
      str_blank:  .asciiz " "
 
  .eqv i      $t0
  .eqv addr   $t1
  .eqv temp1  $t9
  .eqv temp2  $t8 
  .eqv temp3  $t7
  .eqv n      $s0
  .eqv index  $s1
 
  .macro get_address(%a, %q) # address queue
      li %a, 0
      add %a, %a, %q
      sll %a, %a, 2
  .end_macro
 
  .macro save(%start, %i, %data)
   get_address(addr, %i)
      sw %data, %start(addr)
  .end_macro
 
  .macro l_beg(%i, %func)
      li %i, 0
      %func:
  .end_macro
 
  .macro l_end(%i, %to, %func)
      addi %i, %i, 1
      bne %i, %to, %func
  .end_macro
 
  .macro FullArray(%index)
      sw $ra, ($sp)
      subi $sp, $sp, 4
      Begin:
      blt %index, n, deep
      l_beg(i, print) # output
          get_address(temp1, i)
          lw $a0, array(temp1)
          li $v0, 1
          syscall
          la $a0, str_blank
          li $v0, 4
          syscall
      l_end(i, n, print)
      la $a0, str_enter
      li $v0, 4
      syscall
 
      deep: # deep recursion
          l_beg(i, recursion)
          get_address(temp1, i)
          lw temp2, symbol(temp1)
          bnez temp2, Back
          addi temp1, i, 1
          save(array, %index, temp1)
          li temp2, 1
          save(symbol, i, temp2)
 
          addi %index, %index, 1
          # push stack
          sw %index, ($sp)
          subi $sp, $sp, 4
          sw i, ($sp)
          subi $sp, $sp, 4
          sw $ra, ($sp)
          subi $sp, $sp, 4
          jal Begin
 
          # pop stack
          addi $sp, $sp, 4
          lw $ra, ($sp)
          addi $sp, $sp, 4
          lw i, ($sp)
          addi $sp, $sp, 4
          lw %index, ($sp)
 
          subi %index, %index, 1 # notice this sentence
          li temp1, 0 
          save(symbol, i, temp1)
 
      Back:
   l_end(i, n, recursion)
      beq $ra, $zero, ending
      jr $ra
  .end_macro
 
  .text
      li $v0, 5
      syscall
      move n, $v0
      li index, 0
      FullArray(index)
      ending:
      li $v0, 10 #stop execution
      syscall