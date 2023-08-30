`timescale 1ns / 1ps
// all clk and reset are input. in=module in
module PC(
     input[31:0] NextPC,
	  input clk,
	  input reset,
	  output reg[31:0] isPC
);
	 initial begin
	    isPC=32'h00003000;
	 end
	 
	 always@(posedge clk)begin
	    if(reset)
		    isPC<=32'h00003000;
		 else 
		    isPC<=NextPC;
	 end
endmodule
