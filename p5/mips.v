`timescale 1ns / 1ps

module mips(
input clk,
input reset
);
//前面是引用的module名   .原module线网（新信号）

wire [31:0] PCplus4D,InstrD,NPC, dPC, dInstr, SignimmD, RD1D, RD2D, ReadDataM, ALUOutM,ALUOutE,
 dPCM,dPC1,dInstr1,dPC2,dInstr2,dPC3,dInstr3,WriteDataE;
wire [15:0] imm;
wire [25:0] imm26;
//本module里 引用模块都是小写 pc im 线网信号冲突了就是大写 如PC NPC



Instruction_Fetch I (
    .StallF(StallF), 
    .PCSrcD(PCSrcD), 
    .reset(reset), 
    .clk(clk), 
    .NPCD(NPC), 
    .InstrD(InstrD), 
    .PCplus4D(PCplus4D), 
    .dPC(dPC1), 
    .dInstr(dInstr1)
    );
	 
	 
	 wire [31:0]ResultW;
	 wire [4:0]rsD,rtD,rdD,rsD0,rtD0,rdD0,
	 WriteRegM,WriteRegE,WriteRegE0;
	 wire [1:0]SDtoRegD,SDtoRegE,SDtoRegM,RegDstD;
	 wire [2:0]ALUOpD;
	 
Decode_RegisterRead D_WandSU(
     .InstrD(InstrD), 
    .PCplus4D(PCplus4D), 
    .NPC(NPC), //向I直通 不流水
    .PCSrcD(PCSrcD), 
    .reset(reset), 
    .clk(clk), 
    .rsD(rsD), 
    .rtD(rtD), 
    .rdD(rdD), 
    .SignimmD(SignimmD), 
    .RegWriteD(RegWriteD), 
    .SDtoRegD(SDtoRegD), 
    .MemWriteD(MemWriteD), 
    .ALUOpD(ALUOpD), 
    .ALUSrcD(ALUSrcD), 
    .RegDstD(RegDstD), 
    .RD1D(RD1D), 
    .RD2D(RD2D), 
	 
	 .dPC3(dPC3),///!!!!!!!!!!!!!!!!!!!!!!!!!!!
	 .dPC2(dPC2),
	 .SDtoRegE(SDtoRegE),
    .ReadDataM(ReadDataM), 
    .ALUOutM(ALUOutM), 
     .SDtoRegM(SDtoRegM), 
    .RegWriteM(RegWriteM), 
	 
    .dPCM(dPCM), ////直接从M级入
    .ALUOutE(ALUOutE), 
	 
	.WriteRegE(WriteRegE),
	.RegWriteE(RegWriteE),
   
	 .WriteRegE0(WriteRegE0),
    .rsD0(rsD0), //不流水的几个 处理冲突时候用
    .rtD0(rtD0), 
    .rdD0(rdD0), 
	 .ResultW(ResultW),
	 
    .idPC(dPC1), 
    .idInstr(dInstr1), 
    .dPC(dPC2), 
    .dInstr(dInstr2),
	 
	 .WriteRegM(WriteRegM),
.StallF(StallF),
.StallD(StallD)
    );
wire [1:0]ForwardAE,ForwardBE;
wire [4:0]rsE,rtE,rdE;
Execute E (
 .rsD(rsD), 
    .rtD(rtD), 
    .rdD(rdD), 
    .SignimmD(SignimmD), 
    .RegWriteD(RegWriteD), 
    .SDtoRegD(SDtoRegD), 
    .MemWriteD(MemWriteD), 
    .ALUOpD(ALUOpD), 
    .ALUSrcD(ALUSrcD), 
    .RegDstD(RegDstD), 
    .RD1D(RD1D), 
    .RD2D(RD2D), 
    .reset(reset), 
    .clk(clk), 
    .RegWriteE(RegWriteE), 
    .SDtoRegE(SDtoRegE), 
    .MemWriteE(MemWriteE), 
    .ALUOutE(ALUOutE), 
    .WriteDataE(WriteDataE), 
    .WriteRegE(WriteRegE), 
	 
	 
	 .WriteRegE0(WriteRegE0),//output
    .ResultW(ResultW), //input

    .WriteRegM(WriteRegM), 
    .RegWriteM(RegWriteM), 
    .FlushE(FlushE), 
	 
	 
    .idPC(dPC2), 
    .idInstr(dInstr2), 
    .dPC(dPC3), 
    .dInstr(dInstr3) ,
	 //!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	 .dPCM(dPCM),
	
	 	 .SDtoRegM(SDtoRegM)
	 
	 
	 );
Memory M (
     .RegWriteE(RegWriteE), 
    .SDtoRegE(SDtoRegE), 
    .MemWriteE(MemWriteE), 
    .ALUOutE(ALUOutE), 
    .WriteDataE(WriteDataE), 
    .WriteRegE(WriteRegE), 
    .reset(reset), 
    .clk(clk), 
    .ReadDataM(ReadDataM), 
    .ALUOutM(ALUOutM), 
    .RegWriteM(RegWriteM), 
    .WriteRegM(WriteRegM), 
    .SDtoRegM(SDtoRegM), 
    .idPC(dPC3), 
    .idInstr(dInstr3), 
    .dPC(dPCM), ////////////jal 和grfdisplay 直接输出到d w
	.ResultW(ResultW)
    );
	 
 



endmodule