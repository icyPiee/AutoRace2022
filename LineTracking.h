
void followLine(unsigned long time_start)
{   
  unsigned long time_p = millis();
  int SPEED = 255;
  if((ir5==0) && (ir4==0) && (ir2==0) && (ir1==0))
  {
    if(time_p - time_start > 4000 && time_p - time_start < 17000)
    {
      SPEED = 115;
    }
    else
    {
          SPEED = 255;
    }

    motorControl(inR1, inR2, 1, SPEED);   //PWM Speed Control
    motorControl(inL1, inL2, 1, SPEED);   //PWM Speed Control
  }
  else if((ir5==0) && (ir4==1) && (ir3==1) && (ir2==0) && (ir1==0))
  {
    SPEED = 150;
    motorControl(inR1, inR2, 1, SPEED);   //PWM Speed Control
    motorControl(inL1, inL2, 1, 0.4*SPEED);   //PWM Speed Control
  }
  else if((ir5==0) && (ir4==1) && (ir3==0) && (ir2==0) && (ir1==0))
  {
    SPEED = 175;
    motorControl(inR1, inR2, 1, SPEED);   //PWM Speed Control
    motorControl(inL1, inL2, 1, 0.2*SPEED);   //PWM Speed Control
  }
  else if((ir5==1) && (ir4==1) && (ir2==0) && (ir1==0))
  {
    motorControl(inR1, inR2, 1, SPEED);   //PWM Speed Control
    motorControl(inL1, inL2, 2, SPEED);   //PWM Speed Control
  }
  else if((ir5==1) && (ir4==0) && (ir3==0) && (ir2==0) && (ir1==0))
  {
    motorControl(inR1, inR2, 1, SPEED);   //PWM Speed Control
    motorControl(inL1, inL2, 2, SPEED);   //PWM Speed Control
  }
  else if((ir5==0) && (ir4==0) && (ir3==1) && (ir2==1) && (ir1==0))
  {    
    SPEED = 150;
    motorControl(inR1, inR2, 1, 0.4*SPEED);   //PWM Speed Control
    motorControl(inL1, inL2, 1, SPEED);   //PWM Speed Control
  }
  else if((ir5==0) && (ir4==0) && (ir3==0) && (ir2==1) && (ir1==0))
  {
    SPEED = 175;
    motorControl(inR1, inR2, 1, 0.2*SPEED);   //PWM Speed Control
    motorControl(inL1, inL2, 1, SPEED);   //PWM Speed Control
  }
  else if((ir5==0) && (ir4==0) && (ir2==1) && (ir1==1))
  {
    motorControl(inR1, inR2, 2, SPEED);   //PWM Speed Control
    motorControl(inL1, inL2, 1, SPEED);   //PWM Speed Control
  }
  else if((ir5==0) && (ir4==0) && (ir3==0) && (ir2==0) && (ir1==1))
  {
    motorControl(inR1, inR2, 2, SPEED);   //PWM Speed Control
    motorControl(inL1, inL2, 1, SPEED);   //PWM Speed Control
  }


//   if(!(ir4 + ir5 + ir2 + ir1))
//   {
//      runFoward();
//   }
//   else if(ir4 + ir5)
//    {
//      turnL();
//    }
//    else if(ir1 + ir2)
//    {
//      turnR();
//    }
//    else stopMotor();
}
