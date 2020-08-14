/*	Author: lab
 *  Partner(s) Name: none
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

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0xFF; PORTB = 0x00;
    DDRC = 0xFF; PORTC = 0x00;
   
    unsigned char upperNibble;
    unsigned char lowerNibble;
    unsigned char tempUP;
    unsigned char tempLow;
   
    /* Insert your solution below */
    while (1) {
       //Read input
     upperNibble = PINA & 0xF0;
     lowerNibble = PINA & 0x0F;
     
         tempUP = upperNibble;
         tempLow = lowerNibble;
       // write output
      PORTB = tempUP >> 4;
      PORTC = tempLow <<4;
   }
    return 1;
}
