`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:35:22 11/19/2019 
// Design Name: 
// Module Name:    Mji 
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
`define instrbus cal_r,cal_i,cal_l,cal_s,cal_b,cal_m,addu,subu,ori,lw,sw,beq,lui,j,jal,jr,nop,ynew,add,sub,andx,orx,xorx,norx,addi,addiu,andi,xori
`define instrbuswk 27:0
module Mji(
    input reset,
	 input clk,
    input [31:0] M_vin,
	 input [31:0] M_vinn,
	 input [4:0] M_a1,
	 input [4:0] M_a2,
	 input [4:0] M_a3,
	 input M_grf_en,
	 input M_dm_en,
	 input [31:0] M_pc,
	 input [`instrbuswk] M_instrbus,
	 input [31:0] M_aluo,
	 output reg [4:0]W_a3,
	 output reg W_grf_en,
	 output reg [31:0] W_vin,
	 output reg [31:0] W_pc,
	 output reg [`instrbuswk] W_instrbus
    );
	 
	 ///////////////////
	 wire `instrbus;
	 assign {`instrbus}=M_instrbus;
/////////////////////////////
	 wire [31:0] addr,in_d,out_d;
	 assign addr=M_aluo;
	 assign in_d=M_vinn;
	dm dm(M_pc,M_dm_en,addr,in_d,out_d,clk,reset);//////////////改dm并对其增加控制信号
////////////////////////////////////////////////////////
	initial begin
	        W_a3=0;
			  W_grf_en=0;
			  W_vin=0;
			  W_pc=32'h00003000;
			  W_instrbus=0;
			  end
   always@(posedge clk) begin
									if(reset)begin
												  W_a3<=0;
												  W_grf_en<=0;
												  W_vin<=0;
												  W_pc<=32'h00003000;
												  W_instrbus<=0;
												end
									else begin
											     W_a3<=M_a3;
												  W_grf_en<=M_grf_en;
												  W_pc<=M_pc;
												  W_instrbus<=M_instrbus;
												  if(cal_l)W_vin<=out_d;
												  else W_vin<=M_vin;
											end
								end
endmodule
