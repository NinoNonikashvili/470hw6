`timescale 1ns / 1ps

module receiverTestbench;

	// Inputs
	reg clk;
	reg btn0;
	reg btn2;
	reg onebit_data;

	// Outputs
	wire [7:0] led;

	// Instantiate the Unit Under Test (UUT)
	recceiver uut (
		.clk(clk), 
		.btn0(btn0), 
		.btn2(btn2), 
		.onebit_data(onebit_data), 
		.led(led)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		btn0 = 0;
		btn2 = 0;
		onebit_data = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

