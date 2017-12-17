float median(int *a,int n)
{
	int middle;
	float median;
	middle=n/2;
	if(n%2==0)
	{
		int sum=(a[middle-1]+a[middle]);
		median=sum/2;
	}
	else
	median=a[middle];
	
	return median;
	
}
