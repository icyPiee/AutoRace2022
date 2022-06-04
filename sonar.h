#include <SimpleKalmanFilter.h>

//SimpleKalmanFilter Sonar(10, 10, 5);

void getDistance()
{
  for(int i=0; i<3; i++)
  {
    unsigned long duration;
    double d;
//    while(true)
//    {
        digitalWrite(SonarTrig[i], LOW);
        delayMicroseconds(2);
        digitalWrite(SonarTrig[i], HIGH);
        delayMicroseconds(10);
        digitalWrite(SonarTrig[i], LOW);
      
        duration = pulseIn(SonarEcho[i], HIGH, 10000);
//        Serial.println(duration);
        d = double(duration/2/29.412);
        
//        if(d) break;  // only takes true values (>0)
//   
//     }
     distance[i] = d;
//     Serial.print(i);
//     Serial.print(":");
//     Serial.println(distance[i]);
  
  }
}

int checkBarrier()
{
    if(distance[0] < 7 && distance[0] > 0)
      return 1;     
    else return 0;
}
