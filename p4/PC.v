`timescale 1ns / 1ps
// all clk and reset are input. in=module in
module PC(
     input[31:0] NPC,
	  input clk,
	  input reset,
	  output reg[31:0] PC
);
	 initial begin
	    PC=32'h00003000;
	 end
	 
	 always@(posedge clk)begin
	    if(reset)
		    PC<=32'h00003000;
		 else 
		    PC<=NPC;
	 end
endmodule
