`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:43:04 11/17/2021 
// Design Name: 
// Module Name:    P1_L0_Q5 
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
module string(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );

parameter S0=2'b00, S1=2'b01, S2=2'b10, S3=2'b11;
reg [2:0] state=S0;

always@(posedge clk or posedge clr )begin
	if(clr == 1)
	begin
		state <= S0;
	end
	else
	begin
		if(state == S0)
		begin
			if(in >= "0" && in <= "9")
			begin
				state <= S1;
			end
			else if(in == "+" || in == "*")
			begin
				state <= S3;
			end
		end
		
		else if(state == S1)
		begin
			if(in >= "0" && in <= "9")
			begin
				state <= S3;
			end
			else if(in == "+" || in == "*")
			begin
				state <= S2;
			end
		end
		
		else if(state == S2)
		begin
			if(in >= "0" && in <= "9")
			begin
				state <= S1;
			end
			else if(in == "+" || in == "*")
			begin
				state <= S3;
			end
		end
	end
end
assign out=(state==S1);
endmodule
