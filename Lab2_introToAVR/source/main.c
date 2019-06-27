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
/*
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
*/

int main(void){
DDRA = 0x00; PORTA = 0xFF;
DDRC = 0xFF; PORTC = 0x00;

unsigned char cntavail = 0x00;
unsigned char park1= 0x00;
unsigned char park2= 0x00;
unsigned char park3= 0x00;
unsigned char park4= 0x00;

while(1){

	park1 = PINA & 0x01;
	park2 = PINA & 0x02;
	park3 = PINA & 0x03;
	park4 = PINA & 0x04;


	if((park1 || 0x00) != 0){
		++cntavail;
	}
	if((park2 || 0x00) != 0){
		++cntavail;
	}
	if((park3 || 0x00) != 0){
		++cntavail;
	}
	if((park4 || 0x00) != 0){
		++cntavail;
	}

	return 0;
}
}
