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

                         input [4:0] rsD,//������Ҫ����ͻ��Ԫ
                         input [4:0] rtD,//
                         input [4:0] rdD,
								 
								 
                         input [31:0] SignimmD,	
								 
								 
                         input RegWriteD,
                         input [1:0]SDtoRegD,//Control��selectdatatoreg
                         input MemWriteD,
                         input [2:0]ALUOpD,
								input 	ALUSrcD,
                         input [1:0]RegDstD,
								 input [31:0]RD1D,
								 input [31:0]RD2D,
								 
					    input reset,
							input clk,			 
								 //Ҫ��ˮ��
							    output reg RegWriteE=0,
                         output reg [1:0]SDtoRegE=0,
                         output reg MemWriteE=0,
								 
								  output reg [31:0]ALUOutE=0,
								  output reg [31:0]WriteDataE=0,
								 output reg [4:0]WriteRegE=0,
								 
								 

								//��ͻ����
								//ת��input
							input [4:0]WriteRegM,
							input RegWriteM,
								input [31:0]ResultW,//����add add�ĳ�ͻ					
								
								
			
								input FlushE,//��ͣ
								
								
								 output [4:0]WriteRegE0,


////////////////////////////////////////////////////////////////////////////////////////////////////������β��ʵֻ�Ǹ�����
   input [31:0] idPC,//����Ϊ�����
	input [31:0] idInstr,//����Ϊ��debug	
	output reg [31:0] dPC,//����Ϊ�����
	output reg [31:0] dInstr//����Ϊ��debug
);
always @(posedge clk) begin
	dPC<=idPC;	dInstr<=idInstr;
end
DASM dasm (    .pc(idPC),     .instr(idInstr),     .reg_name(1'b1),     .imm_as_dec(1'b0),     .asm()    );
////////////////////////////////////////////////////////////////////////////////////////////////////������β��ʵֻ�Ǹ�����

////����һ��ת��!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	wire [1:0] ForwardAE=(rsD==WriteRegE&&RegWriteE&&rsD!=0)?2:
								(rsD==WriteRegM&&RegWriteM&&rsD!=0)?1:0;
	wire [1:0] ForwardBE=								(rtD==WriteRegE&&RegWriteE&&rtD!=0)?2:
	(rtD==WriteRegM&&RegWriteM&&rtD!=0)?1:0;


/////
wire [31:0]SrcA,WriteData,SrcB;
	mux3_32 selectSrcA (
    .ctrl(ForwardAE), //ѡA
    .din0(RD1D), 
    .din1(ResultW), 
    .din2(ALUOutE), 
    .out(SrcA)
    );
	 	mux3_32 selectSrcB0 (
    .ctrl(ForwardBE), //ѡB
    .din0(RD2D), 
    .din1(ResultW), 
    .din2(ALUOutE), 
    .out(WriteData)////��Ҫ�ھ���ALUSrc��ѡ�������SrcB
    );
	 	mux2_32 selectSrcB(
    .ctrl(ALUSrcD), //ѡB
    .din0(WriteData), 
    .din1(SignimmD), 
    .out(SrcB)////��Ҫ�ھ���ALUSrc��ѡ�������SrcB
    );
	 wire [4:0]WriteReg;//�Ǹ�GRF��ַҪ��ˮ��W
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
    .ALUop(ALUOpD), //Dֱ��
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