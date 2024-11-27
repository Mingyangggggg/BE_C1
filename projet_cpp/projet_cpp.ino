#include <Arduino.h>
#include <Wire.h>
#include "SHT31.h"
#include "rgb_lcd.h"
#include <Grove_LED_Bar.h>

/home/zshe/Bureau/BE_C1/Blink/Blink.ino
SHT31 sht31 = SHT31();
const int colorR = 255;
const int colorG = 0;
const int colorB = 0;
Grove_LED_Bar bar(3, 2, 0); 
void setup() {
  //initialiser SHT31************************************/
  Serial.begin(9600);
  while(!Serial);
  Serial.println("begin...");  
  sht31.begin();  
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.setRGB(colorR, colorG, colorB);  
    // Print a message to the LCD.
  lcd.print("hello, world!");
  delay(1000);
  //set led
  pinMode(LED_BUILTIN, OUTPUT);
  //set buzzer
  pinMode(6, OUTPUT);
}

void loop() {
  float temp = sht31.getTemperature();
  float hum = sht31.getHumidity();
  int value = analogRead(A0);
  value = map(value, 0, 800, 0, 10);
  if (value<5){
    digitalWrite(LED_BUILTIN, HIGH); 
  }
  if (temp>20.0){
    lcd.setRGB(255,0,0);
     digitalWrite(6, HIGH);
  }else if(temp<=20.0 && temp > 10.0){
    lcd.setRGB(0,255,0);
  }else if(temp<=10.0){
    lcd.setRGB(0,0,255);
  }
  lcd.setCursor(0, 0);
  lcd.print("temprature : ");
  lcd.print(temp);
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("Humility : ");
  lcd.print(hum);
  lcd.print("%");
  delay(1000); 
  digitalWrite(LED_BUILTIN, low); 
  // put your main code here, to run repeatedly:
}
