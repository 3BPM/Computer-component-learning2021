`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:14:49 11/18/2019 
// Design Name: 
// Module Name:    jiemakzq 
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
module jiemakzq(
    input [31:0] instrD,
	 output  grf_en,
	 output  dm_en,
	 output  [4:0] a1,
	 output  [4:0] a2,
    output  [4:0] a3,
	 output [15:0] imm16,
	 output [25:0] imm26,
	 output [`instrbuswk] instrbus
    );
    wire [5:0] op;
    wire [4:0] rs;
    wire [4:0] rt;
    wire [4:0] rd;
	 wire [4:0] shamt;//暂时不输出
    wire [5:0] funct;

	assign imm16=instrD[15:0];
	assign funct=instrD[5:0];
	assign rs=instrD[25:21];
	assign rt=instrD[20:16];
	assign rd=instrD[15:11];
	assign shamt=instrD[10:6];
	assign imm26=instrD[25:0];
	assign op=instrD[31:26];
	wire `instrbus;
   /////////////////////////
	//contr
	assign addu=(op==0&&funct==6'b100001)?1:0;
	assign subu=(op==0&&funct==6'b100011)?1:0;
	assign jr=(op==0&&funct==6'b001000)?1'b1:1'b0;
	assign nop=(instrD==0)?1:0;
	assign beq=(op==6'b000100)?1:0;
	assign lui=(op==6'b001111)?1:0; 
	assign lw=(op==6'b100011)?1:0;
	assign ori=(op==6'b001101)?1:0;
	assign sw=(op==6'b101011)?1:0;
	assign jal=(op==6'b000011)?1:0;
	assign j=(op==6'b000010)?1:0;
	assign add=(op==0&&funct==6'b100000)?1:0;
	assign sub=(op==0&&funct==6'b100010)?1:0;
	assign andx=(op==0&&funct==6'b100100)?1:0;
	assign orx=(op==0&&funct==6'b100101)?1:0;
	assign xorx=(op==0&&funct==6'b100110)?1:0;
	assign norx=(op==0&&funct==6'b100111)?1:0;
	assign addi=(op==6'b001000)?1:0;
	assign addiu=(op==6'b001001)?1:0;
	assign andi=(op==6'b001000)?1:0;
	assign xori=(op==6'b001110)?1:0;
	//assign ynew=()?1:0;//此部分要写en信号，a1,a2,a3信号
	assign instrbus={`instrbus};
	/////////////////////////
	assign cal_r=addu|subu|add|sub|andx|orx|xorx|norx;
	assign cal_i=ori|addi|addiu|andi|xori;
	assign cal_l=lw;
	assign cal_s=sw;
	assign cal_b=beq;
	
	
	//if(bgez)!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!转rs
	//en
	
	assign grf_en = (lui||cal_i||cal_r||jal) ? 1 : 0;////////////////此处要加指令！！！！！！！！注意写使能的给出可能和其他信号相关！！那个上次的指令！！
	
	assign dm_en = (cal_s) ? 1 : 0;////////////////此处要加指令！！！！！！！！
	/////////////////////////
	//else:a1,a2,a3
	assign a1=(cal_r||lui||cal_i||jr||cal_b||cal_l||cal_s) ? rs : 0;////////////////此处要加指令！！！！！！！！
	//
	assign a2=(cal_r||cal_b||cal_s) ? rt : 0;////////////////此处要加指令！！！！！！！！
	//
	assign a3=(cal_r) ? rd : 
	        (lui||cal_r||cal_l) ? rt :
				        (jal) ? 5'b11111 : 0;////////////////此处要加指令！！！！！！！！
  
/////////////////////////
	
endmodule
