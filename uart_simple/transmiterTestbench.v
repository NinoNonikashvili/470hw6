`timescale 1ns / 1ps

module transmiterTestbench;

	// Inputs
	reg clk;
	reg btn0;
	reg btn1;
	reg btn2;
	reg [7:0] switch;

	// Outputs
	wire onebit_data_out;
	wire parity;

	// Instantiate the Unit Under Test (UUT)
	transmitter uut (
		.clk(clk), 
		.btn0(btn0), 
		.btn1(btn1), 
		.btn2(btn2), 
		.switch(switch), 
		.onebit_data(onebit_data), 
		.parity(parity)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		btn0 = 0;
		btn1 = 0;
		btn2 = 0;
		switch = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

