`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:58:14 12/20/2021 
// Design Name: 
// Module Name:    nextPC 
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
module nextPC(
	input [31:0]PC,
	input [31:0]Drs,//jr�����rs��ַ��Ӧ�ļĴ���ֵ��������һ����ra �ϻؾ���ô�ҵġ�
	input [25:0]imm26,
	input [15:0]imm,
	input jal,//��j����
	input jr,
	input beq,
	input iseq,
	output reg[31:0]NPC,
	output [31:0]PCplus4
    );
	assign PCplus4=PC+4;

	always@(*)begin
		if(jal)//jal or j
			NPC={PC[31:28],imm26,2'b00};
		else if(jr)//jr
			NPC=Drs;
		else if(iseq&&beq==1)   //beq
			NPC=PC+4+{{14{imm[15]}},imm,2'b00};
		else
			NPC=PC+4;
	end


endmodule
