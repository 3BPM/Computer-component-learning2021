`timescale 1ns / 1ps
module GRF(
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    input [31:0] PC,
    input clk,
    input reset,
    input WE,
    output [31:0] RD1,
    output [31:0] RD2
    );
	reg [31:0] grf[31:0];
	
	integer i;
	initial
		begin
			for(i = 0;i<29;i = i+1)
				begin
					grf[i]=0;              
				end
			grf[29]=32'h00002ffc;
			grf[30]=0;
			grf[31]=0;
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
				if(WE&&A3!=0)
				begin
					grf[A3]<=WD;
				
					 $display("%d@%h: $%d <= %h", $time, PC,  A3,WD);
				end
			end
	end
	
	assign	RD1 = grf[A1];
	assign	RD2 = grf[A2];
	
endmodule