`timescale 1ns / 1ps

module mips(
input clk,
input reset
);
//ǰ�������õ�module��   .ԭmodule���������źţ�

wire [31:0] NPC,PCplus4,PC,Drs;
wire [15:0] imm;
wire [25:0] imm26;
//��module�� ����ģ�鶼��Сд pc im �����źų�ͻ�˾��Ǵ�д ��PC NPC


PC pc (NPC,clk,reset,PC);
nextPC npc (
    .PC(PC), 
    .imm(imm), 
    .imm26(imm26), 
    .Drs(Drs), 
    .jal(jal), 
    .jr(jr), 
    .beq(beq), 
    .bne(bne), 
    .iseq(iseq), 
    .NPC(NPC), 
    .PCplus4(PCplus4)
    );



wire [31:0]Instr;
wire [5:0] op,func;
wire [4:0] rs,rt,rd,s;
////
IM im(
	.addr(PC), //pc to im
	.op(op),///////////////////////////////
	.func(func),////////////////////////////////////////
	.rs(rs),
	.rt(rt),
	.rd(rd),
	.s(s),
	.imm(imm),/////////////////////////////////////////
	.imm26(imm26),
	.Instr(Instr)//31
);


wire [1:0] RegDst,WhatdatatoReg, EXTOp;
wire [2:0]ALUOp;
ctrl control (
    .op(op), 
    .func(func), 
    .RegDst(RegDst), //2 Regд��ĵ�ַѡ���jal ����ra�й� jalֻ�ܴ�ra ��jr ����ȡ�κμĴ���
    .ALUSrc(ALUSrc), 
    .WhatdatatoReg(WhatdatatoReg),//2
    .RegWrite(RegWrite), 
    .MemWrite(MemWrite), 
    .beq(beq),
 .bne(bne),
    .jr(jr), 
    .jal(jal), 
    .EXTOp(EXTOp), //2
    .ALUOp(ALUOp)//2
    );
	 
wire [4:0] A1,A2,A3;
wire [31:0] WD,Result,MemoutData_in,N1RtoA,N2;

mux3_5 muxregWaddr(
	.ctrl(RegDst),////////////////////////////////////////
	.din0(rt),////////////////////////////////////////
	.din1(rd),////////////////////////////////////////
	.din2(5'b11111),////////////////////////////////////////
	.out(A3)//toGRF  д��address/////////////////////////////////////////////////
);	 

mux3_32 muxregWD(
	.ctrl(WhatdatatoReg),////////////////////////////////////////
	.din0(Result),////////////////////////////////////////
	.din1(MemoutData_in),////////////////////////////////////////
	.din2(PCplus4),////////////////////////////////////////
	.out(WD)//toGRF д������/////////////////////////////////////////////////
);

GRF grf (
    .A1(A1), 
    .A2(A2), 
    .A3(A3), 
    .WD(WD), 
    .PC(PC), 
    .clk(clk), 
    .reset(reset), 
    .WE(RegWrite), 
    .RD1(N1RtoA), 
    .RD2(N2)
    );
	
assign A1=rs;
assign A2=rt;	 
 
wire [31:0] Eresult; 
EXT ext(
	.EXTOp(EXTOp),
	.immin(imm),////////////////////////////////////////
	.Result(Eresult)
);

wire [31:0] B;


 mux2_32 muxALUnumB(
	.ctrl(ALUSrc),////////////////////////////////////////
	.din0(N2),////////////////////////////////////////
	.din1(Eresult),////////////////////////////////////////
	.out(B)//toALU numB/////////////////////////////////////////////////
);
 
ALU alu(
    .A(N1RtoA), 
    .B(B), 
    .ALUop(ALUOp), 
	 .s(s),
    .Result(Result), 
    .iseq(iseq)
    );

 
wire [31:0] MemAddr,MemData,MemoutData; //MemData��Ҫд������� MemoutData�Ƕ�ȡ�� MemAddr�ǵ�ַ
assign MemAddr=Result;
assign MemData=N2;
DM dm(
	.addr(MemAddr),
	.clk(clk),
	.reset(reset),
	.WE(MemWrite),//����������������������������������������
	.WD(MemData),
	.RD(MemoutData),

	///////////////////////Ϊ�����������������������������������
	.pc(PC)////////////////////////////////////////
);
assign MemoutData_in=MemoutData;
assign Drs=N1RtoA;/////Ϊ��jr GRF����ĵ�һ��32λdata



endmodule