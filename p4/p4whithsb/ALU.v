`timescale 1ns / 1ps

module ALU(
    input[31:0] ARS,
	 input[31:0] BRT,
	 input[2:0] ALUop,
	 input [4:0] s,
	 output reg[31:0] Result=0,
	 output shieq, 
	 output lastzero, 
	 output oddzero,
	 output over
    );
	 always@(*)begin
	  
		if (ALUop==0) Result=ARS+BRT;
		else if (ALUop==1) Result=ARS-BRT;
		else if (ALUop==2) Result=ARS|BRT;
		else if (ALUop==3) Result=BRT<<s;//3
		else if (ALUop==4) Result=(ARS<BRT);
		
    end
	assign shieq=(ARS==BRT);
	
//////////////////////////////////////////
	assign lastzero = (getlast0(ARS) == getlast0(BRT))?1'b1:1'b0;
assign oddzero = get0(ARS);///是奇数则为1
assign over=isov(ARS,BRT);
////////////函数计算后缀零的个数
function [4:0] getlast0;
	input [31:0] shenme;
	reg [4:0] temp;
	integer i;
	begin
		temp = 0;
		for(i = 0;shenme[i] == 0;i = i+1)
			temp = temp + 1;
		getlast0 = temp;
	end
endfunction
/////////////函数计算0的个数（是奇数是偶数）
function get0;
	input [31:0] shenme;
	reg [4:0] temp;
	integer i;
	begin
		temp = 0;
		for(i = 0;i <= 31;i = i+1)
			if(shenme[i] == 1'b0) temp = temp + 1;
		get0 = temp[0];
	end
endfunction
////////////////////////////////////
function isov;
	input [31:0] shenme,buzhidao;
	reg [32:0] temp;
	
	begin
	temp={shenme[31],shenme}+{buzhidao[31],buzhidao};
 if (temp[32]!=temp[31])
	isov=1;
 else
	isov=0;
	end
endfunction


endmodule
