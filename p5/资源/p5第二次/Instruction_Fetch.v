`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:32:08 12/21/2021 
// Design Name: 
// Module Name:    Instruction_Fetch 
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
module Instruction_Fetch(   
	 input StallF, 
	 input PCSrcD,
	 
    input reset,
    input clk,
    input [31:0] NPCD,
	 //////寄存器
	 output reg [31:0] InstrD,
	 output reg [31:0] PCplus4D,
	 
//);
/////////////////////////////////////////////////////////////////////////////////////////
	 output reg [31:0] dPC,//仅仅为了输出
	 output reg [31:0] dInstr//仅仅为了debug
 );

/////////////////////////////////////////////////////////////////////////////////////////
wire [31:0] NPC,PC,Instr;
pc pc(   clk, reset,NPC,PC  );
IM im ( PC, Instr  );


assign NPC=StallF?PC:
				PCSrcD?NPCD:(PC+4);

	initial begin
	InstrD=0;
	PCplus4D=32'h00003004;
	end        
	always @(posedge clk) begin
			if(reset)begin
				InstrD<=0;
				PCplus4D<=32'h00003004;

			end
			else if(StallF)begin 
			
			//////不变
			end
			else begin
			InstrD<=Instr;
			PCplus4D<=PC+4;
			end
	end
	
	/////////////////////////////////////////////////////////////////////////////////////////
	always@(posedge clk)begin
			dPC<=PC;
			dInstr<=Instr;
	end
	
  DASM dasm (
    .pc(dPC), 
    .instr(dInstr), 
    .reg_name(1'b1), 
    .imm_as_dec(1'b0), 
    .asm()
    );//输出的是PC延后的PC寄存器输出的I级输入的
/////////////////////////////////////////////////////////////////////////////////////////


endmodule
