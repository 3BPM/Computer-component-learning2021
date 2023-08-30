`timescale 1ns / 1ps

module DM(

    input[31:0] adder,
    input clk,
    input reset,
    input WirE,
    input[31:0] writedata,
    ///////////////////////Ϊ�����������������������������������
    input [31:0]ispc,
    input sb,
    output[31:0] readdata
  );
  wire[9:0] address;
  reg[31:0] dm[1023:0];    //RAM
 reg [31:0] tmp;
  reg [31:0] tem1;
  assign address[9:0]=adder[11:2];
  assign readdata=dm[address];

  integer i;
  initial
  begin
    for(i=0;i<1024;i=i+1)
    begin
      dm[i]<=0;
    end
  end

  always@(posedge clk)
  begin

    if(reset)
    begin
      for(i=0;i<1024;i=i+1)
      begin
        dm[i] <=0;
      end
    end
    else
    begin
      if(WirE&&sb==0)//swָ���ʱ���ִ�еĲ���
      begin
        dm[address] <=writedata;

        $display("@%h: *%h <= %h",ispc,adder,writedata);
      end
      else if(WirE&&sb==1)//sbָ���ʱ���ִ�еĲ���
      begin//�ܹ����������
		tem1={adder[31:2],2'b00};//Ϊ�������sw����һ��Ҫ��д���ַ
        if(adder[1:0]==0)//д���ַ����λ��00
          tmp={readdata[31:8],writedata[7:0]};//��Ҫд��ĺ�8λ�뵱ǰ��ַ���������ƴ����
        else  if(adder[1:0]==1)//д���ַ����λ��01
          tmp={readdata[31:16],writedata[7:0],readdata[7:0]};
        else  if(adder[1:0]==2)//д���ַ����λ��10
          tmp={readdata[31:24],writedata[7:0],readdata[15:0]};
        else  if(adder[1:0]==3)//д���ַ����λ��11
          tmp={writedata[7:0],readdata[23:0]};
        dm[address] <=tmp;
        $display("@%h: *%h <= %h",ispc,tem1,tmp);
      end
    end
  end


endmodule


