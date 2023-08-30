`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:34:23 12/26/2021 
// Design Name: 
// Module Name:    CMP 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module CMP(
    input [31:0] A,
    input [31:0] B,
	 output iseq,
	 output le0
    );
	assign iseq=(A==B);
	
//////////////////////////////////////////
wire eq0 ,gt0 ,lastzero,oddzero,isov;
    assign eq0 = !(|A);///=0
     assign gt0 = (!A[31]) && !eq0;///>0
     assign le0 = (A[31]) && !eq0;///<0
	  assign lastzero = (getlast0(A) == getlast0(B))?1'b1:1'b0;//后缀零相同
	  assign oddzero =(^A);///0/1的个数是奇数 则为1
     assign isov=Isov(A,B);
	 
	 
	/////////////函数计算后缀零的个数
	function [4:0] getlast0;
		input [31:0] x;
		reg [4:0] temp;
		integer i;
		begin
			temp = 0;
			for(i = 0;x[i] == 0&&i<31;i = i+1)
				temp = temp + 1;
			getlast0 = temp;
		end
	endfunction
	/////////////////函数判断溢出
	function Isov;
		input [31:0] x,y;
		reg [32:0] temp;	
		begin
		temp={x[31],x}+{y[31],y};
	 if (temp[32]!=temp[31])
		Isov=1;
	 else
		Isov=0;
		end
	endfunction
////////////////////

endmodule
