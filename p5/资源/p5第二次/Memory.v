`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:34:40 12/21/2021 
// Design Name: 
// Module Name:    Memory 
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
module Memory(

							   input RegWriteE,
                        input [1:0]SDtoRegE,
                        input MemWriteE,
								 
								 input [31:0]ALUOutE,
								 input [31:0]WriteDataE,
								input [4:0]WriteRegE,
								

   					    input reset,
							input clk,				
								//要流水的
								output reg [31:0]ReadDataM=0,
								output reg [31:0]ALUOutM=0,//经过M级寄存器后的ALUOut								
			               output reg  RegWriteM=0,
								output reg [4:0]WriteRegM=0,
								output reg [1:0]SDtoRegM=0,
		
		//转发
		input [31:0] ResultW,

//);		
////////////////////////////////////////////////////////////////////////////////////////////////////超级结尾其实只是个）；
   input [31:0] idPC,//仅仅为了输出 
	input [31:0] idInstr,//仅仅为了debug	
	output reg [31:0] dPC//仅仅为了输出  这个还有算JALPC+8
	
);
always @(posedge clk) begin
	dPC<=idPC;	
end
DASM dasm (    .pc(idPC),     .instr(idInstr),     .reg_name(1'b1),     .imm_as_dec(1'b0),     .asm()    );
////////////////////////////////////////////////////////////////////////////////////////////////////超级结尾其实只是个）；

assign WriteReg=WriteRegE;

wire[31:0]WD=(MemWriteE == 1 
&& WriteRegE == WriteRegM && WriteRegM && RegWriteM && !RegWriteE)
? ResultW : WriteDataE;
	

wire [31:0]RD;

DM DM (
    .A(ALUOutE), 
    .clk(clk), 
    .reset(reset), 
    .WE(MemWriteE), 
    .WD(WD), 
    .PC(idPC), 
    .RD(RD)
    );



always @(posedge clk) begin
			if(reset)begin
				ReadDataM<=0;
				ALUOutM<=0;								
				RegWriteM<=0;
				WriteRegM<=0;								
				SDtoRegM<=0;
			end
			else begin
			   ReadDataM<=RD;
				ALUOutM<=ALUOutE;								
				RegWriteM<=RegWriteE;
				WriteRegM<=WriteRegE;								
				SDtoRegM<=SDtoRegE;
			end
end

endmodule
