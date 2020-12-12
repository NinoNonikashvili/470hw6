`timescale 1ns / 1ps


module toptest6;

	// Inputs
	reg clk;
	reg btn0;
	reg btn1;
	reg btn2;
	reg Rx;
	reg [7:0] switch;

	// Outputs
	wire [7:0] led;
	wire slowclock;
	wire [1:0] parity;
	wire Tx;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.btn0(btn0), 
		.btn1(btn1), 
		.btn2(btn2), 
		.Rx(Rx), 
		.switch(switch), 
		.led(led), 
		.slowclock(slowclock), 
		.parity(parity), 
		.Tx(Tx)
	);
	always #10 clk=!clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		btn0 = 0;
		btn1 = 0;
		btn2 = 0;
		Rx = 0;
		switch = 0;

		// Wait 100 ns for global reset to finish
		#100;
		btn1 = 1;
		btn2 = 0;
		Rx = 0;
		switch = 1234;
		#10;
		btn1 = 0;
		btn2 = 1;
		Rx = 1;
		switch = 1234;
		
        
		// Add stimulus here

	end
      
endmodule

