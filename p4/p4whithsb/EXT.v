`timescale 1ns / 1ps

module EXT(
	input [1:0] EXTOp,
	input [15:0] fromimm,
	output reg [31:0] Result
    );
	 
	 
	always@(*)begin
			if (EXTOp==0) Result={{16{1'b0}}, fromimm};//����չ
			else if (EXTOp==1) Result={{16{fromimm[15]}},fromimm};//������չ
			else if (EXTOp==2) Result={fromimm,{16{1'b0}}};//�Ƶ���λ
	end
endmodule
