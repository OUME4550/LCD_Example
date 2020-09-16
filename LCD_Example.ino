/*
 * LCD Example, nibble interface
 * Uses library to talk with Hitachi HD44780 chip on LCD
 Based on:
 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code (default part of AVR):
#include <LiquidCrystal.h>
#define LCD_RS 12
#define LCD_Enable 11
#define LCD_D4 5
#define LCD_D5 4
#define LCD_D6 3
#define LCD_D7 2

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(LCD_RS, LCD_Enable, LCD_D4, LCD_D5, LCD_D6, LCD_D7);
void setup() 
{
  // set up the LCD's number of columns and rows:
  lcd.clear();
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}
void loop() 
{
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
  if(millis()/1000 >= 10)
  {
    lcd.setCursor(0,0);
    lcd.print("Time:    ");
  }
}
