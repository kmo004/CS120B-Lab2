/*	Author: kmo004
 *  Partner(s) Name: Moker(Ke) Bellomo
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
 #include <avr/io.h>
 #ifdef _SIMULATE_
 #include "simAVRHeader.h"
 #endif
 
int main(void){
DDRA = 0x00; PORTA = 0xFF;
DDRB = 0xFF; PORTB = 0x00;

   unsigned char P0 = 0x00;
   unsigned char P1 = 0x00;
   
    while (1) {
	
		P0 = PINA & 0x01;
		P1 = PINA & 0x02;
		
		
		if( P0 == 0x01 && P1 == 0x00){
			PORTB = 0x01;
		}
		else{
			PORTB = 0x00;
			}
	}
return 0;
}



