`timescale 1ns / 1ps
module GRF(
    input [4:0] A1RS,
    input [4:0] A2RT,
    input [4:0] A3RD,
    input [31:0] WirD,
    input [31:0] isPC,
    input clk,
    input reset,
    input WirE,
    output [31:0] RDout1,
    output [31:0] RDout2
    );
	reg [31:0] grf[31:0];
	
	integer i;
	initial
		begin
			for(i = 0;i<32;i = i+1)
				begin
					grf[i]=0;
				end
		end
	always@(posedge clk)
	begin
		if(reset)
			begin
				for(i = 0;i<32;i = i+1)
					grf[i]<=0;
			end
		else
			begin
				if(WirE&&A3RD!=0)
				begin
					grf[A3RD]<=WirD;
					$display("@%h: $%d <= %h", isPC, A3RD,WirD);
				end
			end
	end
	
	assign	RDout1 = grf[A1RS];
	assign	RDout2 = grf[A2RT];
	
endmodule