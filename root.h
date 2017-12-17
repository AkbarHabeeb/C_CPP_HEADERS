double root(int a,int b)
{
	int j;
	double i,k=1;
	double incre=0.000001;
	for(i=1;i<=a;i=i+incre)
	{
		for(j=0;j<b;j++)
		{
			k=k*i;
		}
		if(a<k)
		{
			return (i-incre);
			break;
		}
		else
		k=1;
	}
}
