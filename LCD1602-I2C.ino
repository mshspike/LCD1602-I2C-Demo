#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize LCD object (0x27 is the default I2C address, adjust if needed)
// Parameters: I2C address, columns (16), rows (2)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Initialize the LCD
  lcd.init();
  
  // Turn on the backlight
  lcd.backlight();
}

void loop() {
  // Clear the display first
  lcd.clear();
  
  // First message
  lcd.setCursor(0, 0);
  lcd.print("Hello World!");
  lcd.setCursor(0, 1);
  lcd.print("Message One");
  
  // Wait for 2 seconds
  delay(2000);
  
  // Clear the display again
  lcd.clear();
  
  // Second message
  lcd.setCursor(0, 0);
  lcd.print("Greetings!");
  lcd.setCursor(0, 1);
  lcd.print("Message Two");
  
  // Wait for 2 seconds
  delay(2000);
} 