`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    16:56:49 12/21/2021
// Design Name:
// Module Name:    Decode_RegisterRead
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
module Decode_RegisterRead(input [31:0] InstrD,
                           input [31:0] PCplus4D,
                        
                           output [31:0] NPC,//直接给I级
									output PCSrcD,    //直接给I级
									
									
									
						  input reset,
						input clk,
									//要流水的来了
                           output reg [4:0] rsD,//这俩还要给冲突单元
                           output reg [4:0] rtD,//
                           output reg [4:0] rdD,
                           output reg [31:0] SignimmD,	
                           output reg RegWriteD,
                           output reg [1:0]SDtoRegD,//Control里selectdatatoreg
                           output reg MemWriteD,
                           output reg [2:0]ALUOpD,
									output reg 	ALUSrcD,
                           output reg [1:0]RegDstD,
									
									output reg [31:0] RD1D,
									output reg [31:0] RD2D,
						//			output reg [31:0]PCplus8D,

 
//W级输入（从M）！！！！	
input [31:0] ReadDataM,
input[31:0]ALUOutM,

input [1:0]SDtoRegM,
input RegWriteM,							
input [4:0]WriteRegM,



input [31:0]dPCM,  //为了输出 这个还有算JALPC+8
//W级！！！！								
								
								//冲突处理SU
								//转发input
			//从E之后 M内
			input [4:0]WriteRegE0,
							
								input [31:0]ALUOutE,//处理add add的冲突
								 input [4:0]WriteRegE,
								 input RegWriteE,//E级的结果
								//暂停
							
							
								output [4:0]rsD0,
								output [4:0]rtD0,
								output [4:0]rdD0,
								//还得output 一下W
								output [31:0]ResultW,


//再加一个su功能

output StallF,
output StallD,

//);		 
////////////////////////////////////////////////////////////////////////////////////////////////////超级结尾其实只是个）；
   input [31:0] idPC,//仅仅为了输出也是代表了这级PC嘛？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？
	input [31:0] idInstr,//仅仅为了debug																						//
	output reg [31:0] dPC,//仅仅为了输出																						 //
	output reg [31:0] dInstr//仅仅为了debug																					  //
);																																			//
always @(posedge clk) begin																										//
	dPC<=idPC;	dInstr<=idInstr;																							     //
end																																	 //    //
DASM dasm ( .pc(idPC),.instr(idInstr),.reg_name(1'b1),.imm_as_dec(1'b0),.asm());								//     //
////////////////////////////////////////////////////////////////////////////////////////////////////超级结尾其实只是个）；




	wire [4:0] rs;
	wire [4:0] rt;
	wire[4:0] rd;
	wire [4:0] s;
	wire [15:0] imm;
	wire [25:0] imm26;
	//不流水
	wire [1:0] typeJB;//这个是选择NPC的没啥用
	 wire [1:0] EXTOp;//EXTOp0：zero_ext_1：arithmetic_ext_2：left_shift16b

		
	 wire[1:0]RegDst;	//0：写入GRF的地址A3是rt（第二个） 1：rd（第三个） 2： 31 11111（jal时候用到） 
	//这玩意控制一个MUX决定用那个地址GRF 要流水到E
	
	 wire[1:0]SDtoReg;	//0： ALU	 1: DM	2：jal PC+8这玩意控制一个MUX决定用那个数据写GRF
	////////////////////////////////这玩意要流水一圈

	 wire [2:0] ALUOp; //0:+ 1:- 2:OR 3:shift 4:
	 wire ALUSrc; //ALUB0是从GRF 1：从ext
	
	
	ctrl control (
    .Instr(InstrD), //直接输入
    .rs(rs), 
    .rt(rt), 
    .rd(rd), 
    .s(s), 
    .imm(imm), 
    .imm26(imm26), 
	  .EXTOp(EXTOp), //不流水
	  .typeJB(typeJB), //不流水
	  
	  //为了产生pc是否真要改（PCSrcD） 与cmp模块。
	.jump(jump), 
	.beq(beq), 
	.blt(blt),

    .RegDst(RegDst), //流水到E！！
    .ALUSrc(ALUSrc), //流水到E
    .SelectdatatoReg(SDtoReg), 	////////////////////////////////流水一圈到W
    .RegWrite(RegWrite),                 ////////////////////////////////流水一圈到W
    .MemWrite(MemWrite), ////////////////////////////////流水到M  
	 
	 
    .ALUOp(ALUOp)//流水到E
    );	
	
								assign rsD0=rs;
								assign rtD0=rt;
								assign rdD0=rd;
	
	
	wire [31:0]WD3,RD1,RD2,RD10,RD20;
    GRF grf(//从control里接(集成了一分线器)
	 .A1(rs),
    . A2(rt),
    .A3(WriteRegM),//!!!!!!!!!!!!!!!!!!!!流水完的W
    . WD(WD3),//!!!!!!!!!!!!!!!!!!!!流水完的W
    . PC(dPCM),//!!!!!!!!!!!!!!!!!!!!流水完的W
    .clk(clk),
    . reset(reset),
    . WE(RegWriteM),//!!!!!!!!!!!!!!!!!!!!流水完的W
    .RD1(RD10),
    .RD2(RD20)
    );
	 
	 
	 //处理一下内部转发！！！！！！！！！！！！！！
assign RD1= ((WriteRegM==rs)&&(RegWriteM)&&rs!=0  )  ?WD3:RD10;
assign RD2= ((WriteRegM==rt)&&(RegWriteM)&&rt!=0   ) ?WD3:RD20;

	
	 //W级！！！！！！！！！！！！！！！！！！！！！！！！！！
	 assign WD3=(SDtoRegM==0)? ALUOutM://写入数据是alu结果
						(SDtoRegM==1)?   ReadDataM:	  //写入数据是内存读取
	 (SDtoRegM==2)?  (dPCM+8) :
	 32'hxxxx_xxxx;
	 
	 //直连M的输出
	 
	 //还得输出给E解决一下冲突
	 assign ResultW=WD3;
	 
	 
	wire [31:0]SignResult;
    EXT ext(
    .EXTOp(EXTOp),
    .immin(imm), 
    .Result(SignResult)
    );


/////这个模块主要是比较 和control信号一起看看是否需跳转 这玩意要处理冲突的 转发一下！！！！只考虑E级寄存器之后的就行了
  
wire ForwardAD= (WriteRegE==rs)&&RegWriteE&& rs != 5'b0;
wire ForwardBD= (WriteRegE==rt)&&RegWriteE&& rt!= 5'b0;
//只有一种情况嘛？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？
//其他的情况得暂停了!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
////////////////////////////////////////////////////////////////////////////////////////////////////////直接转发
   wire [31:0]CA=(ForwardAD)? ALUOutE:RD1;//省的MUX了
	wire [31:0]CB=(ForwardBD)? ALUOutE:RD2;//!!!!!!!!!!!!!!!!!!!!!!还不对
	
	
	
	 CMP cmp(    
	 .A(CA), 
    .B(CB), 
    .iseq(iseq),
	 .le0(isl)
	 );	 
	 assign PCSrcD=(jump)||(beq&&iseq)||(blt&&isl);//是否真要跳转
	 
	 
	 
	//算出几个pc	
	wire [31:0]jalPC={idPC[31:28],imm26,2'b00};//和j一样
	wire [31:0]beqPC=idPC+4+{{14{imm[15]}},imm,2'b00};
	wire [31:0]jrPC=RD1;
/////////这个算NPC	
	mux3_32 selectNPC (
    .ctrl(typeJB), //branch和jump的类型
    .din0(jalPC), 
    .din1(beqPC), 
    .din2(jrPC), 
    .out(NPC)
    );
initial begin
					rsD<=0;
					rtD<=0;
					rdD<=0;
					SignimmD<=0;
					RegWriteD<=0;
					SDtoRegD<=0;
					MemWriteD<=0;
					ALUOpD<=0;
					ALUSrcD<=0;
					RegDstD<=0;
					RD1D<=0;
					RD2D<=0;
		//			PCplus8D<=0;
end	 
	 	 
	 
always @(posedge clk) begin
			if(reset||FlushE)begin 
					rsD<=0;
					rtD<=0;
					rdD<=0;
					SignimmD<=0;
					RegWriteD<=0;
					SDtoRegD<=0;
					MemWriteD<=0;
					ALUOpD<=0;
					ALUSrcD<=0;
					RegDstD<=0;
					RD1D<=0;
					RD2D<=0;
		//			PCplus8D<=0;
			
			end
			else begin
					rsD<=rs;
					rtD<=rt;
					rdD<=rd;
					SignimmD<=SignResult;							
					RegWriteD<=RegWrite;
					SDtoRegD<=SDtoReg;
					MemWriteD<=MemWrite;
					ALUOpD<=ALUOp;
					ALUSrcD<=ALUSrc;
					RegDstD<=RegDst;
					
					RD1D<=RD1;
					RD2D<=RD2;
					
				//	PCplus8D<=idPC+8;
			end
	end
	
///////////////////////////////////////////////////////////////////////////////////////开始SU
        /////        //      //
    //               //      //
      //             //      //
		   //          //      //
			   //        //    //
	   //////           //////
	///////////////////////////////////////////////////////////////////////////////////////开始SU

	//自我清零自己算
wire FlushE;



	wire [2:0] D_Tuse_rs, D_Tuse_rt, Tnew;
	
	reg [2:0] E_Tnew=0;
	reg [2:0] M_Tnew=0;
	
	

	
	always @(posedge clk) begin
	
		if(reset == 1) begin
		
			E_Tnew <= 3'b0;
			M_Tnew <= 3'b0;
			
		end
		
		else begin
			
			E_Tnew <= Tnew;
			
			M_Tnew <= (E_Tnew == 0)? 3'b0 : E_Tnew - 1;
			
		end
	end 
	
	
	assign StallD = (D_Tuse_rs < E_Tnew && rsD0 == WriteRegE0 && WriteRegE0 && rsD0) |
						 (D_Tuse_rt < E_Tnew && rtD0 == WriteRegE0 && WriteRegE0 && rtD0) |
						 (D_Tuse_rs < M_Tnew && rsD0 == WriteRegE && WriteRegE && rsD0) |
						 (D_Tuse_rt < M_Tnew && rtD0 == WriteRegE && WriteRegE && rtD0) ;
					
					
	
	assign StallF = StallD;
	assign FlushE = StallF;
	
	

	assign Tnew = (InstrD[31:26] == 6'b000000 && InstrD[5:0] == 6'b100001)? 1 : // addu
									 (InstrD[31:26] == 6'b000000 && InstrD[5:0] == 6'b100011)? 1 : // subu
									 (InstrD[31:26] == 6'b000000 && InstrD[5:0] == 6'b001000)? 0 : // jr
									 
									 (InstrD[31:26] == 6'b100011)? 2 : // lw
									 (InstrD[31:26] == 6'b101011)? 0 : // sw
									 (InstrD[31:26] == 6'b000100)? 0 : // beq
									 (InstrD[31:26] == 6'b001101)? 1 : // ori
									 (InstrD[31:26] == 6'b001111)? 1 : // lui
									 (InstrD[31:26] == 6'b000010)? 0 : // j
									 (InstrD[31:26] == 6'b000011)? 0 : // jal
																				 3'b0;
	
	
	assign D_Tuse_rs = (InstrD[31:26] == 6'b000000 && InstrD[5:0] == 6'b100001)? 1 : // addu
									 (InstrD[31:26] == 6'b000000 && InstrD[5:0] == 6'b100011)? 1 : // subu
									 (InstrD[31:26] == 6'b000000 && InstrD[5:0] == 6'b001000)? 0 : // jr
									 
									 (InstrD[31:26] == 6'b100011)? 1 : // lw
									 (InstrD[31:26] == 6'b101011)? 1 : // sw
									 (InstrD[31:26] == 6'b000100)? 0 : // beq
									 (InstrD[31:26] == 6'b001101)? 1 : // ori
									 (InstrD[31:26] == 6'b001111)? 1 : // lui
									 (InstrD[31:26] == 6'b000010)? 3'b111 : // j
									 (InstrD[31:26] == 6'b000011)? 3'b111 : // jal
																				 3'b111;
	
	
	assign D_Tuse_rt = (InstrD[31:26] == 6'b000000 && InstrD[5:0] == 6'b100001)? 1 : // addu
									 (InstrD[31:26] == 6'b000000 && InstrD[5:0] == 6'b100011)? 1 : // subu
									 (InstrD[31:26] == 6'b000000 && InstrD[5:0] == 6'b001000)? 3'b111 : // jr
									 
									 (InstrD[31:26] == 6'b100011)? 3'b111 : // lw
									 (InstrD[31:26] == 6'b101011)? 2 : // sw
									 (InstrD[31:26] == 6'b000100)? 0 : // beq
									 (InstrD[31:26] == 6'b001101)? 3'b111 : // ori
									 (InstrD[31:26] == 6'b001111)? 3'b111 : // lui
									 (InstrD[31:26] == 6'b000010)? 3'b111 : // j
									 (InstrD[31:26] == 6'b000011)? 3'b111 : // jal
																				 3'b111;
	
	
endmodule
