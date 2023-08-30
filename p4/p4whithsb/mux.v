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
    input control,
	 input[31:0] dinput0,
	 input[31:0] dinput1,
	 output [31:0] out
    );
	 assign out=control?dinput1:dinput0;
endmodule

module mux3_5(
    input[1:0] control,
	 input[4:0] dinput0,
	 input[4:0] dinput1,
	 input[4:0] dinput2,
	 output reg[4:0] out
    );
	 always@(*)begin
	   //case(control)
		if(control==0) out=dinput0;
		if(control==1) out=dinput1;
		if(control==2) out=dinput2;
		//endcase
	 end
endmodule

module mux3_32(
    input[1:0] control,
	 input[31:0] dinput0,
	 input[31:0] dinput1,
	 input[31:0] dinput2,
	 output reg[31:0] out
    );
	 always@(*)begin
	   //case(control)
		if(control==0) out=dinput0;
		if(control==1) out=dinput1;
		if(control==2) out=dinput2;
		//endcase
	 end
endmodule
