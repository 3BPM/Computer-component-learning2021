`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:14:11 12/07/2021
// Design Name:   mips
// Module Name:   F:/p4/tb.v
// Project Name:  p4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset)
	);
integer i=0;
	initial begin
		// Initialize Inputs
		clk=1;
		
		reset = 1;

		// Wait 100 ns for global reset to finish
		#5;
		reset=0;
      // Add stimulus here
		
		
		
	end
      always #5 clk=~clk;
		
	
endmodule

