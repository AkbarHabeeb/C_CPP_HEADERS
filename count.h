int count(int n)
{
	int rem,count=0;
	while(n>0)
	{
		n=n/10;
		count=count+1;
	}
	return count;
}
