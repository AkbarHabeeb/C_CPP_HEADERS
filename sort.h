void sortasc(int *a,int start,int end)
{
	
	int i,j,temp;
	for(i=start;i<end;i++)
	{
		for(j=start;j<end;j++)
		{
			
			if(a[j]>a[j+1])
			{

				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
}


void sortdesc(int *a,int start,int end)
{
	
	int i,j,temp;
	for(i=start;i<end;i++)
	{
		for(j=start;j<end;j++)
		{
			
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
}
