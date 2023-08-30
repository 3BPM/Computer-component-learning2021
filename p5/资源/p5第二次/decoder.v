`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:33:33 12/20/2021 
// Design Name: 
// Module Name:    control 
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
module  control(
	 input [31:0] instrD,
	 output  grf_en,
	 output  dm_en,
	 output  [4:0] a1,
	 output  [4:0] a2,
    output  [4:0] a3,
	 output [15:0] imm16,
	 output [25:0] imm26,
	 output [26:0] instrbus//NB

    );
	 
	 
	 
  DASM dasm (
    .pc(PC), 
    .instr(Instr), 
    .reg_name(1'b1), 
    .imm_as_dec(1'b0), 
    .asm()
    );
	wire[5:0]op;
	wire [5:0]func;
	reg [1:0]RegDst;
	//00means write GRF is 2th reg in Instr (rt)
	//01means is 3th (rd)
	//10means write GRF is 31 11111 ra
	//这玩意控制一个MUX决定用那个地址GRF
	 reg ALUSrc;//0 means alu numB is from GRF  1  means alunumB is imm from EXT
	 reg [1:0]WhatdatatoReg;
	//00means write data GRF is from ALU
	//01:write GRF is DM
	//10 means write data from PC+4
	//这玩意控制一个MUX决定用那个数据写GRF
	 reg sb=0;
	 reg RegWrite;//WE of GRF
	 reg MemWrite;//WE of DM
	 reg beq;
	 reg bne;
	 reg jr;
	 reg jal;//or j 他俩一样jal多了个存pc+4进入GRF ra 31
	 reg [1:0] EXTOp;//EXTOp00zero_ext_01arithmetic_ext_10left_shift16b
	 reg [2:0] ALUOp; //0:+ 1:- 2:OR 3:shift 4:judge< 

endmodule
