//sub of n numbers - int 
int sub(int a[],int n)
{
	int i,ans;
	ans=a[0];
	for(i=1;i<n;i++)
	{
		ans=ans-a[i];
	}
	return ans;
}

//sub of n numbers - double
double sub(double aa[],int n)
{
	int i;
	double ans;
	ans=aa[0];
	for(i=1;i<n;i++)
	{
		ans=ans-aa[i];
	}
	return ans;
}

//sub of n numbers - float
float sub(float aa[],int n)
{
	int i;
	float ans;
	ans=aa[0];
	for(i=1;i<n;i++)
	{
		ans=ans-aa[i];
	}
	return ans;
}


//sub of first n numbers
int sub(int n)
{
	int i;
	int ans=0;
	for(i=1;i<=n;i++)
	{
		ans=ans-i;
	}
	return ans;
}