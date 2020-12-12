`timescale 1ns / 1ps


module toptest;

	// Inputs
	reg clk;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk),
		.slowclock(slowclock)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

