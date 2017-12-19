int pow(int b,int e)
{
    int res=1;
    while(e!=0)
  {
      res*=b;
      --e;
  }
  return res;
}
double pow(double b,int e)
{
    double res=1;
    while(e!=0)
  {
      res*=b;
      --e;
  }
  return res;
}

