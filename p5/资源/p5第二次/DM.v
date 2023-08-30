`timescale 1ns / 1ps

module DM(

    input[31:0] A,
	 input clk,
	 input reset,
	 input WE,
	 input[31:0] WD,
	 ///////////////////////为了输出！！！！！！！！！！！！！！！	 
	 input [31:0]PC,
	 
	 output[31:0] RD
	);
	 wire[9:0] address;
	 reg[31:0] dm[1023:0];    //RAM  12KB(32bit/（4B）×3072word) 所以要12位宽地址


	 assign address[9:0]=A[13:2];//12位宽
	 assign RD=dm[address];

	 integer i;
	 initial begin
	   for(i=0;i<1024;i=i+1)begin
		  dm[i]<=0;
		end
	 end

	 always@(posedge clk)begin
	 if(reset)begin
	   for(i=0;i<1024;i=i+1)begin
		  dm[i] <=0;
		end
	 end
	   else begin
		  if(WE)begin
		    dm[address] <=WD;
			$display("%d@%h: *%h <= %h", $time, PC,A,WD);
 		  end
		end
	 end


endmodule
