`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:01:51 11/18/2019 
// Design Name: 
// Module Name:    grf 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module grf(
    input [31:0] pc,
    input [4:0] r1,
    input [4:0] r2,
    output [31:0] d1,
    output [31:0] d2,
    input we,
    input [4:0] r3,
    input [31:0] in_d,
    input clk,
    input reset
    );
reg [31:0] r[0:31];

wire [4:0] rr3;
wire [31:0] iin_d;
integer i;
initial for(i=0;i<32;i=i+1)r[i]=0;

assign d1=r[r1];
assign d2=r[r2];
assign rr3=r3;
assign iin_d=in_d;
always @(posedge clk) begin
								if(reset)for(i=0;i<32;i=i+1)r[i]=0;
								else if(we==1&&rr3!=0)begin r[rr3]=iin_d;
								$display("%d@%h: $%d <= %h",$time, pc, rr3,iin_d);
								end
								else if(we==1&&rr3==0)$display("%d@%h: $%d <= %h",$time, pc, rr3,iin_d);
								end

endmodule