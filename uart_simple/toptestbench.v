`timescale 1ns / 1ps


module toptestbench;

	// Inputs
	reg clk;
	reg btn0;
	reg btn1;
	reg btn2;
	reg Rx;
	reg [7:0] switch;
	
	// Outputs
	wire onebit_data_out;
	wire parity;
	
	wire [7:0] led;
	wire slowclock;
	wire Tx;
	
	
	top uut (
		.clk(clk), 
		.btn0(btn0), 
		.btn1(btn1),  
		.btn2(btn2), 
		.switch(switch), 
		.led(led)
		.Rx(RX),
		.Tx(Tx)
	);
	
	always #5 clk=!clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		btn0 = 0;
		btn1 = 0;
		btn2 = 0;
		switch = 44;

		// Wait 100 ns for global reset to finish
		#10;
		btn0 = 0;
		btn1 = 1;
		btn2 = 0;
		switch = 44;
		
	#10;
		btn0 = 0;
		btn1 = 1;
		btn2 = 1;
		switch = 44;
        #120;
		// Add stimulus here

	end
       
endmodule

