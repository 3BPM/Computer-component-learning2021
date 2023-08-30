`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    16:50:37 12/07/2021
// Design Name:
// Module Name:    MUX
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
module mux2_32(
    input ctrl,
	 input[31:0] din0,
	 input[31:0] din1,
	 output [31:0] out
    );
	 assign out=ctrl?din1:din0;
endmodule

module mux3_5(
    input[1:0] ctrl,
	 input[4:0] din0,
	 input[4:0] din1,
	 input[4:0] din2,
	 output reg[4:0] out
    );
	 always@(*)begin
	   case(ctrl)
		2'b00: out=din0;
		2'b01: out=din1;
		2'b10: out=din2;
		endcase
	 end
endmodule

module mux3_32(
    input[1:0] ctrl,
	 input[31:0] din0,
	 input[31:0] din1,
	 input[31:0] din2,
	 output reg[31:0] out
    );
	 always@(*)begin
	   case(ctrl)
		2'b00: out=din0;
		2'b01: out=din1;
		2'b10: out=din2;
		endcase
	 end
endmodule
