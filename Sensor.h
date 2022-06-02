int c(int ir) //check value of sensor
{
  if(ir > 900) return 1;
  else return 0;
}

void readSensor()
{
  ir1 = c(analogRead(A0));
  ir2 = c(analogRead(A1));
  ir3 = c(analogRead(A2));
  ir4 = c(analogRead(A3));
  ir5 = c(analogRead(A4));
}
