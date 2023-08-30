`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:03:52 11/17/2019 
// Design Name: 
// Module Name:    IFi 
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
module IFi(
    input [31:0] instrD,
    output [5:0] op,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
	 output [4:0] shamt,
    output [5:0] funct,
    output [15:0] imm16,
    output [25:0] imm26
    );
	assign imm16=instrD[15:0];
	assign funct=instrD[5:0];
	assign rs=instrD[25:21];
	assign rt=instrD[20:16];
	assign rd=instrD[15:11];
	assign shamt=instrD[10:6];
	assign imm26=instrD[25:0];
	assign op=instrD[31:26];


endmodule