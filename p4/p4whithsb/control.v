`timescale 1ns / 1ps

module ctrl(
	input [5:0]mainop,
	input [5:0]hanshu,
	output reg [1:0]RegDst,
	//00means write GRF is 2th reg in Instr (rt)
	//01means is 3th (rd)
	//10means write GRF is 31 11111 ra
	//这玩意控制一个MUX决定用那个地址GRF
	output reg ALUSrc,//0 means alu numB is from GRF  1  means alunumB is imm from EXT
	output reg [1:0]writetoReg,
	//00means write data GRF is from ALU
	//01:write GRF is DM
	//10 means write data from PC+4
	//这玩意控制一个MUX决定用那个数据写GRF
	output reg sb=0,
	output reg RegWrite,//WE of GRF
	output reg MemWrite,//WE of DM
	output reg beq,
	output reg bne,
	output reg jr,
	output reg jal,//or j 他俩一样jal多了个存pc+4进入GRF ra 31
	output reg [1:0] EXTOp,//EXTOp00zero_ext_01arithmetic_ext_10left_shift16b
	output reg [2:0] ALUOp //0:+ 1:- 2:OR 3:shift 4:judge<
    );




always@(*)begin
	   case(mainop)
	6'b000000://r
		  begin
////////////////////////////////////////////////////////
				if(hanshu==6'b100000)begin   //add
						RegDst=1;//写rd
						ALUSrc=0;
						writetoReg=0;
						RegWrite=1;
						MemWrite=0;
						beq=0;
						bne=0;
						jr=0;
						jal=0;
						EXTOp=0;
						ALUOp=0;//+
					 end
////////////////////////////////////////////////////////
				else if(hanshu==6'b100010)begin   //sub
						RegDst=1;
						ALUSrc=0;
						writetoReg=0;
						RegWrite=1;
						MemWrite=0;
						beq=0;
						bne=0;
						jr=0;
						jal=0;
						EXTOp=0;
						ALUOp=1;//-
					 end
////////////////////////////////////////////////////////
				else if(hanshu==6'b001000)begin//jr
						RegDst=1;//写rd
						ALUSrc=0;
						writetoReg=0;
						RegWrite=0;
						MemWrite=0;
						beq=0;
						bne=0;
						jr=1;
						jal=0;
						EXTOp=0;
						ALUOp=0;//+
					end
////////////////////////////////////////////////////////
				else if(hanshu==6'b000000)begin//sll/nop
						RegDst=1;//写rd
						ALUSrc=0;
						writetoReg=0;
						RegWrite=1;
						MemWrite=0;
						beq=0;
						bne=0;
						jr=0;
						jal=0;
						EXTOp=0;
						ALUOp=3;
					 end
////////////////////////////////////////////////////////
				else if(hanshu==6'b101010)begin//slt
						RegDst=1;//写rd
						ALUSrc=0;
						writetoReg=0;
						RegWrite=1;
						MemWrite=0;
						beq=0;
						bne=0;
						jr=0;
						jal=0;
						EXTOp=0;
						ALUOp=4;
					 end
////////////////////////////////////////////////////////其他？
				else begin
						RegDst=0;
						ALUSrc=0;
						writetoReg=0;
						RegWrite=0;
						MemWrite=0;
						beq=0;
						bne=0;
						jr=0;
						jal=0;
						EXTOp=0;
						ALUOp=0;

					 end
////////////////////////////////////////////////////////
			end
////////////////////////////////////////////////////////
	  6'b001101:    //ori
	     begin
		       RegDst=2'b00;
				 ALUSrc=1;
				 writetoReg=2'b00;
				 RegWrite=1;
				 MemWrite=0;
				 EXTOp=2'b00;
				 ALUOp=2'b10;
				 jr=0;
				 beq=0;
				 bne=0;
				 jal=0;

		  end
////////////////////////////////////////////////////////
	  6'b100011:   //lw
	     begin
		         RegDst=2'b00;
				 ALUSrc=1;
				 writetoReg=2'b01;
				 RegWrite=1;
				 MemWrite=0;
				 EXTOp=2'b01;
				 ALUOp=2'b00;
				 jr=0;
				 beq=0;
				 bne=0;
				 jal=0;
		  end
////////////////////////////////////////////////////////

////////////////////////////////////////////////////////
	  6'b101011:   //sw
	     begin
		       RegDst=2'b00;
				 ALUSrc=1;
				 writetoReg=2'b00;
				 RegWrite=0;
				 MemWrite=1;
				 EXTOp=2'b01;
				 ALUOp=2'b00;
				 jr=0;
				 beq=0;
				bne=0;
				 jal=0;
		  end
////////////////////////////////////////////////////////
		6'b101000:   //sb
	     begin
		       RegDst=2'b00;
				 ALUSrc=1;
				 writetoReg=2'b00;
				 RegWrite=0;
				 MemWrite=1;
				 EXTOp=2'b01;
				 ALUOp=2'b00;
				 jr=0;
				 beq=0;
				bne=0;
				 jal=0;
				 sb=1;
		  end

////////////////////////////////////////////////////////
	  6'b000100:   //beq
	     begin
		       RegDst=2'b00;
				 ALUSrc=0;
				 writetoReg=2'b00;
				 RegWrite=0;
				 MemWrite=0;

				 EXTOp=2'b01;
				 ALUOp=1;
				 jr=0;
				 beq=1;
			//没写bne=0
				 jal=0;
		  end
////////////////////////////////////////////////////////
		6'b000101:  //bne
	     begin
		       RegDst=2'b00;
				 ALUSrc=0;
				 writetoReg=2'b00;
				 RegWrite=0;
				 MemWrite=0;

				 EXTOp=2'b01;
				 ALUOp=1;
				 jr=0;
				 bne=1;
			//没写beq=0
				 jal=0;
		  end
////////////////////////////////////////////////////////
	  6'b001111:   //lui
	     begin
		       RegDst=2'b00;
				 ALUSrc=1;
				 writetoReg=2'b00;
				 RegWrite=1;
				 MemWrite=0;
				 EXTOp=2'b10;
				 ALUOp=2;
				 jr=0;
				 beq=0;
				 jal=0;
		  end
////////////////////////////////////////////////////////
	  6'b000011:   //jal
	     begin
		       RegDst=2'b10;
				 ALUSrc=0;
				 writetoReg=2'b10;
				 RegWrite=1;
				 MemWrite=0;
				 EXTOp=2'b00;
				 ALUOp=0;
				 jr=0;
				 beq=0;
				 jal=1;
		  end
////////////////////////////////////////////////////////
		6'b000010:  //j区别就是regwrite不使能罢了
			begin
		       RegDst=0;
				 ALUSrc=0;
				 writetoReg=0;
				 RegWrite=0;
				 MemWrite=0;
				 EXTOp=2'b00;
				 ALUOp=2'b00;
				 jr=0;
				 beq=0;
				 jal=1;

			end
	default:
	     begin
		       RegDst=2'b00;
				 ALUSrc=0;
				 writetoReg=2'b00;
				 RegWrite=0;
				 MemWrite=0;

				 EXTOp=2'b00;
				 ALUOp=0;
				 jr=0;
				 beq=0;
				 jal=0;
		  end
	  endcase

end
endmodule
