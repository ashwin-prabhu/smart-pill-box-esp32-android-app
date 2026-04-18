#include <RTClib.h>

RTC_DS3231 rtc;
Datetime currentTime;
void setup(){
  Serial.begin(9600);
  if (!rtc.begin()){
    Serial.println("Couldn't find RTC");
  }
  rtc.adjust(DateTime(F(_DATE_),F(_TIME_)));

  

}

void loop(){

}