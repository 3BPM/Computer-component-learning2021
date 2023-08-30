`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:40:13 11/19/2019 
// Design Name: 
// Module Name:    Eji 
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
module Eji(
    input reset,
	 input clk,
    input [4:0] E_a1,
	 input [4:0] E_a2,
	 input [4:0] E_a3,
	 input [31:0] E_v1,
	 input [31:0] E_v2,
	 input E_grf_en,
	 input E_dm_en,
	 input [31:0] E_e32,
	 input [31:0] E_pc,
	 input [`instrbuswk] E_instrbus,
	 output reg [31:0] M_vin,
	 output reg [4:0] M_a1,
	 output reg [4:0] M_a2,
	 output reg [4:0] M_a3,
	 output reg M_grf_en,
	 output reg M_dm_en,
	 output reg [31:0] M_pc,
	 output reg [`instrbuswk] M_instrbus,
	 output reg [31:0] M_aluo
    );
	 
	 wire `instrbus;
	 assign {`instrbus}=E_instrbus;
	 ///////////////////////////////////////////////////////////////////////////
	 //alu
	 wire [31:0] v1,v2;
	 
	 wire [31:0] aluo;
	 ////////////////////////////////
	 assign v1=E_v1;
	 assign v2=(cal_r) ? E_v2 : E_e32;
	 ///////////////////////////////////
	
   //////////////////////////////////////
    assign aluo=   (cal_s||cal_l||addu)? v1+v2:
								   (subu)      ? v1-v2:
								   (andx||andi)? v1&v2:
								   (orx||ori)  ? v1|v2: 
									(norx)   ? ~(v1|v2)://?
									(xorx||xori)? v1^v2:
							
									               32'h18373205;
	//////////////////////////////////////
												
												
    
	/////////////////////////////
	//进M级寄存器/////////////////////////////////此处要加指令！！！！！！！！ALU计算完成之后选值进寄存器！！此处要加指令！！
	initial begin
				M_vin<=0;
				M_a1<=0;
				M_a2<=0;
				M_a3<=0;
				M_grf_en<=0;
				M_dm_en<=0;
				M_pc<=32'h00003000;
				M_instrbus<=0;
				M_aluo<=0;
				end
		always @(posedge clk) begin
										if(reset)begin 
													M_vin<=0;
													M_a1<=0;
				                           M_a2<=0;
													M_a3<=0;
													M_grf_en<=0;
													M_dm_en<=0;
													M_pc<=32'h00003000;
													M_instrbus<=0;
													M_aluo<=0;
													end
										else begin
												M_grf_en<=E_grf_en;
												M_dm_en<=E_dm_en;
												M_a1<=E_a1;
												M_a2<=E_a2;
												M_a3<=E_a3;
												M_pc<=E_pc;
												M_instrbus<=E_instrbus;
												M_aluo<=aluo;
												if(cal_r||cal_i)M_vin<=aluo;/////////////////////////////此处要加指令！！！！！！！！！！！！！！！！
												else if(cal_s)M_vin<=E_v2;
												else if(lui)M_vin<=E_e32;
												else if(jal)M_vin<=E_pc+8;
												else M_vin<=0;
												end
										end
	/////////////////////////////////////////////
	
endmodule
