
int c(int ir)
{
  if(ir > 900) return 1;
  else return 0;
}
void folowLine()
{

  int ir1 = c(analogRead(A0));
  int ir2 = c(analogRead(A1));
  int ir3 = c(analogRead(A2));
  int ir4 = c(analogRead(A3));
  int ir5 = c(analogRead(A4));   


  if(ir5==0) && (ir4==0) && (ir2==0) && (ir1==0))
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
