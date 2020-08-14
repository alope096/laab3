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
    DDRC = 0xFF; PORTC = 0x00;
   
    unsigned char onesTopA =0x00;
    unsigned char onesBottomA = 0x00;
    unsigned char onesOnTopA =0x00;
    unsigned char onesOnBottomA = 0x00;
    unsigned char onesTopB =0x00;
    unsigned char onesBottomB = 0x00;
    unsigned char onesOnTopB =0x00;
    unsigned char onesOnBottomB = 0x00;
    unsigned char totalOnes = 0x00;

    /* Insert your solution below */
    while (1) {
       //Read input
       onesTopA = PINA & 0x0F;
       onesBottomA = PINA & 0xF0;
       onesTopB = PINB & 0xF0;
       onesBottomB = PINB & 0x0F;
       // perform computation
       if(onesTopA == 0x10 || onesBottomA ==0x01 || onesTopB == 0x10 || onesBottomB == 0x01 ){
         if(onesTopA == 0x10){
            onesOnTopA = 0x01;
         }
          if(onesBottomA == 0x01){
            onesOnBottomA = 0x01;
         }
         if(onesTopB == 0x10){
            onesOnTopB = 0x01;
         }
          if(onesBottomB == 0x01){
            onesOnBottomB = 0x01;
         }
       }
       else if(onesTopA == 0x20 || onesBottomA ==0x02 || onesTopB == 0x20 || onesBottomB == 0x02){
         if(onesTopA == 0x20){
            onesOnTopA = 0x01;
         }
          if(onesBottomA == 0x02){
            onesOnBottomA = 0x01;
         }
         if(onesTopB == 0x20){
            onesOnTopB = 0x01;
         }
          if(onesBottomB == 0x02){
            onesOnBottomB = 0x01;
         }
       }
       else if(onesTopA == 0x30 || onesBottomA ==0x03 || onesTopB == 0x30 || onesBottomB == 0x03){
         if(onesTopA == 0x30){
            onesOnTopA = 0x02;
         }
          if(onesBottomA == 0x03){
            onesOnBottomA = 0x02;
         }
         if(onesTopB == 0x30){
            onesOnTopB = 0x02;
         }
          if(onesBottomB == 0x03){
            onesOnBottomB = 0x02;
         }
       }
        else if(onesTopA == 0x40 || onesBottomA ==0x04 || onesTopB == 0x40 || onesBottomB == 0x04){
         if(onesTopA == 0x40){
            onesOnTopA = 0x01;
         }
          if(onesBottomA == 0x04){
            onesOnBottomA = 0x01;
         }
         if(onesTopB == 0x40){
            onesOnTopB = 0x01;
         }
          if(onesBottomB == 0x04){
            onesOnBottomB = 0x01;
         }
       }
       else if(onesTopA == 0x50 || onesBottomA ==0x05 || onesTopB == 0x50 || onesBottomB == 0x05){
         if(onesTopA == 0x50){
            onesOnTopA = 0x02;
         }
          if(onesBottomA == 0x05){
            onesOnBottomA = 0x02;
         }
         if(onesTopB == 0x50){
            onesOnTopB = 0x02;
         }
          if(onesBottomB == 0x05){
            onesOnBottomB = 0x02;
         }
       }
       else if(onesTopA == 0x60 || onesBottomA ==0x06 || onesTopB == 0x60 || onesBottomB == 0x06){
         if(onesTopA == 0x60){
            onesOnTopA = 0x02;
         }
          if(onesBottomA == 0x06){
            onesOnBottomA = 0x02;
         }
         if(onesTopB == 0x60){
            onesOnTopB = 0x02;
         }
          if(onesBottomB == 0x06){
            onesOnBottomB = 0x02;
         }
       }
       else if(onesTopA == 0x70 || onesBottomA ==0x07 || onesTopB == 0x70 || onesBottomB == 0x07){
         if(onesTopA == 0x70){
            onesOnTopA = 0x03;
         }
          if(onesBottomA == 0x07){
            onesOnBottomA = 0x02;
         }
         if(onesTopB == 0x70){
            onesOnTopB = 0x03;
         }
          if(onesBottomB == 0x07){
            onesOnBottomB = 0x03;
         }
       }
       else if(onesTopA == 0x80 || onesBottomA ==0x08 || onesTopB == 0x80 || onesBottomB == 0x08){
         if(onesTopA == 0x80){
            onesOnTopA = 0x01;
         }
          if(onesBottomA == 0x08){
            onesOnBottomA = 0x02;
         }
         if(onesTopB == 0x80){
            onesOnTopB = 0x01;
         }
          if(onesBottomB == 0x08){
            onesOnBottomB = 0x01;
         }
       }
       else if(onesTopA == 0x90 || onesBottomA ==0x09 || onesTopB == 0x90 || onesBottomB == 0x09){
         if(onesTopA == 0x90){
            onesOnTopA = 0x02;
         }
          if(onesBottomA == 0x09){
            onesOnBottomA = 0x02;
         }
         if(onesTopB == 0x90){
            onesOnTopB = 0x02;
         }
          if(onesBottomB == 0x09){
            onesOnBottomB = 0x02;
         }
       }

       else if(onesTopA == 0xA0 || onesBottomA ==0x0A || onesTopB == 0xA0 || onesBottomB == 0x0A){
         if(onesTopA == 0xA0){
            onesOnTopA = 0x02;
         }
          if(onesBottomA == 0x0A){
            onesOnBottomA = 0x02;
         }
         if(onesTopB == 0xA0){
            onesOnTopB = 0x02;
         }
          if(onesBottomB == 0x0A){
            onesOnBottomB = 0x02;
         }
       }
       else if(onesTopA == 0xB0 || onesBottomA ==0x0B || onesTopB == 0xB0 || onesBottomB == 0x0B){
         if(onesTopA == 0xB0){
            onesOnTopA = 0x03;
         }
          if(onesBottomA == 0x0B){
            onesOnBottomA = 0x03;
         }
         if(onesTopB == 0xB0){
            onesOnTopB = 0x03;
         }
          if(onesBottomB == 0x0B){
            onesOnBottomB = 0x03;
         }
       }
       else if(onesTopA == 0xC0 || onesBottomA ==0x0C || onesTopB == 0xC0 || onesBottomB == 0x0C){
         if(onesTopA == 0xC0){
            onesOnTopA = 0x02;
         }
          if(onesBottomA == 0x0C){
            onesOnBottomA = 0x02;
         }
         if(onesTopB == 0xC0){
            onesOnTopB = 0x02;
         }
          if(onesBottomB == 0x0C){
            onesOnBottomB = 0x02;
         }
       }
       else if(onesTopA == 0xD0 || onesBottomA ==0x0D || onesTopB == 0xD0 || onesBottomB == 0x0D){
         if(onesTopA == 0xD0){
            onesOnTopA = 0x03;
         }
          if(onesBottomA == 0x0D){
            onesOnBottomA = 0x03;
         }
         if(onesTopB == 0xD0){
            onesOnTopB = 0x03;
         }
          if(onesBottomB == 0x0D){
            onesOnBottomB = 0x03;
         }
       }
       else if(onesTopA == 0xE0 || onesBottomA ==0x0E || onesTopB == 0xE0 || onesBottomB == 0x0E){
         if(onesTopA == 0xE0){
            onesOnTopA = 0x03;
         }
          if(onesBottomA == 0x0E){
            onesOnBottomA = 0x03;
         }
         if(onesTopB == 0xE0){
            onesOnTopB = 0x03;
         }
          if(onesBottomB == 0x0E){
            onesOnBottomB = 0x03;
         }
       }
       else if(onesTopA == 0xF0 || onesBottomA ==0x0F || onesTopB == 0xF0 || onesBottomB == 0x0F){
         if(onesTopA == 0xF0){
            onesOnTopA = 0x04;
         }
          if(onesBottomA == 0x0F){
            onesOnBottomA = 0x04;
         }
         if(onesTopB == 0xF0){
            onesOnTopB = 0x04;
         }
          if(onesBottomB == 0x0F){
            onesOnBottomB = 0x04;
         }
       }
       else {
        
            onesOnTopA = 0x00;
            onesOnBottomA = 0x00;
            onesOnTopB = 0x00;
            onesOnBottomB = 0x00;
       }
       
       totalOnes = onesOnTopA + onesOnBottomA + onesOnTopB + onesOnBottomB;
       // write output
       PORTC = totalOnes;
    }
    return 1;
}
