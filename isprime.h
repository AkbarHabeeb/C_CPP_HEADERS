int isprime(int n)
{
	if(n<=1)
	{
		printf("Neither prime nor composite");
		return 0;
	}
	else
	{
		if(n%1)
			return 0;
		else
		{
			for(int i=3;i<=n/2;i++)
			{
				if(n%i==0)
					return 0;
			}
			return 1;
		}
	}
}