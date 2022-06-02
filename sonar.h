#include <SimpleKalmanFilter.h>

SimpleKalmanFilter Sonar(10, 10, 5);

int objectDistance()
{
  unsigned long duration;
  double distance;
  while(true)
  {
      /* phát xung từ chân trig */
      digitalWrite(trig, LOW);//tắt chân trig
      delayMicroseconds(2);
      
      digitalWrite(trig, HIGH);// phát xung từ chân trig
      delayMicroseconds(10);// xung có độ dài 5 microSeconds
    
      digitalWrite(trig, LOW);//tắt chân trig
    
      duration = pulseIn(echo, HIGH, 10000);//đo độ rộng xung HIGH ở chân echo
      distance = double(duration/2/29.412);//tính khoảng cách đến vật
      
      if(distance) break;  
   }
   return distance;
}
