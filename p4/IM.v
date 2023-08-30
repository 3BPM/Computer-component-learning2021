`timescale 1ns / 1ps
module IM(
      input[31:0] addr,
		output [5:0] op,
		output [5:0] func,
		output [4:0] rs,
		output [4:0] rt,
		output [4:0] rd,
		output [4:0] s,
		output [15:0] imm,
		output [25:0] imm26,
		output [31:0] Instr
    );
	  

  DASM dasm (
    .pc(addr), 
    .instr(Instr), 
    .reg_name(1'b1), 
    .imm_as_dec(1'b0), 
    .asm()
    );

	  
	   wire[9:0] address;
		assign address[9:0]=addr[11:2];//10位地址1024行  连接一下pc+4

		reg[31:0] im[1023:0];   //ROM 总共是1024行 4字节每行 4KB  32b （4B）*1024
		
	 initial begin
	   $readmemh("code.txt",im);   //指令放入im
	   end
		
		 assign op[5:0]=im[address][31:26];
		 assign func[5:0]=im[address][5:0];
		 assign rs[4:0]=im[address][25:21];
		 assign rt[4:0]=im[address][20:16];
		 assign rd[4:0]=im[address][15:11];
		 assign s[4:0]=im[address][10:6];
		 assign imm[15:0]=im[address][15:0];
		 assign imm26[25:0]=im[address][25:0];
		 assign Instr[31:0]=im[address][31:0];



endmodule
