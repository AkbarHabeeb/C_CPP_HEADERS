int mode(int a[],int n)
{
	int k=n,max,res,i;
	for(i=0;i<n;i++)
	{
		a[a[i]%k]+=k;
	}
	max=a[0],res=0;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			res=i;
		}	
	}
	for (int i = 0; i< n; i++)
          a[i] = a[i]%k;
	return res;
}