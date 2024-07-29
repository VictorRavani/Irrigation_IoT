#include <Arduino.h>

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
 
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(115200);
  Wire.setPins(20, 19);
  Wire.begin();

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();

    display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0,10);
  display.print("TESTE");
  display.setCursor(0,30);
  display.print("PCB");
  display.display();

  delay(5000);

}

void loop() {

  Serial.println("Teste Serial");
  delay(1000);
}