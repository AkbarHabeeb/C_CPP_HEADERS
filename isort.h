void isort(int a[],int n,int desc=0)
{
	if(!desc)
	{
		int key,l,j;
		for(int i=1;i<n;i++)
		{
			key=a[i];
			j=i;
			while(j>=0 && a[j]>key)
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1] = key;
		}
		return;
	}
	else
	{
		int key,l,j;
		for(int i=1;i<n;i++)
		{
			key=a[i];
			j=i;
			while(j>=0 && a[j]<key)
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1] = key;
		}
		return;
	}
	
}


void isort(char a[],int n,int desc=0)
{
	if(!desc)
	{
		char key,l,j;
		for(int i=1;i<n;i++)
		{
			key=a[i];
			j=i-1;
			while(j>=0 && a[j]>key)
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1] = key;
		}
		return;
	}
	else
	{
		char key,l,j;
		for(int i=1;i<n;i++)
		{
			key=a[i];
			j=i-1;
			while(j>=0 && a[j]<key)
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1] = key;
		}
		return;
	}
}