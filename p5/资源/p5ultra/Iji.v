`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:10:18 11/17/2019 
// Design Name: 
// Module Name:    Iji 
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
module Iji(
    input shall, 
    input pccon,
    input reset,
    input clk,
    input [31:0] npc,
	 output reg [31:0] D_instr,
	 output reg [31:0] D_pc4
    );
	 /////////////////////////////////////////
	 //I级各功能部件
	 wire [31:0] ipc_npc,opc_pc4,opc_pc;
	 pc pc(shall,pccon,ipc_npc,opc_pc4,opc_pc,clk,reset);
	/////////////////
    wire [31:0] iim_pc,oim_instr;
	im im(iim_pc,oim_instr);
	//////////////////////////////////////
	//I级接线
    assign iim_pc=opc_pc;
	 assign ipc_npc=npc;
	 ////////////////////////////////////
	 //I级进寄存器
	initial begin
	D_instr=0;
	D_pc4=32'h00003004;
	end
	always @(posedge clk) begin
					if(reset)begin
					D_instr<=0;
					D_pc4<=32'h00003004;
					end
					else if(shall)begin 
										D_instr<=D_instr;
										D_pc4<=D_pc4;
										end
					else begin
					D_instr<=oim_instr;
					D_pc4<=opc_pc4;
					end
	end
	

endmodule
