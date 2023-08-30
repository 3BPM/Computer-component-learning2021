`timescale 1ns / 1ps

module ALU(
    input[31:0] A,
	 input[31:0] B,
	 input[2:0] ALUop,
	 input [4:0] s,
	 output reg[31:0] Result=0
    );
	 always@(*)begin
	   case(ALUop)
		3'b000:Result=A+B;
		3'b001:Result=A-B;
		3'b010:Result=A|B;
		3'b011:Result=B<<s;//3
		4:Result=(A<B);
		endcase
    end


endmodule
