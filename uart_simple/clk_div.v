`timescale 1ns / 1ps

module clk_div(
input clk,
output wire slowclock);

	 reg [14:0] counter=0;
	 reg reg_slowclock=0;
	 parameter [12:0] max=2; //5208
	 
	 always @(posedge clk)
	 begin
	 counter<=counter+1;
	 if(counter==max)begin
	 reg_slowclock<=!reg_slowclock;
	 counter<=0;
	 end
	 end
	 
	 assign slowclock=reg_slowclock;


endmodule
