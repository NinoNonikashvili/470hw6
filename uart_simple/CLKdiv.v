`timescale 1ns / 1ps

module CLKdiv(
input clk,
output reg clk1=0
    );
	 reg [1:0] clock=0;
	 
	 
	 always @(posedge clk)             
	 begin
	 clock<=clock+1;
	 if(clock==3)
	 clk1<=!clk1;
	 end

endmodule

