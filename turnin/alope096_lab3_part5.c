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
    DDRB = 0xFE; PORTB = 0x01;
    DDRD = 0x00; PORTD = 0xFF;
   
   unsigned short weight;
   unsigned short airBagsOn;
   unsigned short airBagDisabled; 
    /* Insert your solution below */
    while (1) {
       //Read input
       weight = (PIND << 1) | (PINB & 0x1);
       //computation
       if(weight >= 70){
         airBagsOn = 0x02;
       }
       else{
         airBagsOn = 0x0;
       }
       if ((weight > 5) && (weight <70)){
         airBagDisabled = 0x04;
       }
       else{
         airBagDisabled = 0x00;
       }
       if(weight < 5){
         airBagsOn = 0x00;
         airBagDisabled = 0x00;
       }
       // write output
      PORTB =airBagsOn | airBagDisabled;
     
    }
    return 1;
}
