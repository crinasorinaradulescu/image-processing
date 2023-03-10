`timescale 1ns / 1ps

module process (
        input                clk,		    	// clock 
        input  [23:0]        in_pix,	        // valoarea pixelului de pe pozitia [in_row, in_col] din imaginea de intrare (R 23:16; G 15:8; B 7:0)
        input  [8*512-1:0]   hiding_string,     // sirul care trebuie codat
        output reg [6-1:0]       row, col, 	        // selecteaza un rand si o coloana din imagine
        output reg            out_we, 		    // activeaza scrierea pentru imaginea de iesire (write enable)
        output reg [23:0]        out_pix,	        // valoarea pixelului care va fi scrisa in imaginea de iesire pe pozitia [out_row, out_col] (R 23:16; G 15:8; B 7:0)
        output reg           gray_done,		    // semnaleaza terminarea actiunii de transformare in grayscale (activ pe 1)
        output reg           compress_done,		// semnaleaza terminarea actiunii de compresie (activ pe 1)
        output reg           encode_done        // semnaleaza terminarea actiunii de codare (activ pe 1)
    );	
    
	 reg[3:0] M;
	 reg[2:0] s, m, stop, var_stop, j;
	 reg en;
	 reg[6-1:0] c, r, var_L_c, var_L_r, var_H_c, var_H_r, first_r, first_c;
	 reg[15:0] i;
	 reg[15:0] aux;
	 reg[5:0] p;
	 reg[7:0] max, min, AVG, var, beta;
	 reg[23:0] sum, mod, modul, comp;
	 reg[7:0] state, next_state;
	 reg[7:0] L, H;
	 reg[15:0] base2_no;
	 wire[2*16-1:0] base3_no;
	 
	 initial begin
		state = 0; next_state = 0; row = 0; col = 0; c = 0; r = 0;
		sum = 0; AVG = 0; var = 0; beta = 0; modul = 0; mod = 0; p = 0; M = 0;
		L = 0; H = 0; base2_no = 0; aux = 0; en = 0; j = 0;
		var_L_c = 0; var_L_r = 0; var_H_c = 0; var_H_r = 0;
		var_stop = 0; first_r = 0; first_c = 0; comp = 0; stop = 0; i = 0;
		gray_done = 0; compress_done = 0; encode_done = 0;
	 end
	 
	 
	 //TODO - instantiate base2_to_base3 here
    base2_to_base3 b(base3_no, done, base2_no,en,clk);
    
	 //TODO - build your FSM here
	 always @(posedge clk) begin
		state <= next_state;
	 end
	 
		
	always @(*) begin
		case(state)
			0: begin
					out_we = 0;
					next_state = 1;
			  end
			
		//determinam min si max dintre R, G, B
			1: begin		
					if(in_pix[23:16] < in_pix[15:8] && in_pix[23:16] < in_pix[7:0])
						min = in_pix[23:16];
					if(in_pix[23:16] > in_pix[15:8] && in_pix[23:16] > in_pix[7:0]) 
						max = in_pix[23:16];
					
					if(in_pix[15:8] < in_pix[23:16] && in_pix[15:8] < in_pix[7:0])
						min = in_pix[15:8];
					if(in_pix[15:8] > in_pix[23:16] && in_pix[15:8] > in_pix[7:0])
						max = in_pix[15:8];
					
					if(in_pix[7:0] < in_pix[23:16] && in_pix[7:0] < in_pix[15:8])
						min = in_pix[7:0];
					if(in_pix[7:0] > in_pix[23:16] && in_pix[7:0] > in_pix[15:8])
						max = in_pix[7:0];
								
					if(in_pix[7:0] == in_pix[23:16] && in_pix[7:0] == in_pix[15:8])
						if(in_pix[23:16] == in_pix[15:8]) begin
							max = in_pix[7:0];
							min = max;
						end
				
					if(in_pix[23:16] == in_pix[15:8] && in_pix[23:16] == in_pix[7:0])
						if(in_pix[15:8] == in_pix[7:0])begin
							max = in_pix[7:0];
							min = max;
						end
		
					if(in_pix[15:8] == in_pix[23:16] && in_pix[15:8] == in_pix[7:0])
						if( in_pix[23:16] == in_pix[7:0])begin
							max = in_pix[7:0];
							min = max;
						end
							
					if(in_pix[7:0] == in_pix[23:16] && in_pix[7:0] > in_pix[15:8])
						max = in_pix[7:0];
					if(in_pix[7:0] == in_pix[23:16] && in_pix[7:0] < in_pix[15:8])
						min = in_pix[7:0];
								
					if(in_pix[7:0] == in_pix[15:8] && in_pix[7:0] > in_pix[23:16])
						max = in_pix[7:0];
					if(in_pix[7:0] == in_pix[15:8] && in_pix[7:0] < in_pix[23:16])
						min = in_pix[7:0];
								
					if(in_pix[23:16] == in_pix[15:8] && in_pix[23:16] < in_pix[7:0])
						min = in_pix[23:16];
					if(in_pix[23:16] == in_pix[15:8] && in_pix[23:16] > in_pix[7:0])
						max= in_pix[23:16];
					next_state = 2;					
				end
			
		//Setam canalele R, B cu 0 si G cu media dintre min si max
			2: begin	
					out_pix[23:16] = 0;
					out_pix[15:8] = (min+max)/2;
					out_pix[7:0] = 0;
					out_we = 1;
					next_state = 3;
				end
	
		//Parcurgere imagine
			3:	begin
					if(out_we == 1)
						if(col < 63) begin
							col = col + 1;
							next_state = 0;
						end else
								if(row < 63) begin
									col = 0;
									row = row + 1;
									next_state = 0;
								end else
									next_state = 4;
									out_we = 0;			
				end
				
			4: begin
					if(col != 63 && row != 63)
						next_state = 0;
					else begin
						gray_done = 1;
						next_state = 5;
					end
				end
				
			5: begin
					row = r;
					col = c;
					s = 0;
					m = 0;
					sum = 0;
					mod = 0;
					modul = 0;
					AVG = 0;
					var = 0;
					beta = 0;
					L = 0;
					H = 0;
					M = 4;
					p = M*M;
					next_state = 7;
				end
			
		//Parcurgere bloc
			6: begin
					if(s == 1)
						if( col < M + c - 1) begin
							col = col + 1;
							next_state = 7;
						end else
								if(row < M +r-1) begin
									col = c;
									row = row + 1;
									next_state = 7;
								end 
					s = 0;
				end
			
		//Calcul suma pixelilor
			7: begin
					if(s == 0)
						if(col != M + c - 1)begin
							if(row != M + r - 1)begin
								sum = sum + in_pix[15:8];
								next_state = 6;
							end else begin
									sum = sum + in_pix[15:8];
									next_state = 6;
								 end
						end else begin
								if(row != M + r - 1)begin
									sum = sum + in_pix[15:8];
									next_state = 6;
								end else begin
										sum = sum + in_pix[15:8];
										next_state = 8;
									 end
							 end
					s = 1;
				end
				
			8: begin
					AVG = sum/p;
					col = c;
					row = r;
					next_state = 10;
				end
				
			9: begin
					if(m == 1)
						if( col < M +c -1) begin
							col = col + 1;
							next_state = 10;
						end else
								if(row < M +r-1) begin
									col = c;
									row = row + 1;
									next_state = 10;
								end 
					m = 0;
				end
		
		//Calcul modul + suma
		  10: begin
					if(m == 0)
						if(col != M + c - 1)begin
							if(row != M + r - 1)begin
								if(in_pix[15:8] > AVG)
									mod = in_pix[15:8] - AVG;
								else
									mod = AVG - in_pix[15:8];
								modul = modul + mod;
								next_state = 9;
							end else begin
									if(in_pix[15:8] > AVG)
										mod = in_pix[15:8] - AVG;
										else
										mod = AVG - in_pix[15:8];
									modul = modul + mod;
									next_state = 9;
								 end
						end else begin
								if(row != M + r - 1)begin
									if(in_pix[15:8] > AVG)
										mod = in_pix[15:8] - AVG;
									else
										mod = AVG - in_pix[15:8];
									modul = modul + mod;
									next_state = 9;
								end else begin
										if(in_pix[15:8] > AVG)
											mod = in_pix[15:8] - AVG;
										else
											mod = AVG - in_pix[15:8];
										modul = modul + mod;
										next_state = 11;
									 end
							end
					m = 1;
				end
				
	     11: begin
					var = modul/p;
					row = r;
					col = c;
					next_state = 13;
				end
					
					
        12: begin
					if(out_we == 1)
						if( col < M +c-1) begin
							col = col + 1;
							next_state = 13;
						end else
								if(row < M +r-1) begin
									col = c;
									row = row + 1;
									next_state = 13;
								end 
					out_we = 0;
				end
			
		//Calcul nr bitilor de 1
		  13: begin
					if(out_we == 0)
						if(col != M + c - 1)begin
							if(row != M + r - 1)begin
								if(in_pix[15:8] < AVG)
									out_pix = 0;
								else begin
										out_pix = 1;
										beta = beta + 1;	
									  end
								next_state = 12;
							end else begin
									if(in_pix[15:8] < AVG)
										out_pix = 0;
									else begin
											 out_pix = 1;
											 beta = beta + 1;
										   end
									next_state = 12;
								 end
						end else begin
								if(row != M + r - 1)begin
									if(in_pix[15:8] < AVG)
										out_pix = 0;	
									else begin
											out_pix = 1;
											beta = beta + 1;
										  end
									next_state = 12;
								end else begin
										if(in_pix[15:8] < AVG)
												out_pix = 0;
										else begin
												out_pix = 1;
												beta = beta + 1;
											  end
										next_state = 14;
									 end
							 end
					out_we = 1;
				end
			
		//Calcul L si H
		  14: begin
					L = AVG - (M*M*var)/(2*(M*M-beta));
					H = AVG + (M*M*var)/(2*beta);
					row = r;
					col = c;
					out_we = 0;
					next_state = 16;
				end
				
		  15: begin
					if(out_we == 1)
						if( col < M +c-1) begin
							col = col + 1;
							next_state = 16;
						end else
								if(row < M +r-1) begin
									col = c;
									row = row + 1;
									next_state = 16;
								end 
					out_we = 0;
				end
		
		//Conditii pentru stocarea L si H
		  16: begin
					if(out_we == 0)
						if(col != M + c - 1)begin
							if(row != M + r - 1)begin
								out_pix[23:16] = 0;
								out_pix[7:0] = 0;
								if(in_pix == 1)
									out_pix[15:8] = H;
								else
									out_pix[15:8] = L;
								next_state = 15;
							end else begin
									out_pix[23:16] = 0;
									out_pix[7:0] = 0;
									if(in_pix == 1)
										out_pix[15:8] = H;
									else
										out_pix[15:8] = L;
									next_state = 15;
								 end
						end else begin
								if(row != M + r - 1)begin
									out_pix[23:16] = 0;
									out_pix[7:0] = 0;
									if(in_pix == 1)
										out_pix[15:8] = H;
									else
										out_pix[15:8] = L;
									next_state = 15;
								end else begin
										out_pix[23:16] = 0;
										out_pix[7:0] = 0;
										if(in_pix == 1)
											out_pix[15:8] = H;
										else
											out_pix[15:8] = L;
										next_state = 17;
									 end
							 end
					out_we = 1;
				end
			
		  17: begin
					if(out_we == 1)
						if(col != 63) begin
							if(row == M + r - 1) begin
								c = c + 4;
								col = c;
								row = r;
								next_state = 5;
							end 
						end else begin
								if(row == M + r - 1)
									if(row == 63) begin
										compress_done = 1;
										row = 0;
										col = 0;
										r = 0;
										c = 0;
										next_state = 18;
									end else begin
											row = row + 1;
											r = r + 4;
											c = 0;
											col = 0;
											next_state = 5;
										 end
							 end
					out_we = 0;	
				end
			
		//Retinere rand si coloana pentru primul pixel din bloc
		  18: begin
					row = r;
					col = c;
					first_r = row;
					first_c = col;
					comp = in_pix;
					var_L_c = col;
					var_L_r = row;
					var_stop = 1;
					next_state = 19;
				end
					
		  19: begin
					if(var_stop == 1) 
							if( col < M +c-1) begin
								col = col + 1;
								next_state = 20;
							end else
									if(row < M +r-1) begin
										col = c;
										row = row + 1;
										next_state = 20;
									end 
					var_stop = 0;
			  	end
			
		//Retinere rand si coloana pentru prima valoare diferita 
		//de primul pixel din bloc
		  20: begin
					if(var_stop == 0)
						if(in_pix != comp) begin
							var_H_c = col;
							var_H_r = row;
							next_state = 21;
						end else
								next_state = 19;
					var_stop = 1;
				end
		
		//Pozitionare la inceput de bloc		
		  21: begin
					row = first_r;
					col = first_c;
					next_state = 22;					
				end
				
		  22: begin
					aux = 0;
					stop = 0;
					j = 0;
					next_state = 23;
				end
			
		//Stocarea intr-un subsir cate 16 biti din hiding string
		//de la dreapta la stanga
		  23: begin
					if(stop == 0) begin
						aux[15:0] = hiding_string[i+:16];
						i = i + 16;
					end
						stop = 1;
						next_state = 24;
				end
		
		//Conectarea cu modulul base2_to_base3	
		  24: begin
					en = 1;
					base2_no = aux;
					aux = base3_no;
					next_state = 26;
					end
					
	
		  25: begin
					if(out_we == 1) begin
						if( col < M +c-1) begin
							col = col + 1;
							next_state = 26;
						end else
							if(row < M +r-1) begin
								col = c;
								row = row + 1;
								next_state = 26;
							end 
					end
					out_we = 0;
				end
			
		//Conditii pentru codarea mesajului
		  26: begin
					if(out_we == 0)
						if((row == var_L_r && col == var_L_c) || (row == var_H_r && col == var_H_c)) begin 
							if(col != M + c - 1)
								if(row != M + r - 1)
									next_state = 25;
								else
									next_state = 25;
							else
								if(row != M + r - 1)
									next_state = 25;
								else
									next_state = 27;
						end else begin
							if(col != M + c - 1)begin
							if(row != M + r - 1)begin
								if(aux[j+:2] == 0) begin
											j = j + 1;
											next_state = 25;
											end
										if(aux[j+:2] == 1) begin
											out_pix = in_pix + 1;
											j = j + 1;
											next_state = 25;
										end
										if(aux[j+:2] == 2) begin
											out_pix = in_pix - 1;
											j = j + 1;
											next_state = 25;
										end
							end else begin
									if(aux[j+:2] == 0) begin
											j = j + 1;
											next_state = 25;
										end
										if(aux[j+:2] == 1) begin
											out_pix = in_pix + 1;
											j = j + 1;
											next_state = 25;
										end
										if(aux[j+:2] == 2) begin
											out_pix = in_pix - 1;
											j = j + 1;
											next_state = 25;
										end
								 end
						end else begin
								if(row != M + r - 1)begin
									if(aux[j+:2] == 0) begin
											j = j + 1;
											next_state = 25;
											end
										if(aux[j+:2] == 1) begin
											out_pix = in_pix + 1;
											j = j + 1;
											next_state = 25;
										end
										if(aux[j+:2] == 2) begin
											out_pix = in_pix - 1;
											j = j + 1;
											next_state = 25;
										end
								end else begin
										if(aux[j+:2] == 0) 
											next_state = 27;
											
										if(aux[j+:2] == 1) begin
											out_pix = in_pix + 1;
											next_state = 27;
										end
										if(aux[j+:2] == 2) begin
											out_pix = in_pix - 1;
											next_state = 27;
										end
									 end
							 end
								end
					out_we = 1;
				end
				
				
										
					
		  27: begin
					if(out_we == 1) begin
						if(col != 63) begin
							if(row == M + r - 1) begin
								c = c + 4;
								col = c;
								row = r;
								next_state = 18;
							end 
						end else begin
								if(row == M + r - 1)
									if(row == 63)
										encode_done = 1;
									else begin
										row = row + 1;
										r = r + 4;
										c = 0;
										col = 0;
										next_state = 18;
									end
							 end
					end
					out_we = 0;
				end
		endcase
	end		
	
		
	
endmodule
    