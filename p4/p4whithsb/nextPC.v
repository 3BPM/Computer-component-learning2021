`timescale 1ns / 1ps

module nextPC(
   input[31:0] isPC,
	input[15:0] imm16,    //beq中16位imm
	input[25:0] imm26,   //jal中26位imm
	input[31:0] Drs,    //jr中Drs存储的地址
	input jal,
	input jr,     		//
	input beq,
	input bne,
	input iseq,
	output reg[31:0] NextPC,
	output[31:0] PCjia4
    );
	 assign PCjia4=isPC+4;
	 reg[31:0] ext_imm=0;
	 always@(*)begin
	   if(jr)  //jr
		  NextPC=Drs;
		else if(jal)   //jal or j
		  NextPC={isPC[31:28],imm26,2'b00};
		else if(iseq&&beq==1) //beq
		NextPC=isPC+4+{{14{imm16[15]}},imm16,2'b00};
		else if(iseq==0&&bne==1) //bne
			 NextPC=isPC+4+{{14{imm16[15]}},imm16,2'b00};
		else 
		  NextPC=isPC+4;
	 end


endmodule
