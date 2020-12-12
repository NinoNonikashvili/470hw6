`timescale 1ns / 1ps

module topUART(
input clk, btn0, btn1, btn2, Rx,
input [7:0]  switch,
output reg[7:0] led,
output  slowclock,
output parity,
output reg Tx=1); //when 0, transmittion starts
	//UART encoding
	 reg start=0;
	 reg[1:0] stop=3;
   //slow clock
	 reg [14:0] counter=0;
	 reg reg_slowclock=0;
	 parameter [12:0] max=2604; // 50000000:9600:2=2604
	 
	 reg [11:0] encoded_data=0;
	 reg [11:0] received_data=0;
	 reg enable_trans=0, enable_rec=0;
	 reg [3:0] N=0, M=0; 
	 
	 assign parity =^switch;
	 
	 always @(posedge clk)
	 begin
	 counter<=counter+1;
	 if(counter==max)begin
	 reg_slowclock<=!reg_slowclock;
	 counter<=0;
	 end 
	 end
	 
	 assign slowclock=reg_slowclock;
	 
	 
	 always @(posedge slowclock)
	 begin
	 if(btn0)
	 begin
	 enable_trans<=0;
	 enable_rec<=0;
	 led<=0;
	 end
	 if(btn1)
	 encoded_data<={stop, switch, parity, start}; //11 11010010 00         10100100 
	 if(btn2) begin
	 enable_trans<=1;
	 end
	 if(enable_trans)begin
	 Tx<=encoded_data[N];
	 N<=N+1;
	 if(N==12) begin
	 N<=0;
	 Tx<=1;
	 enable_trans<=0;end
	 end
	 if(Rx==0)
	 enable_rec<=1;
	 if(enable_rec) begin
	 received_data[11]<=Rx;
	 received_data[10]<=received_data[11];
	 received_data[9]<=received_data[10]; 
	 received_data[8]<=received_data[9];
	 received_data[7]<=received_data[8];
	 received_data[6]<=received_data[7];
	 received_data[5]<=received_data[6];
	 received_data[4]<=received_data[5];
	 received_data[3]<=received_data[4];
	 received_data[2]<=received_data[3];
	 received_data[1]<=received_data[2];
	 received_data[0]<=received_data[1];   
	 M<=M+1;
	 if(M==12) begin
	 led<=received_data[9:2];
	 enable_rec<=0;
	 received_data<=0; end
	 end
	 
	 
end
endmodule 