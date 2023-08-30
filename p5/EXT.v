`timescale 1ns / 1ps

module EXT(
	input [1:0] EXTOp,
	input [15:0] immin,
	output reg [31:0] Result
    );
	 
	 
	always@(*)begin
		case (EXTOp)
			2'b00:Result={{16{1'b0}}, immin};//零扩展
			2'b01:Result={{16{immin[15]}},immin};//符号扩展
			2'b10:Result={immin,{16{1'b0}}};//移到高位
		endcase
	end
endmodule
