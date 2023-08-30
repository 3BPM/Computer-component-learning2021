`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:10:03 11/17/2019 
// Design Name: 
// Module Name:    im 
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
module im(
    input [31:0] pc,
    output [31:0] instr
    );
  reg[31:0] rom[0:1023];
  integer i;
  
	initial begin
				for(i=0;i<1024;i=i+1)rom[i]=0;
				$readmemh("code.txt",rom,0);
				end
	assign instr=rom[pc[11:2]];

endmodule
