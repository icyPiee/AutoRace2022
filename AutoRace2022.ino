#define inR1 9
#define inR2 10
#define inL1 5
#define inL2 6

const int SonarEcho[3] = {2, 7, 11};
const int SonarTrig[3] = {3, 8, 12};

int ir1, ir2, ir3, ir4, ir5;
double distance[3];
int prev_speed;

#include "Sonar.h"
#include "Sensor.h"
#include "MotorControl.h"
#include "LineTracking.h"
#include "MazeSolve.h"

void setup()
{
  Serial.begin(9600);
  pinMode(inL1, OUTPUT);
  pinMode(inL2, OUTPUT); 
  pinMode(inR1, OUTPUT);
  pinMode(inR2, OUTPUT);

  for(int i=0; i<3; i++)
  {
        pinMode(SonarTrig[i], OUTPUT);
        pinMode(SonarEcho[i], INPUT);
  }
}

int checkMode()
{ 
  int ir = ir1 + ir2 + ir3 + ir4 + ir5;
  
  if(checkBarrier()) return 0;
  else 
  {
     if(ir) return 1;
     else return 2;
  }
}

void MotorRunning()
{
//  unsigned long time1, time2;
//    time1 = millis();
//  getDistance();
//     time2 = millis();
////   Serial.println(time2- time1);
  readSensor();
//
//  int mode = checkMode();
//  if(mode == 0)
//    stopMotor();
//  else if(mode == 1)
//    followLine();
//  else 
//    mazeSolve();

  followLine();

} 

void loop() 
{
  MotorRunning();
}
