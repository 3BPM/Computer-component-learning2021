`timescale 1ns / 1ps
module IM(
      input[31:0] adder,
		output [5:0] imop,
		output [5:0] hanshu,
		output [4:0] rs,
		output [4:0] rt,
		output [4:0] rd,
		output [4:0] s,
		output [15:0] imm15,
		output [25:0] imm26,
		output [31:0] Instr
    );
	  

  DASM dasm (
    .pc(adder), 
    .instr(Instr), 
    .reg_name(1), 
    .imm_as_dec(0), 
    .asm()
    );

	  
	   wire[9:0] address;
		assign address[9:0]=adder[11:2];//10λ��ַ1024��  ����һ��pc+4

		reg[31:0] im[1023:0];   //ROM �ܹ���1024�� 4�ֽ�ÿ�� 4KB  32b ��4B��*1024
		
	 initial begin
	   $readmemh("code.txt",im);   //ָ�����im
	   end
		
		 assign imop[5:0]=im[address][31:26];
		 assign hanshu[5:0]=im[address][5:0];
		 assign rs[4:0]=im[address][25:21];
		 assign rt[4:0]=im[address][20:16];
		 assign rd[4:0]=im[address][15:11];
		 assign s[4:0]=im[address][10:6];
		 assign imm15[15:0]=im[address][15:0];
		 assign imm26[25:0]=im[address][25:0];
		 assign Instr[31:0]=im[address][31:0];



endmodule
