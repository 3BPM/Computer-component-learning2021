`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:51:59 11/17/2019 
// Design Name: 
// Module Name:    npc 
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
module npc(
    input [15:0] imm16,
    input [31:0] imm32,
    input [25:0] imm26,
    input [1:0] npccon,
    input [31:0] pc4,//来自@D
	 output reg [31:0] npc//送入pc
    );
always @* begin
				if(npccon==2'b01)begin//基地址加偏移
				npc<=pc4+{{14{imm16[15]}},{imm16},{2{1'b0}}};
										end
				else if(npccon==2'b10)npc<=imm32;//寄存器读出直接写入PC
				else if(npccon==2'b11)npc<={pc4[31:28],imm26,{2{1'b0}}};//26位寻址
				else npc<=pc4+4;end

endmodule
