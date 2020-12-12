`timescale 1ns / 1ps

module recceiver(
	input clk, btn0, btn2,
	input  onebit_data_in,
	output reg[7:0] led
	  );
	  reg [11:0] Rx;
	 reg [3:0] N;
	 initial N=0;
	 wire slowclk;
	 
	 clk_div uut( 
	 .clk(clk), 
	 .slowclock(slowclk)
	 ); 
	 
	
	 always @(posedge slowclk)
	 begin
	 if (btn0==0) 
	 Rx<=0; 
	 else
	 begin
	 if(btn2==1)
	 Rx[11]<=onebit_data_in;
	 Rx[10]<=Rx[11];
	 Rx[9]<=Rx[10];
	 Rx[8]<=Rx[9];
	 Rx[7]<=Rx[8];
	 Rx[6]<=Rx[7];
	 Rx[5]<=Rx[6];
	 Rx[4]<=Rx[5];
	 Rx[3]<=Rx[4];
	 Rx[2]<=Rx[3]; 
	 Rx[1]<=Rx[2];
	 Rx[0]<=Rx[1];
	 N<=N+1;
		end
		if(N==11) begin
		led=Rx[9:2];
		N<=0;
		end
		end
	 
	 
	 
	 
endmodule
