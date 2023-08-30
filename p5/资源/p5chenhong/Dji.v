`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:13:48 11/18/2019 
// Design Name: 
// Module Name:    Dji 
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
`define Einstrbus Ecal_r,Ecal_i,Ecal_l,Ecal_s,Ecal_b,Ecal_m,Eaddu,Esubu,Eori,Elw,Esw,Ebeq,Elui,Ej,Ejal,Ejr,Enop,Eynew,Eadd,Esub,Eandx,Eorx,Exorx,Enorx,Eaddi,Eaddiu,Eandi,Exori
`define instrbuswk 27:0
module Dji(//转发相关E_pc,E_e32,E_instrbus,E_grf_en,E_a3,M_vin,M_grf_en,M_a3,
	 input [31:0] nE_pc,
	 input [31:0] nE_e32,
	 input [`instrbuswk] nE_instrbus,
	 input nE_grf_en,
	 input [4:0] nE_a3,
	 ///
	 input [31:0] M_vin,
	 input M_grf_en,
	 input [4:0] M_a3,
	 ///////////////////////////////////////
    input shall,
	 output pccon,
    input reset,
	 input clk,
    input [31:0] instrD,
    input [31:0] pc4D,
	 output [31:0] wnpc,
	 output reg [4:0] E_a1,
	 output reg [4:0] E_a2,
	 output reg [4:0] E_a3,
	 output reg [31:0] E_v1,
	 output reg [31:0] E_v2,
	 output reg E_grf_en,
	 output reg E_dm_en,
	 output reg [31:0] E_e32,
	 output reg [31:0] E_pc,
	 output reg [`instrbuswk] E_instrbus,
	 /////////////////////////////////////
	 input [4:0] W_a3,
	 input W_grf_en,
	 input [31:0] W_vin,
	 input [31:0] W_pc,
	 input [`instrbuswk] W_instrbus
    );
	 wire `Einstrbus;
	 assign {`Einstrbus}=nE_instrbus;
	 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 //解码控制部分
	 wire grf_en,dm_en;
	 wire [4:0] a1,a2,a3;
	 wire [15:0] imm16;
	 wire [25:0] imm26;
	 wire [`instrbuswk] instrbus;
	 jiemakzq jiemakzq1(instrD,grf_en,dm_en,a1,a2,a3,imm16,imm26,instrbus);
	 wire `instrbus;
	 assign {`instrbus}=instrbus;
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 
	 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 //ext
	 wire signcon;
	 wire [31:0] e32;
	 assign signcon=(cal_l||cal_s||addi||addiu)?1:0;/////////////////////////////此处要加指令！！！！！！！！
	 ext ext(lui,imm16,signcon,e32);
	 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 //W_a3,W_grf_en,W_vin,W_pc,W_instrbus
	 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 //grf 
	 wire [31:0] v1,v2;
	 wire [31:0] v10,v20;
	 grf grf(W_pc,a1,a2,v10,v20,W_grf_en,W_a3,W_vin,clk,reset);
	 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 //grf.o转发grf.o为需求点
	 reg [31:0] nE_pc8;
	 always @* nE_pc8<=nE_pc+8;
	 assign v1=(Elui&&nE_a3!=0&&nE_a3==a1)             ?nE_e32:
				  (Ejal&&a1==5'b11111)                    ?nE_pc8:
				  (M_grf_en&&M_a3==a1&&M_a3!=0)           ?M_vin :
              (W_grf_en&&W_a3==a1&&W_a3!=0)           ?W_vin : v10;				  
	 assign v2=(Elui&&nE_a3!=0&&nE_a3==a2)             ?nE_e32:
				  (Ejal&&a2==5'b11111)       					?nE_pc8:
				  (M_grf_en&&M_a3==a2&&M_a3!=0)           ?M_vin :
              (W_grf_en&&W_a3==a2&&W_a3!=0)           ?W_vin : v20;	
	 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 //cmp
    wire zero1=(v1==v2);
	 assign pccon=((beq&&zero1)||j||jr||jal) ?1:0;
	 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 //npc
	 wire [1:0] npccon;
	 assign npccon=(beq&&zero1)? 2'b01://基地址加偏移
						      (jr)?  2'b10://jr类读寄存器
					      (j||jal)? 2'b11: 2'b00;//26位寻址类////////////////此处要加指令！！！！！！！！
	 wire [31:0] imm32;
	 assign imm32=v1;
	 npc npc(imm16,imm32,imm26,npccon,pc4D,wnpc);
	 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 //E级送reg//一般送，无控制////////////////////////////////////////////////////////////////////////////////////////////////
	 initial begin 
					E_a1<=0;
					E_a2<=0;
					E_a3<=0;
					E_v1<=0;
					E_v2<=0;
					E_grf_en<=0;
					E_dm_en<=0;
					E_e32<=0;
					E_pc<=32'h00003000;
					E_instrbus<=0;
				end
	 always @(posedge clk) begin
									if(reset||shall)begin
									E_a1<=0;
									E_a2<=0;
									E_a3<=0;
									E_v1<=0;
									E_v2<=0;
									E_grf_en<=0;
									E_dm_en<=0;
									E_e32<=0;
									E_pc<=32'h00003000;
									E_instrbus<=0;
									end
									else begin
									
									
									E_a1<=a1;
									E_a2<=a2;
									E_a3<=a3;
									E_v1<=v1;
									E_v2<=v2;
									E_grf_en<=grf_en;
									E_dm_en<=dm_en;
									E_e32<=e32;
									E_pc<=pc4D-4;
									E_instrbus<=instrbus;
									      
									end 
									end
///////////////////////////////////////////////////
endmodule
