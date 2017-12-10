//while sending 2d array as a args send the start address ie: &a[0][0]
//ptr will be returned so catch it with a ptr

int* transpose(int *a ,int n,int m)
{
	int c[m][n];
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<m;k++)
		{
			c[i][k]=*((a+k*m)+i) ;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<3;k++)
		{
			*((a+i*m)+k)=c[i][k];
		}
	}
	//return ((a+0*m)+0);
	return a;
}


