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
    DDRB = 0x00; PORTB = 0xFF;
    DDRB = 0xFF; PORTC = 0x00;
   
    unsigned char onesA =0;
    unsigned char onesOnA =0;
    unsigned char onesB = 0;
    unsigned char onesOnB =0;
    unsigned char totalOnes = 0;
    unsigned char i = 0;
    unsigned char j = 0;

    /* Insert your solution below */
    while (1) {
       //Read input
       onesA = PINA & 0xFF;
       onesB = PINB & 0xFF;
       // perform computation
       for (i=0; i<8 ; ++i){
          if ( (onesA & 0x01) == 0x01){
             onesOnA = onesOnA+1;
             onesA = onesA >>1;
          }
          else{
             onesA = onesA >>1;
          }
        i=i;
       }
      for (j=0; j<8 ; ++j){
          if ( (onesB & 0x01) == 0x01){
             onesOnB = onesOnB+1;
             onesB = onesB >>1;
          }
          else{
             onesB = onesB >>1;
          }
        j=j;
       }
       totalOnes = onesOnA + onesOnB;
       // write output
       PORTC = totalOnes;
    }
    return 1;
}
