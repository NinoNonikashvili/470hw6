`timescale 1ns / 1ps

module transmitter(
	input clk, btn0, btn1, btn2,
	input [7:0] switch,
	output onebit_data_out,
	output parity
	  );
	  reg [11:0] Tx=0;
	  reg reg1, start=0;
	  reg[1:0] stop=3;
	 reg [2:0] N=0;
	 wire slowclk;
	 
	 clk_div uut(
	 .clk(clk), 
	 .slowclock(slowclk)
	 ); 
	 
	 assign parity =((switch[0]^switch[1]^switch[2]^switch[3]^switch[4]^switch[5]^switch[6]^switch[7])==1) ? 1:0;
	
	 begin
	 reg1 <=Tx[N];
	 N<=N+1;
	 if(N==11)
	 N<=0;
	 end 
	 end
	 end
	 assign onebit_data_out=reg1;
	 


endmodule
