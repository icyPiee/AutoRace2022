void mazeSolve()
{

  if(distance[0] > 50) runFoward();
  else if(distance[1] < 12 && distance[2] < 12)
  {
    double lech = distance[1] - distance[2];
    if(lech > 0) turnL();
    else if (lech < 0) turnR();
    else runFoward();
  }
  else if(distance[1] > 12 && distance[1] < 70 && distance[2] < 12)
  {
    runFoward();
    if(distance[0] < 5) turnL();
  }
  else if(distance[1] < 12 && distance[2] < 70 && distance[2] > 12)
  {
    turnR();
  }
}
