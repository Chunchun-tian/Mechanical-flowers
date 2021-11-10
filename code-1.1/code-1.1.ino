#include "Adafruit_FreeTouch.h"
Adafruit_FreeTouch qt_1 = Adafruit_FreeTouch(A0, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
#include <Adafruit_NeoPXL8.h>
#include <Adafruit_NeoPixel.h>
#include <Servo.h>
#define NUM_LED 7  
int8_t pins[8] = { MISO , -1,-1 , -1, -1, -1, -1, -1 };//Pin: MISO
Adafruit_NeoPXL8 leds(NUM_LED, pins, NEO_GRB);
Servo myservo;
int pos = 0; 
int skills;
void setup() {
  Serial.begin(115200);
  leds.begin();
  leds.show();
  myservo.attach(2); 
    if (! qt_1.begin())  
    Serial.println("Failed to begin qt on pin A0");
}

void loop() {
  skills = random(1, 11);
  int counter, result = 0;
  counter = millis();
  result = qt_1.measure(); 
  Serial.print("QT 1: "); Serial.println(result);
      if((result > 900) && (skills == 1)){  //pink
        fen_up();
        delay(1500);
        fen_down();
        delay(1500);
      }
      if((result > 900) && (skills == 2)){//Red
        hong_up();
        delay(1500);
        hong_down();
        delay(1500);
      }
      if((result > 900) && (skills == 3)){//green
        lv_up();
        delay(1500);
        lv_down();
        delay(1500);
      }
      if((result > 900) && (skills == 4)){//blue
        lan_up();
        delay(1500);
        lan_down();
        delay(1500);
      }
      if((result > 900) && (skills == 5)){//purple
        zi_up();
        delay(1500);
        zi_down();
        delay(1500);
      }
      if((result > 900) && (skills == 6)){//yellow
        huang_up();
        delay(1500);
        huang_down();
        delay(1500);
      }
      if((result > 900) && (skills == 7)){//Light blue
        tianlan_up();
        delay(1500);
        tianlan_down();
        delay(1500);
      }
      if((result > 900) && (skills == 8)){//fen_slow_down
        fen_slow_down();
        delay(1500);
      }
      if((result > 900) && (skills == 9)){//white
        bai_down();
        delay(1500);
      }
      if((result > 900) && (skills == 10)){//close white
        close_bai();
        delay(1500);
      }

      else{
        close_all();
      }
      delay(1500);
}
void fen_up(){
    leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(255,25,25));

  }
      for(int j=0;j<255;j++){
      leds.setBrightness(j);
      leds.show();
      delay(15);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
}

void fen_down(){
      leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(255,25,25));

  }
      for(int j=255;j>0;j--){
      leds.setBrightness(j);
      leds.show();
      delay(15);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
}

void fen_slow_down(){
      leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(255,25,25));

  }
      for(int j=255;j>0;j--){
      leds.setBrightness(j);
      leds.show();
      delay(50);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
}

void qin_up(){
    leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(230,220,2));

  }
      for(int j=0;j<255;j++){
      leds.setBrightness(j);
      leds.show();
      delay(15);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}

void qin_down(){
      leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(230,220,2));

  }
      for(int j=255;j>0;j--){
      leds.setBrightness(j);
      leds.show();
      delay(15);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}





void hong_up(){
    leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(250,0,0));

  }
      for(int j=0;j<255;j++){
      leds.setBrightness(j);
      leds.show();
      delay(15);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}

void hong_down(){
      leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(250,0,0));

  }
      for(int j=255;j>0;j--){
      leds.setBrightness(j);
      leds.show();
      delay(15);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}



void lv_up(){
    leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(0,250,2));
  }
      for(int j=0;j<255;j++){
      leds.setBrightness(j);
      leds.show();
      delay(15);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}

void lv_down(){
      leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(0,250,2));

  }
      for(int j=255;j>0;j--){
      leds.setBrightness(j);
      leds.show();
      delay(15);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}

void lan_up(){
    leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(0,0,250));

  }
      for(int j=0;j<255;j++){
      leds.setBrightness(j);
      leds.show();
      delay(15);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}

void lan_down(){
      leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(0,0,250));

  }
      for(int j=255;j>0;j--){
      leds.setBrightness(j);
      leds.show();
      delay(5);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}

void zi_up(){
    leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(194,138,250));

  }
      for(int j=0;j<255;j++){
      leds.setBrightness(j);
      leds.show();
      delay(40);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}

void zi_down(){
      leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(194,138,250));

  }
      for(int j=255;j>0;j--){
      leds.setBrightness(j);
      leds.show();
      delay(10);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}


void huang_up(){
    leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(255,241,0));

  }
      for(int j=0;j<255;j++){
      leds.setBrightness(j);
      leds.show();
      delay(25);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}

void huang_down(){
      leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(255,241,0));

  }
      for(int j=255;j>0;j--){
      leds.setBrightness(j);
      leds.show();
      delay(15);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}

void tianlan_up(){
    leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(116,221,250));

  }
      for(int j=0;j<255;j++){
      leds.setBrightness(j);
      leds.show();
      delay(5);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}

void tianlan_down(){
      leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(116,221,250));

  }
      for(int j=255;j>0;j--){
      leds.setBrightness(j);
      leds.show();
      delay(45);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}




void bai_up(){
    leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(229,250,229));

  }
      for(int j=0;j<255;j++){
      leds.setBrightness(j);
      leds.show();
      delay(5);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}

void bai_down(){
      leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(229,250,229));

  }
      for(int j=255;j>0;j--){
      leds.setBrightness(j);
      leds.show();
      delay(45);
      map(j, 0, 255, 5, 58);
      myservo.write(map(j, 0, 255, 65, 0));
    }
  leds.show();
}

void close_bai(){
    leds.clear(); // Set all pixel colors to 'off'
for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(229,250,229));

  }
      for(int j=0;j<255;j++){
      leds.setBrightness(j);
      leds.show();
      delay(20);
    }

}

void close_all(){
    myservo.write(65);
    for(int i=0;i<NUM_LED;i++){
    leds.setPixelColor(i, leds.Color(0,0,0));

  }
    leds.show();
}
