`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:43:55 11/18/2021
// Design Name:   string
// Module Name:   F:/verilog/test/tb_string.v
// Project Name:  test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: string
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_string;

	// Inputs
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	string uut (
		.clk(clk), 
		.clr(clr), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		in = 0;
#100;
		// Wait 100 ns for global reset to finish
		#14;
      in="1";#10;
		in="+";#10;
		in="1";#10;
		// Add stimulus here

	end
   always #5 clk=~clk;
endmodule

