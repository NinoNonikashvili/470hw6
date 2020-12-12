`timescale 1ns / 1ps


module clk_testbench;

	// Inputs
	reg clk;

	// Outputs
	wire slowclock;

	// Instantiate the Unit Under Test (UUT)
	clk_div uut (
		.clk(clk), 
		.slowclock(slowclock)
	);
always #5 clk=!clk;
	initial begin
		// Initialize Inputs
		clk =0;

		// Wait 100 ns for global reset to finish
		#100;
         
		// Add stimulus here

	end
      
endmodule

