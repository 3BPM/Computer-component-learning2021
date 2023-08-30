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
                        
                           output [31:0] NPC,//ֱ�Ӹ�I��
									output PCSrcD,    //ֱ�Ӹ�I��
									
									
									
						  input reset,
						input clk,
									//Ҫ��ˮ������
                           output reg [4:0] rsD,//������Ҫ����ͻ��Ԫ
                           output reg [4:0] rtD,//
                           output reg [4:0] rdD,
                           output reg [31:0] SignimmD,	
                           output reg RegWriteD,
                           output reg [1:0]SDtoRegD,//Control��selectdatatoreg
                           output reg MemWriteD,
                           output reg [2:0]ALUOpD,
									output reg 	ALUSrcD,
                           output reg [1:0]RegDstD,
									
									output reg [31:0] RD1D,
									output reg [31:0] RD2D,
						//			output reg [31:0]PCplus8D,

 
//W�����루��M����������	
input [31:0] ReadDataM,
input[31:0]ALUOutM,

input [1:0]SDtoRegM,
input RegWriteM,							
input [4:0]WriteRegM,



input [31:0]dPCM,  //Ϊ����� ���������JALPC+8
//W����������								
								
								//��ͻ����SU
								//ת��input
			//��E֮�� M��
			input [4:0]WriteRegE0,
							
								input [31:0]ALUOutE,//����add add�ĳ�ͻ
								 input [4:0]WriteRegE,
								 input RegWriteE,//E���Ľ��
								//��ͣ
							
							
								output [4:0]rsD0,
								output [4:0]rtD0,
								output [4:0]rdD0,
								//����output һ��W
								output [31:0]ResultW,


//�ټ�һ��su����

output StallF,
output StallD,

//);		 
////////////////////////////////////////////////////////////////////////////////////////////////////������β��ʵֻ�Ǹ�����
   input [31:0] idPC,//����Ϊ�����Ҳ�Ǵ������⼶PC���������������������������������������������������������������������������������������
	input [31:0] idInstr,//����Ϊ��debug																						//
	output reg [31:0] dPC,//����Ϊ�����																						 //
	output reg [31:0] dInstr//����Ϊ��debug																					  //
);																																			//
always @(posedge clk) begin																										//
	dPC<=idPC;	dInstr<=idInstr;																							     //
end																																	 //    //
DASM dasm ( .pc(idPC),.instr(idInstr),.reg_name(1'b1),.imm_as_dec(1'b0),.asm());								//     //
////////////////////////////////////////////////////////////////////////////////////////////////////������β��ʵֻ�Ǹ�����




	wire [4:0] rs;
	wire [4:0] rt;
	wire[4:0] rd;
	wire [4:0] s;
	wire [15:0] imm;
	wire [25:0] imm26;
	//����ˮ
	wire [1:0] typeJB;//�����ѡ��NPC��ûɶ��
	 wire [1:0] EXTOp;//EXTOp0��zero_ext_1��arithmetic_ext_2��left_shift16b

		
	 wire[1:0]RegDst;	//0��д��GRF�ĵ�ַA3��rt���ڶ����� 1��rd���������� 2�� 31 11111��jalʱ���õ��� 
	//���������һ��MUX�������Ǹ���ַGRF Ҫ��ˮ��E
	
	 wire[1:0]SDtoReg;	//0�� ALU	 1: DM	2��jal PC+8���������һ��MUX�������Ǹ�����дGRF
	////////////////////////////////������Ҫ��ˮһȦ

	 wire [2:0] ALUOp; //0:+ 1:- 2:OR 3:shift 4:
	 wire ALUSrc; //ALUB0�Ǵ�GRF 1����ext
	
	
	ctrl control (
    .Instr(InstrD), //ֱ������
    .rs(rs), 
    .rt(rt), 
    .rd(rd), 
    .s(s), 
    .imm(imm), 
    .imm26(imm26), 
	  .EXTOp(EXTOp), //����ˮ
	  .typeJB(typeJB), //����ˮ
	  
	  //Ϊ�˲���pc�Ƿ���Ҫ�ģ�PCSrcD�� ��cmpģ�顣
	.jump(jump), 
	.beq(beq), 
	.blt(blt),

    .RegDst(RegDst), //��ˮ��E����
    .ALUSrc(ALUSrc), //��ˮ��E
    .SelectdatatoReg(SDtoReg), 	////////////////////////////////��ˮһȦ��W
    .RegWrite(RegWrite),                 ////////////////////////////////��ˮһȦ��W
    .MemWrite(MemWrite), ////////////////////////////////��ˮ��M  
	 
	 
    .ALUOp(ALUOp)//��ˮ��E
    );	
	
								assign rsD0=rs;
								assign rtD0=rt;
								assign rdD0=rd;
	
	
	wire [31:0]WD3,RD1,RD2,RD10,RD20;
    GRF grf(//��control���(������һ������)
	 .A1(rs),
    . A2(rt),
    .A3(WriteRegM),//!!!!!!!!!!!!!!!!!!!!��ˮ���W
    . WD(WD3),//!!!!!!!!!!!!!!!!!!!!��ˮ���W
    . PC(dPCM),//!!!!!!!!!!!!!!!!!!!!��ˮ���W
    .clk(clk),
    . reset(reset),
    . WE(RegWriteM),//!!!!!!!!!!!!!!!!!!!!��ˮ���W
    .RD1(RD10),
    .RD2(RD20)
    );
	 
	 
	 //����һ���ڲ�ת������������������������������
assign RD1= ((WriteRegM==rs)&&(RegWriteM)&&rs!=0  )  ?WD3:RD10;
assign RD2= ((WriteRegM==rt)&&(RegWriteM)&&rt!=0   ) ?WD3:RD20;

	
	 //W������������������������������������������������������
	 assign WD3=(SDtoRegM==0)? ALUOutM://д��������alu���
						(SDtoRegM==1)?   ReadDataM:	  //д���������ڴ��ȡ
	 (SDtoRegM==2)?  (dPCM+8) :
	 32'hxxxx_xxxx;
	 
	 //ֱ��M�����
	 
	 //���������E���һ�³�ͻ
	 assign ResultW=WD3;
	 
	 
	wire [31:0]SignResult;
    EXT ext(
    .EXTOp(EXTOp),
    .immin(imm), 
    .Result(SignResult)
    );


/////���ģ����Ҫ�ǱȽ� ��control�ź�һ�𿴿��Ƿ�����ת ������Ҫ�����ͻ�� ת��һ�£�������ֻ����E���Ĵ���֮��ľ�����
  
wire ForwardAD= (WriteRegE==rs)&&RegWriteE&& rs != 5'b0;
wire ForwardBD= (WriteRegE==rt)&&RegWriteE&& rt!= 5'b0;
//ֻ��һ������������������������������������������������������������������������������
//�������������ͣ��!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
////////////////////////////////////////////////////////////////////////////////////////////////////////ֱ��ת��
   wire [31:0]CA=(ForwardAD)? ALUOutE:RD1;//ʡ��MUX��
	wire [31:0]CB=(ForwardBD)? ALUOutE:RD2;//!!!!!!!!!!!!!!!!!!!!!!������
	
	
	
	 CMP cmp(    
	 .A(CA), 
    .B(CB), 
    .iseq(iseq),
	 .le0(isl)
	 );	 
	 assign PCSrcD=(jump)||(beq&&iseq)||(blt&&isl);//�Ƿ���Ҫ��ת
	 
	 
	 
	//�������pc	
	wire [31:0]jalPC={idPC[31:28],imm26,2'b00};//��jһ��
	wire [31:0]beqPC=idPC+4+{{14{imm[15]}},imm,2'b00};
	wire [31:0]jrPC=RD1;
/////////�����NPC	
	mux3_32 selectNPC (
    .ctrl(typeJB), //branch��jump������
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
	
///////////////////////////////////////////////////////////////////////////////////////��ʼSU
        /////        //      //
    //               //      //
      //             //      //
		   //          //      //
			   //        //    //
	   //////           //////
	///////////////////////////////////////////////////////////////////////////////////////��ʼSU

	//���������Լ���
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
