# Arduino ile 16x2 LCD "Hello World" ve Yanıp Sönen Smiley

Bu proje, bir Arduino Uno kullanarak 16x2 LCD ekranda "Hello World!" metnini ve ikinci satırda yanıp sönen bir smiley göstermeyi amaçlamaktadır. Kontrast ayarı için bir potansiyometre kullanılmıştır.

![Proje Şeması](Brave Luulia (1).png)
!{ Proje ile ilgili görsellere medya kalsöründen ulaşabilirsiniz..}



## 🚀 Projenin Özellikleri

* **Üst Satır:** Ekrana "Hello World!" yazar.
* **Alt Satır:** Her saniye yanıp sönen bir `:)` ifadesi gösterir.
* **Kontrast:** Devreye bağlı potansiyometre ile LCD ekranın kontrastı (netliği) manuel olarak ayarlanabilir.

## ⚙️ Gereken Malzemeler

* Arduino Uno
* 16x2 LCD Ekran 
* 10k Potansiyometre
* Breadboard
* Çeşitli Jumper Kablolar

## 🔌 Devre Bağlantıları

Devre, standart `LiquidCrystal` kütüphanesi pin bağlantılarına göre kurulmuştur.

LCD - Arduino bağlantıları görselde verilmiştir.

*Not: Potansiyometrenin kenar bacakları 5V ve GND'ye bağlanır.*

## 💻 Arduino Kodu

Aşağıdaki kodu Arduino IDE'ye yapıştırıp kartınıza yükleyebilirsiniz.

```cpp
#include <LiquidCrystal.h>

// Gerekli kütüphaneyi dahil et
// Kütüphaneyi, bağladığımız pinlere göre başlat
// LiquidCrystal lcd(RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // LCD'nin sütun ve satır sayısını ayarla (16x2)
  lcd.begin(16, 2);
  
  // İlk satıra "Hello World!" yaz
  lcd.setCursor(0, 0);
  lcd.print("Hello World!");
}

void loop() {
  // İkinci satıra smiley koy
  lcd.setCursor(0, 1);
  lcd.print(":)");
  delay(1000); // 1 saniye bekle

  // Smiley'i silmek için üzerine boşluk yaz
  lcd.setCursor(0, 1);
  lcd.print("  "); // İki karakteri de sil
  delay(1000); // 1 saniye bekle
}
```

## 🛠️ Kurulum ve Kullanım

1.  Yukarıdaki devre şemasını kurun.
2.  `Arduino Kodu` bölümündeki kodu kopyalayıp Arduino IDE'de yeni bir skeç açın ve yapıştırın.
3.  Arduino'nuzu USB ile bilgisayara bağlayın.
4.  Arduino IDE üzerinden doğru kartı (Arduino Uno) ve Port'u seçin.
5.  "Yükle" (Upload) butonuna basın.
6.  Ekranda yazı görünmezse veya çok silikse, netleşene kadar potansiyometreyi yavaşça çevirin.
