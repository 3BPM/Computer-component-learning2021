`timescale 1ns / 1ps

module ctrl(
	 input [31:0] Instr,
	 output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
	 output [4:0] s,
    output [15:0] imm,
    output [25:0] imm26,
	 ///����


	
	    // classify

	 output [1:0] typeJB,//�����ѡ��NPC��ûɶ��
	 

  
  
	output [1:0]RegDst,
	//00means write GRF is 2th reg in Instr (rt)	//01means is 3th (rd)	//10means write GRF is 31 11111 ra
	//���������һ��MUX�������Ǹ���ַGRF
		////////////////////////////////������Ҫ��ˮ1��
	
	output ALUSrc,//0 means alu numB is from GRF  1  means alunumB is imm from EXT
	output [1:0]SelectdatatoReg,
	//00means write data GRF is from ALU
	//01:write GRF is DM
	//10 means write data from PC+4
	//���������һ��MUX�������Ǹ�����дGRF
	////////////////////////////////������Ҫ��ˮ�ü�����



	output RegWrite,//WE of GRF
	output  MemWrite,//WE of DM

	output  [1:0] EXTOp,//EXTOp0��zero_ext_1��arithmetic_ext_2��left_shift16b
	output [2:0] ALUOp, //0:+ 1:- 2:OR 3:shift 4:judge<
	
	output jump,
	output beq,
	output blt
    );



	wire [5:0]op=Instr[31:26];//6λ
	wire [5:0]func=Instr[5:0];
	assign rs[4:0]=Instr[25:21];//5λ
	assign rt[4:0]=Instr[20:16];
	assign rd[4:0]=Instr[15:11];
	assign s[4:0]=Instr[10:6];
	assign imm[15:0]=Instr[15:0];
	assign imm26[25:0]=Instr[25:0];
	
	wire nop=(Instr==0) ;
	
   wire addu=(op==0&&func==6'b100001);
	wire subu=(op==0&&func==6'b100011);

	wire lui=(op==6'b001111) ; 
   wire ori=(op==6'b001101) ;
		
	wire lw=(op==6'b100011) ;
	wire sw=(op==6'b101011) ;
	
	wire jal=(op==6'b000011) ;
	wire j=(op==6'b000010) ;
	wire jr=(op==0&&func==6'b001000);	
	assign beq=(op==6'b000100) ;
	 assign blt=(op==6'b111100);

	//wire ynew=() ;//�˲���Ҫдen�źţ�a1,a2,a3�ź�

	/////////////////////////�������6��!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!���Ҹ� ��ӣ�������������������������������������������
	wire typer=addu|subu;//ͨ������GRF��ַ ��д
	wire  typei=ori|lui;//ext��ʱ����typei ͨ��ʹ����������������ַ ��д
	wire  load=lw;  			//���ڴ�дGRF
	wire  store=sw; 			//��GRFд�ڴ�
	wire  branch=beq||blt;   //��֧
	assign  jump=jal||j||jr;   //��ת��������������������jalҪ��GRF�Ƚ����� ͨ�����ô�
	
	assign typeJB=jal?0:   //j/jalֱ�������� ����ˮ��������ͻ
						beq?1:
						jr?2:
						2'b00;
	//���ֻ��ѡ��NPC
/*	.din0(jalPC), 
    .din1(beqPC), 
    .din2(jrPC), */
	
	assign RegDst= (load||typei) ?0 : 
						typer ? 1:
						(jal)?2://////////////////����������������������������������������������������������Ҫ���ӵ�����ġ� ��Ҫ��ת����pc+8����GRF31��
						2'b00;
						
						
	//�������дGRF��A3��д���ַ��˭��
	//00means write GRF is 2th reg in Instr (rt)
	//01means is 3th (rd)
	//10means write GRF is 31 11111 ra
	
    assign ALUSrc=(typei | lui | load | store)?	1 :1'b0;
	 
	 //0 means alu numB is from GRF  1  means alunumB is imm from EXT
	 
   assign SelectdatatoReg=load?1:
								jal?2:
								2'b00;
	

//��������������һȦ W����ˮ������˵	//00means write data GRF is from ALU	//01:write GRF is DM	//10 means write data from PC+8	//���������һ��MUX�������Ǹ�����дGRF
////////////////////////////////������Ҫ��ˮD->E->M->W=D

	
     assign RegWrite= typer||typei||load||jal;
     assign MemWrite= store;
	  
	  
    assign EXTOp= (load | store) ? 1 :
                    lui ? 2 :
                    2'b00;
						  
    assign ALUOp=addu  ?0:
						subu  ?1:
						ori   ?2:
						3'b00;


endmodule
