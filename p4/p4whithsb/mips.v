`timescale 1ns / 1ps

module mips(
input clk,
input reset
);
//前面是引用的module名   .原module线网（新信号）

wire [31:0] NPC,PCplus4,PC,Drs;
wire [15:0] imm;
wire [25:0] imm26;
//本module里 引用模块都是小写 pc im 线网信号冲突了就是大写 如PC NPC


PC pc (
		.NextPC(NPC),
		.clk(clk),
		.reset(reset),
		.isPC(PC)
		);
nextPC npc (
    .isPC(PC), 
    .imm16(imm), 
    .imm26(imm26), 
    .Drs(Drs), 
    .jal(jal), 
    .jr(jr), 
    .beq(beq), 
    .bne(bne), 
    .iseq(iseq), 
    .NextPC(NPC), 
    .PCjia4(PCplus4)
    );



wire [31:0]Instr;
wire [5:0] op,func;
wire [4:0] rs,rt,rd,s;
////
IM im(
	.adder(PC), //pc to im
	.imop(op),///////////////////////////////
	.hanshu(func),////////////////////////////////////////
	.rs(rs),
	.rt(rt),
	.rd(rd),
	.s(s),
	.imm15(imm),/////////////////////////////////////////
	.imm26(imm26),
	.Instr(Instr)//31
);


wire [1:0] RegDst,WhatdatatoReg, EXTOp;
wire [2:0]ALUOp;
ctrl control (
    .mainop(op), 
    .hanshu(func), 
    .RegDst(RegDst), //2 Reg写入的地址选择跟jal 存入ra有关 jal只能存ra 跟jr 可以取任何寄存器
    .ALUSrc(ALUSrc), 
    .writetoReg(WhatdatatoReg),//2
    .RegWrite(RegWrite), 
    .MemWrite(MemWrite), 
    .beq(beq),
 .bne(bne),
    .jr(jr), 
    .jal(jal), 
    .EXTOp(EXTOp), //2
    .ALUOp(ALUOp),//2
    .sb(sb)
    );
	 
wire [4:0] A1,A2,A3;
wire [31:0] WD,Result,MemoutData_in,N1RtoA,N2;

mux3_5 muxregWaddr(
	.control(RegDst),////////////////////////////////////////
	.dinput0(rt),////////////////////////////////////////
	.dinput1(rd),////////////////////////////////////////
	.dinput2(5'b11111),////////////////////////////////////////
	.out(A3)//toGRF  写入address/////////////////////////////////////////////////
);	 

mux3_32 muxregWD(
	.control(WhatdatatoReg),////////////////////////////////////////
	.dinput0(Result),////////////////////////////////////////
	.dinput1(MemoutData_in),////////////////////////////////////////
	.dinput2(PCplus4),////////////////////////////////////////
	.out(WD)//toGRF 写入数据/////////////////////////////////////////////////
);

GRF grf (
    .A1RS(A1), 
    .A2RT(A2), 
    .A3RD(A3), 
    .WirD(WD), 
    .isPC(PC), 
    .clk(clk), 
    .reset(reset), 
    .WirE(RegWrite), 
    .RDout1(N1RtoA), 
    .RDout2(N2)
    );
	
assign A1=rs;
assign A2=rt;	 
 
wire [31:0] Eresult; 
EXT ext(
	.EXTOp(EXTOp),
	.fromimm(imm),////////////////////////////////////////
	.Result(Eresult)
);

wire [31:0] B;


 mux2_32 muxALUnumB(
	.control(ALUSrc),////////////////////////////////////////
	.dinput0(N2),////////////////////////////////////////
	.dinput1(Eresult),////////////////////////////////////////
	.out(B)//toALU numB/////////////////////////////////////////////////
);
 
ALU alu(
    .ARS(N1RtoA), 
    .BRT(B), 
    .ALUop(ALUOp), 
	 .s(s),
    .Result(Result), 
    .shieq(iseq)
    );

 
wire [31:0] MemAddr,MemData,MemoutData; //MemData是要写入的数据 MemoutData是读取的 MemAddr是地址
assign MemAddr=Result;
assign MemData=N2;
DM dm(
	.adder(MemAddr),
	.clk(clk),
	.reset(reset),
	.WirE(MemWrite),//、、、、、、、、、、、、、、、、、、、、
	.writedata(MemData),
	.readdata(MemoutData),
    .sb(sb),

	///////////////////////为了输出！！！！！！！！！！！！！！！
	.ispc(PC)////////////////////////////////////////
);
assign MemoutData_in=MemoutData;
assign Drs=N1RtoA;/////为了jr GRF输出的第一个32位data



endmodule