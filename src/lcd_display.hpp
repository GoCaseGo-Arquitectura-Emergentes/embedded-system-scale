#ifndef LCD_DISPLAY_HPP
#define LCD_DISPLAY_HPP
void setupDisplay();
void showInDisplay(const char* message, int row = 0, int column = 0, bool clean = true);
void displayWeightInfo(const char* label, float value, int row, int column, bool clean = false);
#endif