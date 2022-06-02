#define inR1 9
#define inR2 10
#define inL1 5
#define inL2 6

#define trig 3
#define echo 2

#include "sonar.h"
#include "MotorControl.h"
#include "LineTracking.h"

int prev_distance = 400;

void setup()
{
  Serial.begin(9600);
  pinMode(inL1, OUTPUT);
  pinMode(inL2, OUTPUT); 
  pinMode(inR1, OUTPUT);
  pinMode(inR2, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

int checkMode()
{
  int ir1 = c(analogRead(A0));
  int ir2 = c(analogRead(A1));
  int ir3 = c(analogRead(A2));
  int ir4 = c(analogRead(A3));
  int ir5 = c(analogRead(A4));  
  int ir = ir1 + ir2 + ir3 + ir4 + ir5;
  if(ir) return 1;
  else return 0;
}

void MotorRunning()
{
  int mode = checkMode();
  if(mode)
    followLine();
  else
    mazeSolve();
} 

void loop() 
{
  MotorRunning();
}
