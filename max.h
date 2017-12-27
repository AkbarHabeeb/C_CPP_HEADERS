//max of n numbers - int
int max(int a[], int n)
{
	int max=a[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		 max=a[i];
	}
	return max;
}


//max of n numbers - double
double max(double aa[], int n)
{
   double max=aa[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(max<aa[i])
		 max=aa[i];
	}
	return max;
}

//max of n numbers - float
float max(float aa[], int n)
{
   float max=aa[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(max<aa[i])
		 max=aa[i];
	}
	return max;
}