int gcdvalue(int a, int b)
{
    int temp;
    while(b>0)
    {
    	temp=b;
    	b=a%b;
    	a=temp;
	}
    return a;
}

int gcd(int a[],int n)

{
	int i,result;
	result=a[0];
	for(int i=1;i<n;i++)
	{
		result=gcdvalue(result,a[i]);
	}
return result;
}
