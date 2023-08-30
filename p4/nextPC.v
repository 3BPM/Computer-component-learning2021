`timescale 1ns / 1ps

module nextPC(
   input[31:0] PC,
	input[15:0] imm,    //beq中16位imm
	input[25:0] imm26,   //jal中26位imm
	input[31:0] Drs,    //jr中Drs存储的地址
	input jal,
	input jr,     		//
	input beq,
	input bne,
	input iseq,
	output reg[31:0] NPC,
	output[31:0] PCplus4
    );
	 assign PCplus4=PC+4;
	 reg[31:0] ext_imm=0;
	 always@(*)begin
	   if(jr)  //jr
		  NPC=Drs;
		else if(jal)   //jal or j
		  NPC={PC[31:28],imm26,2'b00};
		else if(iseq&&beq==1) //beq
		NPC=PC+4+{{14{imm[15]}},imm,2'b00};
		else if(iseq==0&&bne==1) //bne
			 NPC=PC+4+{{14{imm[15]}},imm,2'b00};
		else 
		  NPC=PC+4;
	 end


endmodule
