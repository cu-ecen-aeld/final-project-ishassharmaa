/*
Name: lcd.c
Description:  client code for lcd integration
Author: Isha Sharma
Reference: 
	https://www.circuitbasics.com/raspberry-pi-lcd-set-up-and-programming-in-c-with-wiringpi/
   	https://us.rs-online.com/m/d/4252b1ecd92888dbb9d8a39b536e7bf2.pdf
Course: AESD
Date: April 9, 2024
*/

#include <wiringPi.h>
#include <lcd.h>

#define LCD_RS  25               //Register select pin
#define LCD_E   24               //Enable Pin
#define LCD_D4  23               //Data pin 4
#define LCD_D5  22               //Data pin 5
#define LCD_D6  21               //Data pin 6
#define LCD_D7  14               //Data pin 7
 
int main()
{
    int lcd;               
    wiringPiSetup();
    wiringPiSetupGpio () ; 
    
    temp =20;       
    lcd = lcdInit (2, 16, 4, LCD_RS, LCD_E, LCD_D4, LCD_D5, LCD_D6, LCD_D7, 0, 0, 0, 0);
               
    lcdPosition(lcd, 3, 1); 
    lcdPuts(lcd, "AESD PROJECT");   
    sleep(2);
    lcdClear(lcd);  

    lcdPuts(lcd, "TEMP SYSTEM"); 
    sleep(2);
    lcdClear(lcd);

    lcdPrintf(lcd, "Temp: %d.0 C", temp);  
}



