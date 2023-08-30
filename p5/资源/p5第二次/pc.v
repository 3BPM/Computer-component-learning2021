`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:24:53 12/18/2021 
// Design Name: 
// Module Name:    pc 
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
module pc(
	input clk,
	input reset,
	input [31:0]NPC,//输入pc 即将跳转的PC 下一个PC
	output reg [31:0]PC
);
	 
	initial 
		PC<=32'h0000_3000;
	always@(posedge clk)begin
		if(reset)
			PC<=32'h0000_3000;
		
			
		else
			PC<=NPC;
	end

endmodule
