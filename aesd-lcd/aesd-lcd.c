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
#define LCD_D0  29               //Data pin D0
#define LCD_D1  28               //Data pin D1
#define LCD_D2  27               //Data pin D2
#define LCD_D3  26               //Data pin D3
#define LCD_D4  23               //Data pin D4
#define LCD_D5  22               //Data pin D5
#define LCD_D6  21               //Data pin D6
#define LCD_D7  14               //Data pin D7
 
int main()
{
    int lcd;
    temp =20;
    wiringPiSetup();
    lcd = lcdInit (2, 16, 8, LCD_RS, LCD_E, LCD_D0, LCD_D1, LCD_D2, LCD_D3, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

    lcdPosition(lcd, 3, 1); 
    lcdPuts(lcd, "AESD PROJECT");   
    sleep(2);
    lcdClear(lcd);  

    lcdPuts(lcd, "TEMP SYSTEM"); 
    sleep(2);
    lcdClear(lcd);

    lcdPrintf(lcd, "Temp: %d.0 C", temp); 
}


