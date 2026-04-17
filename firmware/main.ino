// Librarys
#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>
#include <BluetoothSerial.h>

// Hardware configs so we don't write them everywhere
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4 // number of the MAX7219 modules

#define DATA_PIN 23
#define CLK_PIN 18
#define CS_PIN 5

// Objects
MD_PAROLA display = MD_PAROLA(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);
BluetoothSerial SerialBT;

// Variable
String inputString = "";
String currentText = "Too Cool"; // you can change that later when u need, it's just the default yk
int brightness = 3; // i think it varies from 0 to 15

// Setup
void setup(){
  Serial.begin(115200);
  SerialBT.begin("SilverHelm"); // Bluetooth name, also customizable

  display.begin();
  display.setIntensity(brightness);
  display.displayClear();
  display.displayText(currentText.c_str(); PA_CENTER, 50, 0, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
}

// main loop yk
void loop(){
  readBluetooth();
  display.displayAnimate();
}

// Bluetooth Handler
void readBluetooth(){
  while (SerialBT.availiable()){
    char c = SerialBT.read();

    if (c == '\n'){
      proccessCommand(inputString);
      inputString = "";
    } else {
      inputString += c;
    }
  }
}

// command parser

void proccessCommand(String cmd){
  cmd.trim();

  if(cmd.startsWith("TEXT:")){ 
      currentText = cmd.substring(5);
      display.displayClear();
      display.displayText(currentText.c_str(), PA_CENTER, 50, 0, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
  } else if (cmd.startsWith("BRIGHT:")){
      brightness = cmd.substring(7).toInt();
      brightness = constrain(brightness, 0, 15);
      display.setIntensity(brightness);
  } else if (cmd.StartsWith("MODE:")){
      String mode = cmd.substring(5);
      if (mode == "SCROLL"){
        display.displayText(currentText.c_str(), PA_CENTER, 50, 0, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
      } else if (mode == "STATIC"){
        display.displayText(currentText.c_str(), PA_CENTER, 0, 0, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
      }
  }

  Serial.println("CMD: "+ cmd);
}
