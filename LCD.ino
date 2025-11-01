#include <LiquidCrystal.h>

// Gerekli kütüphaneyi dahil et

// Kütüphaneyi, bağladığımız pinlere göre başlat
// LiquidCrystal(RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // LCD'nin sütun ve satır sayısını ayarla (16x2)
  lcd.begin(16, 2);
 
  lcd.setCursor(0,0);
  lcd.print("Hello World!"); 

}

void loop() {  // alt satırın yanıp sönmesi 

  lcd.setCursor(0,1);
  lcd.print(":)");
  delay(1000);

  lcd.setCursor(0,1);
  lcd.print("  ");
  delay(1000);
  
}
