`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:16:28 11/23/2019 
// Design Name: 
// Module Name:    shallu 
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
`define Minstrbus Maddu,Msubu,Mori,Mlw,Msw,Mbeq,Mlui,Mj,Mjal,Mjr,Mnop,Mynew
`define instrbuswk 11:0
module shallu(//D_instr,E_a3,E_instrbus,M_a3,M_instrbus,shall
	input [31:0] D_instr,
	input [4:0] E_a3,
	input [`instrbuswk] E_instrbus,
	input [4:0] M_a3,
	input [`instrbuswk] M_instrbus,
	output shall 
    );
	 wire grf_en,dm_en;
	 wire [4:0] a1,a2,a3;
	 wire [15:0] imm16;
	 wire [25:0] imm26;
	 wire [`instrbuswk] instrbus;
   jiemakzq jiemakzq2(D_instr,grf_en,dm_en,a1,a2,a3,imm16,imm26,instrbus);
	wire `instrbus;
	assign {`instrbus}=instrbus;
	/////////////////////////
	//tuse
	wire [1:0] tuse_a1;
	wire [1:0] tuse_a2;
	assign tuse_a1=(cal_r||cal_i||cal_s||cal_l)? 1:///////////////////此处要加指令！！！！！！
									       (cal_b||jr)? 0: 3;
	///
   assign tuse_a2=(cal_r)? 1:///////////////////此处要加指令！！！！！！
						       (cal_s)?  2:
						       (cal_b)? 0: 3;
	///////////////////////////////////////
   //Etnew
	wire `Einstrbus;
	assign {`Einstrbus}=E_instrbus;
	wire [1:0] Etnew;
	assign Etnew=(Ecal_r||Ecal_i)?1:///////////////////此处要加指令！！！！！！
					    (Ecal_l)   ?2: 0;
	//Mtnew/////////////////////////////////注意shall模块多级独热并行，不要用错！！！！！
	wire `Minstrbus;
	assign {`Minstrbus}=M_instrbus;
	wire [1:0] Mtnew;
	assign Mtnew=(Mcal_l)?1:0;///////////////////此处要加指令！！！！！！
	/////////
	wire shall_a1;
	assign shall_a1=(((tuse_a1<Etnew)&&(a1==E_a3)&&(E_a3!=0))||((tuse_a1<Mtnew)&&(a1==M_a3)&&(M_a3!=0)));
	wire shall_a2;
	assign shall_a2=(((tuse_a2<Etnew)&&(a2==E_a3)&&(E_a3!=0))||((tuse_a2<Mtnew)&&(a2==M_a3)&&(M_a3!=0)));
	assign shall=shall_a1|shall_a2;
endmodule
