void motorControl(byte in1, byte in2, byte direct, int SPEED)
{
  switch (direct) 
  {
    case 0:
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);
      break;
    case 1:
      analogWrite(in1,SPEED);
      digitalWrite(in2,LOW);
      break;    
    case 2:
      digitalWrite(in1,LOW);
      analogWrite(in2,SPEED);
      break;
    //default: 
  }
}

void runFoward()
{
  motorControl(inL1, inL2, 1, 100);
  motorControl(inR1, inR2, 1, 100);
}

void stopMotor()
{
  motorControl(inL1, inL2, 0, 0);
  motorControl(inR1, inR2, 0, 0);
}

void turnL()
{
    motorControl(inL1, inL2, 2, 0);
    motorControl(inR1, inR2, 1, 100);
}

void turnR()
{
    motorControl(inL1, inL2, 1, 100);
    motorControl(inR1, inR2, 2, 0);
}
