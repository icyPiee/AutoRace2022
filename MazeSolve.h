void mazeSolve()
{
  runFoward();
  if(distance[0] < 10)
  {
    stopMotor();
    if(distance[0] < 5)  // sat truoc
      {
        lui();
        delay(150);
      }
  }
  if(distance[2] > 20)
  {
    if(distance[0] < 50) 
    {
      runFoward();
      delay(130);
      if(distance[0] > 20)
      {
        lui();
        delay(100);
        turnR();
        delay(400);
      }
      stopMotor();
      turnR();
      delay(400);
    }
  }
  else if(distance[0] < 10)
  {
    if(distance[2] < 5) // sat tuong phai
    {
      stopMotor();
      lui();
      delay(500);
      turnL();
      delay(100);
    }
    if(distance[0] < 3) 
    {
      lui();
      delay(100);
    }
    stopMotor();
    turnL();
    delay(100);
  }

}
