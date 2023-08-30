`timescale 1ns / 1ps

module ALU(
    input[31:0] A,
	 input[31:0] B,
	 input[2:0] ALUop,
	 input [4:0] s,
	 output reg[31:0] Result=0,
	 output iseq
    );
	 always@(*)begin
	   case(ALUop)
		3'b000:Result=A+B;
		3'b001:Result=A-B;
		3'b010:Result=A|B;
		3'b011:Result=B<<s;//3
		4:Result=(A<B);
		endcase
    end
	assign iseq=(A==B);
	wire lastzero,oddzero;
//////////////////////////////////////////
	assign lastzero = (getlast0(A) == getlast0(B))?1'b1:1'b0;
assign oddzero = get0(A);///是奇数则为1
////////////函数计算后缀零的个数
function [4:0] getlast0;
	input [31:0] x;
	reg [4:0] temp;
	integer i;
	begin
		temp = 0;
		for(i = 0;x[i] == 0;i = i+1)
			temp = temp + 1;
		getlast0 = temp;
	end
endfunction
/////////////函数计算0的个数（是奇数是偶数）
function get0;
	input [31:0] x;
	reg [4:0] temp;
	integer i;
	begin
		temp = 0;
		for(i = 0;i <= 31;i = i+1)
			if(x[i] == 1'b0) temp = temp + 1;
		get0 = temp[0];
	end
endfunction
////////////////////////////////////


endmodule
