`timescale 1ns / 1ps
module IM(
      input[31:0] PC,
		output [31:0] Instr
    );	  
	reg[31:0] im[4096:0];   //IM �ܹ���4096�� 4�ֽ�ÿ�� 4KB  32b ��4B��*4096
		//16KB(32bit/word��4096word)!!!!!!!!!!!!!!!!2��12�η�   12λ���ַ��������		
	initial begin
	   $readmemh("code.txt",im);   //ָ�����im
	  end
		assign Instr[31:0]=im[PC[13:2]-12'hc00][31:0];////////////////wcnm̫����
endmodule
