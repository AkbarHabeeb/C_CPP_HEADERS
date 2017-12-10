double avg(int arr[],int n)
{
	int i;
	double ans=0;
	for(i=0;i<n;i++)
	{
		ans+=arr[i];
	}
	return (ans/n);
}

double avg(float arr[],int n)
{
	int i;
	double ans=0;
	for(i=0;i<n;i++)
	{
		ans+=arr[i];
	}
	return (ans/n);
}

