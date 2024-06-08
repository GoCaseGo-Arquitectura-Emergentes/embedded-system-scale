// LCD display utilities for setup and information display
#include "lcd_display.hpp"
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR 0x27
#define LCD_COLUMNS 20
#define LCD_LINES 4

LiquidCrystal_I2C LCD(I2C_ADDR, LCD_COLUMNS, LCD_LINES);

// Function to set up the LCD display
void setupDisplay() {
    LCD.init();
    LCD.backlight();
    LCD.setCursor(0, 0);
}

// Function to display a message on the LCD
void showInDisplay(const char *message, int row, int column, bool clean) {
  if (clean) LCD.clear();
  LCD.setCursor(column, row);
  LCD.print(message);
}

// Function to display weight information on the LCD
void displayWeightInfo(const char* label, float value, int row, int column, bool clean) {
  if (clean) showInDisplay("", row, column, true);
  showInDisplay(((String(label)) + (String(": ")) + (String(value) + String(" kg"))).c_str(), row, column, false);
}
