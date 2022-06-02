
void followLine()
{

  readSensor();   
  if((ir5==0) && (ir4==0) && (ir2==0) && (ir1==0))
  {
    motorControl(inR1, inR2, 1, 200);   //PWM Speed Control
    motorControl(inL1, inL2, 1, 200);   //PWM Speed Control
  }
  else if((ir5==0) && (ir4==1) && (ir3==1) && (ir2==0) && (ir1==0))
  {
    motorControl(inR1, inR2, 1, 200);   //PWM Speed Control
    motorControl(inL1, inL2, 1, 150);   //PWM Speed Control
  }
  else if((ir5==0) && (ir4==1) && (ir3==0) && (ir2==0) && (ir1==0))
  {
    motorControl(inR1, inR2, 1, 200);   //PWM Speed Control
    motorControl(inL1, inL2, 1, 100);   //PWM Speed Control
  }
  else if((ir5==1) && (ir4==1) && (ir3==0) && (ir2==0) && (ir1==0))
  {
    motorControl(inR1, inR2, 1, 200);   //PWM Speed Control
    motorControl(inL1, inL2, 1, 50);   //PWM Speed Control
  }
  else if((ir5==1) && (ir4==0) && (ir3==0) && (ir2==0) && (ir1==0))
  {
    motorControl(inR1, inR2, 1, 200);   //PWM Speed Control
    motorControl(inL1, inL2, 1, 0);   //PWM Speed Control
  }
  else if((ir5==0) && (ir4==0) && (ir3==1) && (ir2==1) && (ir1==0))
  {
    motorControl(inR1, inR2, 1, 150);   //PWM Speed Control
    motorControl(inL1, inL2, 1, 200);   //PWM Speed Control
  }
  else if((ir5==0) && (ir4==0) && (ir3==0) && (ir2==1) && (ir1==0))
  {
    motorControl(inR1, inR2, 1, 100);   //PWM Speed Control
    motorControl(inL1, inL2, 1, 200);   //PWM Speed Control
  }
  else if((ir5==0) && (ir4==0) && (ir3==0) && (ir2==1) && (ir1==1))
  {
    motorControl(inR1, inR2, 1, 50);   //PWM Speed Control
    motorControl(inL1, inL2, 1, 200);   //PWM Speed Control
  }
  else if((ir5==0) && (ir4==0) && (ir3==0) && (ir2==0) && (ir1==1))
  {
    motorControl(inR1, inR2, 1, 0);   //PWM Speed Control
    motorControl(inL1, inL2, 1, 200);   //PWM Speed Control
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
