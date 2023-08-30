`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:35:39 11/18/2019 
// Design Name: 
// Module Name:    mips 
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
`define instrbus addu,subu,ori,lw,sw,beq,lui,j,jal,jr,nop,ynew
`define instrbuswk 11:0
module mips(
    input clk,
    input reset

    );
	 wire shall;
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Iji
	 wire [31:0] npc;
	 wire [31:0] D_instr;
	 wire [31:0] D_pc4;
	 wire pccon;
	Iji Iji(shall,pccon,reset,clk,npc,D_instr,D_pc4);
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Dji
	//�����
	 wire  [4:0] E_a1;
	 wire  [4:0] E_a2;
	 wire  [4:0] E_a3;
	 wire  [31:0] E_v1;
	 wire  [31:0] E_v2;
	 wire  E_grf_en;
	 wire  E_dm_en;
	 wire  [31:0] E_e32;
	 wire  [31:0] E_pc;
	 wire  [`instrbuswk] E_instrbus;
	 ///////////////////////////////
	 ////////��Wji�ߣ�GRF����
	 wire [4:0]W_a3;
	 wire W_grf_en;
	 wire [31:0] W_vin;
	 wire [31:0] W_pc;
	 wire [`instrbuswk] W_instrbus;
	 ///////////////////////
	 //D���ڲ�ת�������
	 wire [31:0] M_vin;
	 wire [4:0] M_a1;
	 wire [4:0] M_a2;
	 wire [4:0] M_a3;
	 wire M_grf_en;
	 wire M_dm_en;
	 wire [31:0] M_pc;
	 wire [`instrbuswk] M_instrbus;
	 wire [31:0] M_aluo;
	 //////////////////////
	 //Djiת���������뵽ģ��
	 //���漶��д��ֵ��д��Ĵ�����дʹ�ܣ����һ��W�����룩
	Dji Dji(E_pc,E_e32,E_instrbus,E_grf_en,E_a3,M_vin,M_grf_en,M_a3,shall,pccon,reset,clk,D_instr,D_pc4,npc,E_a1,E_a2,E_a3,E_v1,E_v2,E_grf_en,E_dm_en,E_e32,E_pc,E_instrbus,W_a3,W_grf_en,W_vin,W_pc,W_instrbus);
	//β����W������
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Eji

	 //////////////////////////////////////////////
	 //Ereg.oת��reg.oΪ����λ��
	 wire [31:0] E_v11;
	 wire [31:0] E_v22;
	 assign E_v11=(M_a3!=0&&E_a1==M_a3&&M_grf_en)?M_vin:
					  (W_a3!=0&&E_a1==W_a3&&W_grf_en)?W_vin:
																	 E_v1;
	assign E_v22=(M_a3!=0&&E_a2==M_a3&&M_grf_en)?M_vin:
					  (W_a3!=0&&E_a2==W_a3&&W_grf_en)?W_vin:
																    E_v2;
	 //////////////////////////////////////////////
	Eji Eji(reset,clk,E_a1,E_a2,E_a3,E_v11,E_v22,E_grf_en,E_dm_en,E_e32,E_pc,E_instrbus,M_vin,M_a1,M_a2,M_a3,M_grf_en,M_dm_en,M_pc,M_instrbus,M_aluo);
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Mji
	/////////////////
	//Mreg.oת��reg.oΪ����λ��//////Ŀǰ������Ϊsw_lw���ͻ����
	wire [31:0] M_vinn;
	assign M_vinn=(W_a3!=0&&M_a2==W_a3&&W_grf_en&&M_dm_en)?W_vin:M_vin;
	//////////////////////////////////////////////////////
	Mji Mji(reset,clk,M_vin,M_vinn,M_a1,M_a2,M_a3,M_grf_en,M_dm_en,M_pc,M_instrbus,M_aluo,W_a3,W_grf_en,W_vin,W_pc,W_instrbus);
	//////////////////////////////////////////////////////////////////////
	//W ji//M��ֱ������D��
	//////////////////////////////////////////////////////////////////////
	//shall
	shallu shallu(D_instr,E_a3,E_instrbus,M_a3,M_instrbus,shall);
	
endmodule
