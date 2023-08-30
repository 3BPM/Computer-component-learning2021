`timescale 1ns / 1ps

module DM(

    input[31:0] addr,
	 input clk,
	 input reset,
	 input WE,
	 input[31:0] WD,
	 ///////////////////////ÎªÁËÊä³ö£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡	 
	 input [31:0]pc,
	 
	 output[31:0] RD
	);
	 wire[9:0] address;
	 reg[31:0] dm[1023:0];    //RAM

	 assign address[9:0]=addr[11:2];
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
			
			$display("@%h: *%h <= %h",pc,addr,WD);
 		  end
		end
	 end


endmodule
