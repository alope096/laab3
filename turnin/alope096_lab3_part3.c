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
    DDRC = 0xFF; PORTC = 0x00;
   
    unsigned char fuelLevelSensor;
    unsigned char vehicleSensor;
    unsigned char fuelLevel;
    unsigned char outputFuel;
    unsigned char lowFuel;
    unsigned char ignitionOn;
    unsigned char driverSeated;
    unsigned char beltOn;
    unsigned char allInOne;
    /* Insert your solution below */
    while (1) {
       //Read input
      fuelLevelSensor = PINA & 0x0F;
      vehicleSensor = PINA & 0xF0;
      fuelLevel = 0;
      outputFuel = 0x00;
      lowFuel = 0x00;
      ignitionOn = 0x00;
      driverSeated = 0x00;
      beltOn = 0x00;
      allInOne = 0x80;
       // perform computation
      if(fuelLevelSensor == 0x01 || fuelLevelSensor == 0x02){
         outputFuel = 0x20;
         fuelLevel = 2;
      }
      else if(fuelLevelSensor == 0x03 || fuelLevelSensor == 0x04){
         outputFuel = 0x30;
         fuelLevel = 4;
      }
      else if(fuelLevelSensor == 0x05 || fuelLevelSensor == 0x06){
         outputFuel = 0x38;
         fuelLevel = 6;
      }
      else if(fuelLevelSensor == 0x07 || fuelLevelSensor == 0x08 || fuelLevelSensor == 0x09){
         outputFuel = 0x3C;
         fuelLevel = 6;
      }
      else if(fuelLevelSensor == 0x0A || fuelLevelSensor == 0x0B || fuelLevelSensor == 0x0C){
         outputFuel = 0x3E;
         fuelLevel = 6;
      }
      else if(fuelLevelSensor == 0x0D || fuelLevelSensor == 0x0E || fuelLevelSensor == 0x0F){
         outputFuel = 0x3F;
         fuelLevel = 6;
      }
      else{
         outputFuel = 0x00;
         fuelLevel = 0;
      }
      if(fuelLevel <= 4){
         lowFuel = 0x40;
       }
       else{
         lowFuel = 0x00;
       }
      if(vehicleSensor == 0x10){
        ignitionOn = 0x01;
      }
      if(vehicleSensor == 0x20){
        driverSeated = 0x01;
      }
      if(vehicleSensor == 0x40){
        beltOn = 0x01;
      }
      if ((ignitionOn & driverSeated & beltOn) == 0x01){
        allInOne = 0x80;
      }
    
       // write output
      PORTC = outputFuel | lowFuel | allInOne;
    }
    return 1;
}
