`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:34:17 12/21/2021 
// Design Name: 
// Module Name:    Execute 
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
module Execute(

                         input [4:0] rsD,//这俩还要给冲突单元
                         input [4:0] rtD,//
                         input [4:0] rdD,
								 
								 
                         input [31:0] SignimmD,	
								 
								 
                         input RegWriteD,
                         input [1:0]SDtoRegD,//Control里selectdatatoreg
                         input MemWriteD,
                         input [2:0]ALUOpD,
								input 	ALUSrcD,
                         input [1:0]RegDstD,
								 input [31:0]RD1D,
								 input [31:0]RD2D,
								 
					    input reset,
							input clk,			 
								 //要流水的
							    output reg RegWriteE=0,
                         output reg [1:0]SDtoRegE=0,
                         output reg MemWriteE=0,
								 
								  output reg [31:0]ALUOutE=0,
								  output reg [31:0]WriteDataE=0,
								 output reg [4:0]WriteRegE=0,
								 
								 

								//冲突处理
								//转发input
							input [4:0]WriteRegM,
							input RegWriteM,
								input [31:0]ResultW,//处理add add的冲突					
								
								
			
								input FlushE,//暂停
								
								
								 output [4:0]WriteRegE0,


////////////////////////////////////////////////////////////////////////////////////////////////////超级结尾其实只是个）；
   input [31:0] idPC,//仅仅为了输出
	input [31:0] idInstr,//仅仅为了debug	
	output reg [31:0] dPC,//仅仅为了输出
	output reg [31:0] dInstr//仅仅为了debug
);
always @(posedge clk) begin
	dPC<=idPC;	dInstr<=idInstr;
end
DASM dasm (    .pc(idPC),     .instr(idInstr),     .reg_name(1'b1),     .imm_as_dec(1'b0),     .asm()    );
////////////////////////////////////////////////////////////////////////////////////////////////////超级结尾其实只是个）；

////处理一下转发!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	wire [1:0] ForwardAE=(rsD==WriteRegE&&RegWriteE&&rsD!=0)?2:
								(rsD==WriteRegM&&RegWriteM&&rsD!=0)?1:0;
	wire [1:0] ForwardBE=								(rtD==WriteRegE&&RegWriteE&&rtD!=0)?2:
	(rtD==WriteRegM&&RegWriteM&&rtD!=0)?1:0;


/////
wire [31:0]SrcA,WriteData,SrcB;
	mux3_32 selectSrcA (
    .ctrl(ForwardAE), //选A
    .din0(RD1D), 
    .din1(ResultW), 
    .din2(ALUOutE), 
    .out(SrcA)
    );
	 	mux3_32 selectSrcB0 (
    .ctrl(ForwardBE), //选B
    .din0(RD2D), 
    .din1(ResultW), 
    .din2(ALUOutE), 
    .out(WriteData)////还要在经过ALUSrc的选择才能是SrcB
    );
	 	mux2_32 selectSrcB(
    .ctrl(ALUSrcD), //选B
    .din0(WriteData), 
    .din1(SignimmD), 
    .out(SrcB)////还要在经过ALUSrc的选择才能是SrcB
    );
	 wire [4:0]WriteReg;//是个GRF地址要流水到W
mux3_5 selectRegWAddr(
	.ctrl(RegDstD),
	.din0(rtD),
	.din1(rdD),
	.din2(5'b11111),
   .out(WriteReg)
);
assign WriteRegE0=WriteReg;

wire [31:0]ALUOut;
ALU alu (
    .A(SrcA), 
    .B(SrcB), 
    .ALUop(ALUOpD), //D直连
    .Result(ALUOut)

    );
	 

		 
	always @(posedge clk) begin
		if(reset)begin
				RegWriteE<=0;
				SDtoRegE<=0;
				MemWriteE<=0;
				ALUOutE<=0;
				WriteDataE<=0;
				WriteRegE<=0;		
		end
		else begin
				RegWriteE<=	RegWriteD;
				SDtoRegE<=SDtoRegD;
				MemWriteE<=MemWriteD;

				ALUOutE<=ALUOut;
				WriteDataE<=WriteData;
				WriteRegE<=WriteReg;		
		end
	end 	


endmodule