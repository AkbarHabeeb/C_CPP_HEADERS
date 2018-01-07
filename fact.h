int fact(int n)
{
	int fact=1;
	if(n<0)
	std::cout<<"error";
	else
	{
		for(int i=1;i<=n;i++)
			fact=fact*i;
	}
	return fact;
}
