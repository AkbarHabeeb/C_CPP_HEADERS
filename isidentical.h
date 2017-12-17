bool isidentical(int a[][10],int n,int m)
{ int flag=1,i,j;

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][i]!=1 || ((i!=j)&&(a[i][j]!=0)))
			flag=0;
		}
	}
	
return flag;
}
