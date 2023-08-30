`timescale 1ns / 1ps

module DM(

    input[31:0] adder,
    input clk,
    input reset,
    input WirE,
    input[31:0] writedata,
    ///////////////////////为了输出！！！！！！！！！！！！！！！
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
      if(WirE&&sb==0)//sw指令的时候会执行的部分
      begin
        dm[address] <=writedata;

        $display("@%h: *%h <= %h",ispc,adder,writedata);
      end
      else if(WirE&&sb==1)//sb指令的时候会执行的部分
      begin//总共就四种情况
		tem1={adder[31:2],2'b00};//为了输出和sw保持一致要把写入地址
        if(adder[1:0]==0)//写入地址后两位是00
          tmp={readdata[31:8],writedata[7:0]};//将要写入的后8位与当前地址本身的数据拼起来
        else  if(adder[1:0]==1)//写入地址后两位是01
          tmp={readdata[31:16],writedata[7:0],readdata[7:0]};
        else  if(adder[1:0]==2)//写入地址后两位是10
          tmp={readdata[31:24],writedata[7:0],readdata[15:0]};
        else  if(adder[1:0]==3)//写入地址后两位是11
          tmp={writedata[7:0],readdata[23:0]};
        dm[address] <=tmp;
        $display("@%h: *%h <= %h",ispc,tem1,tmp);
      end
    end
  end


endmodule


