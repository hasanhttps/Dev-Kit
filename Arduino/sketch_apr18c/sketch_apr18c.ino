#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClient.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

const unsigned char shower [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x1d, 0x80, 0x01, 0xf0, 0x40, 0x03,
  0x20, 0x20, 0x06, 0x00, 0x20, 0x04, 0x00, 0x20, 0x0c, 0x00, 0x30, 0x10, 0x00, 0x18, 0x30, 0x00,
  0x04, 0x30, 0x00, 0x04, 0x30, 0x00, 0x04, 0x18, 0x00, 0x0c, 0x0f, 0x98, 0xf8, 0x03, 0x08, 0x60,
  0x00, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char day_clear [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x40, 0x00, 0x9c, 0x80, 0x00, 0x66, 0x00, 0x00, 0x41,
  0x00, 0x00, 0x81, 0x00, 0x0e, 0x80, 0x70, 0x00, 0xc1, 0x00, 0x00, 0x43, 0x00, 0x00, 0x3e, 0x00,
  0x00, 0x80, 0x80, 0x01, 0x08, 0x40, 0x00, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char night_clear [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x01,
  0xf0, 0x00, 0x03, 0xb0, 0x00, 0x06, 0x30, 0x00, 0x06, 0x30, 0x00, 0x0c, 0x10, 0x00, 0x0c, 0x18,
  0x00, 0x0c, 0x0c, 0x00, 0x0c, 0x07, 0x00, 0x0c, 0x03, 0xf0, 0x0c, 0x00, 0x70, 0x06, 0x00, 0x20,
  0x06, 0x00, 0x60, 0x03, 0x80, 0xc0, 0x01, 0xe7, 0x80, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char day_cloudy [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x01,
  0x04, 0x30, 0x01, 0x80, 0x60, 0x00, 0x1f, 0x00, 0x00, 0x21, 0x80, 0x00, 0x60, 0x80, 0x00, 0x40,
  0xc0, 0x07, 0x40, 0x5c, 0x00, 0x40, 0xc0, 0x00, 0x60, 0x80, 0x03, 0xf3, 0x80, 0x07, 0x1a, 0x40,
  0x08, 0x08, 0x20, 0x18, 0x0c, 0x00, 0x30, 0x06, 0x00, 0x30, 0x02, 0x00, 0x18, 0x06, 0x00, 0x0f,
  0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char night_cloudy [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x0f, 0x00, 0x00,
  0x19, 0x00, 0x00, 0x11, 0x00, 0x00, 0x31, 0x80, 0x00, 0x30, 0xe0, 0x00, 0x30, 0x7c, 0x00, 0x00,
  0x1c, 0x00, 0x38, 0x08, 0x00, 0x7e, 0x18, 0x03, 0xc6, 0x70, 0x06, 0x83, 0x00, 0x0c, 0x03, 0x00,
  0x1c, 0x03, 0x80, 0x10, 0x00, 0xc0, 0x30, 0x00, 0x40, 0x10, 0x00, 0xc0, 0x1f, 0xff, 0xc0, 0x0f,
  0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char cloudy [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x1f, 0x80, 0x00, 0xf8, 0xc0, 0x03, 0xe0, 0x60, 0x06, 0x00, 0x20, 0x06, 0x00,
  0x30, 0x0c, 0x00, 0x30, 0x1c, 0x00, 0x38, 0x10, 0x00, 0x0c, 0x30, 0x00, 0x06, 0x30, 0x00, 0x06,
  0x10, 0x00, 0x0c, 0x1c, 0x00, 0x1c, 0x0f, 0xff, 0xf8, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char rain [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x38, 0xc0, 0x01,
  0xe0, 0x60, 0x02, 0x00, 0x20, 0x06, 0x00, 0x20, 0x04, 0x00, 0x20, 0x0c, 0x00, 0x38, 0x10, 0x00,
  0x0c, 0x30, 0x00, 0x04, 0x30, 0x00, 0x06, 0x10, 0x00, 0x04, 0x18, 0x36, 0x0c, 0x0f, 0xa4, 0xf8,
  0x00, 0x24, 0x00, 0x00, 0x08, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char snow [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x08, 0x00, 0x01, 0x5d, 0xc0, 0x00, 0xc9, 0x80, 0x01, 0xc9, 0xc0, 0x00, 0x2a,
  0x00, 0x01, 0x1c, 0x40, 0x07, 0xff, 0xf0, 0x01, 0x1c, 0x40, 0x00, 0x2a, 0x00, 0x01, 0xc9, 0xc0,
  0x01, 0xc9, 0x80, 0x01, 0x5d, 0x40, 0x00, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char mist [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x0e, 0x38, 0x10, 0x08, 0x0f,
  0xf0, 0x03, 0xe3, 0x80, 0x0e, 0x38, 0x10, 0x00, 0x0f, 0xf0, 0x03, 0xe1, 0x80, 0x0e, 0x38, 0x10,
  0x00, 0x0f, 0xf0, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char thunder [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x1f, 0x80, 0x01, 0xf0, 0xe0, 0x03,
  0xe0, 0x60, 0x06, 0x00, 0x20, 0x04, 0x00, 0x30, 0x0c, 0x00, 0x30, 0x18, 0x00, 0x38, 0x30, 0x00,
  0x0c, 0x30, 0x04, 0x06, 0x30, 0x0c, 0x06, 0x18, 0x18, 0x0c, 0x0f, 0x90, 0xf8, 0x07, 0xb4, 0xf0,
  0x00, 0x3c, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x18, 0x00, 0x00, 0x10, 0x00, 0x00, 0x30, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


const unsigned char wifi [] PROGMEM = {
  0x38, 0x44, 0x82, 0x38, 0x44, 0x00, 0x10
};
int contrastValue = 60; /* Default Contrast Value */

void setup() {
  display.begin();

  /* Change the contrast using the following API*/
  display.setContrast(contrastValue);

  /* Clear the buffer */
  display.clearDisplay();
  display.display();
  delay(100);
  display.clearDisplay();
  display.setTextColor(BLACK);
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("Connecting");

}

void loop() {



}