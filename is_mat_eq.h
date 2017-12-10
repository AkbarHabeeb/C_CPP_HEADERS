//while sending 2d array as a args send the start address ie: &a[0][0]

int is_mat_eq(int *a,int *b,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<m;k++)
		{
			if(*((b+i*n)+k ) != *((a+i*m)+k)) 
				return 0;
		}
	}
	return 1;
}