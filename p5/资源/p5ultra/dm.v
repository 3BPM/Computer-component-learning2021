`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:32:53 11/19/2019 
// Design Name: 
// Module Name:    dm 
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
module dm(
	 input [31:0] pc,
    input dm_we,
    input [31:0] addr,
    input [31:0] in_d,
    output [31:0] out_d,
    input clk,
    input reset
    );
	 integer i;
	 reg [31:0] ram[0:1023];
	 reg [31:0] PC;
	 initial begin
	 for(i=0;i<1024;i=i+1)ram[i]<=0;end
	 
assign out_d=ram[addr[11:2]];
always @* PC<=pc;
always@(posedge clk)begin
							if(reset)for(i=0;i<1024;i=i+1)ram[i]<=0;
							else if(dm_we)begin 
							ram[addr[11:2]]<=in_d;
							$display("%d@%h: *%h <= %h",$time, PC, addr,in_d);
							end
							end

endmodule