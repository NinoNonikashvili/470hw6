`timescale 1ns / 1ps

module clk_div(
input clk,
output reg clk1=0
    );
	 reg [1:0] clock=0;
	 parameter max=4657; //tobe changed
	 
	 
	 always @(posedge clk)             
	 begin
	 clock<=clock+1;
	 if(clock==max)
	 clk1<=!clk1;
	 end

endmodule 