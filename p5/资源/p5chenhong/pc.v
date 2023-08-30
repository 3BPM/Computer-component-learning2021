`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:28:30 11/16/2019 
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
    input shall,
    input pccon,
    input [31:0] npc,
    output reg [31:0] pc4,
    output reg [31:0] pc,
	 input clk,
	 input reset
    );
	 `define p0c 32'h00003000
	 
	 initial begin pc=`p0c;
			pc4<=`p0c+4;end
		//npcÑ¡Ôñ
			wire [31:0] nnpc;
			assign nnpc=(pccon==0)? pc+4:npc;
			
	always @(posedge clk)begin
								if(reset)begin pc<=`p0c;
								pc4<=`p0c+4;end
								else if(shall)begin pc<=pc;
								pc4<=pc+4;end
								else begin pc<=nnpc;
								pc4<=nnpc+4;end
								end

endmodule
