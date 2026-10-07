#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h> //If using a ST7735 display

//Pin definitions for the display
#define TFT_MOSI 18
#define TFT_SCLK 23
#define TFT_DC 4
#define TFT_CS 5
#define TFT_RST 2

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_MOSI, TFT_SLCK, TFT_RST);

void setup() {
    serial.begin(115200);

    //Initialize the display
    tft.initR(INITR_BLACKTAB);
    tft.fillScreen(ST7735_BLACK);

    tft.setCursor(10, 30);
    tft.setTextColor(ST7735_WHITE);
    tft.setTextSize(2);
    tft.println("Sup big dawg");   
}

void loop() {
    //Nothing here
}