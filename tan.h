
float pow(double x,int n)
{
	float num=1;
	for(int a=1;a<=n;a++)
	{
		num=num*x;
	}
	
	return num;
}


float f(int i)
{
 int j;
 float fact=1;
 for(j=0;j<i;j++)
  fact*=(j+1);
 return fact;
}






 double tan(double n)
 {
int i,j;
 float num,sum_sin=0;
 float sum_cos=1,tan_sum;
 num=n*(3.142/180.0);
 for(i=0,j=0;i<20;i=i+2,j++)
 {
  sum_sin+=pow(-1,j)*pow(num,i+1)/f(i+1);
 }

 for(i=2,j=1;i<20;i=i+2,j++)
 {
  sum_cos+=pow(-1,j)*pow(num,i)/f(i);
 }
 tan_sum=(float)sum_sin/sum_cos;
 
 return tan_sum;
}


