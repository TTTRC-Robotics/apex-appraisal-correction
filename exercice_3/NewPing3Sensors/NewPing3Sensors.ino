#include <NewPing.h>

#define SONAR_NUM 3      
#define MAX_DISTANCE 200 

NewPing sonar[SONAR_NUM] = {   
  NewPing(4, 5, MAX_DISTANCE), 
  NewPing(6, 7, MAX_DISTANCE),
  NewPing(8, 9, MAX_DISTANCE)
};

void setup() {
  Serial.begin(115200);
}

void loop() {
  for (uint8_t i = 0; i < SONAR_NUM; i++) { 
    delay(50); 
    Serial.print(i);
    Serial.print("=");
    Serial.print(sonar[i].ping_cm());
    Serial.print("cm ");
  }
  Serial.println();
}
