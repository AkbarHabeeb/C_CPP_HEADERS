//fibonacci series
int fib(int fi)
{
	int n1=0,n2=1;
	int n3,i;
	for(i=3;i<=fi;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
   }
		return n3;
}