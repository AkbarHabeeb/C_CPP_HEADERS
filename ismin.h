bool ismin(int a[],int n,int m)
{
	int small=n,i;
	for(i=0;i<m;i++)
	{
		if(a[i]<n)
		return 0;
	}
	return 1;
}
