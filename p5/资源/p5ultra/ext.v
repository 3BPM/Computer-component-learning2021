`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:32:54 11/17/2019 
// Design Name: 
// Module Name:    ext 
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
module ext(
    input luicon,
    input [15:0] imm16,
    input signcon,
    output  [31:0] e32
    );
	 assign e32=(luicon)? {{imm16},{16{1'b0}}} :
			(signcon)? {{16{imm16[15]}},{imm16}} : {{16{1'b0}},{imm16}};
	 /*
always @* begin
				if(luicon)e32={{imm16},{16{1'b0}}};
				else if(signcon)e32={{16{imm16[15]}},{imm16}};
				else e32={{16{1'b0}},{imm16}};
				end*/

endmodule
