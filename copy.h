void copy(int a[],int b[],int n)
{
	for(int i=0;i<n;i++)
	{
		b[i]=a[i];
	}
}

void copy(float a[],float b[],int n)
{
	for(int i=0;i<n;i++)
	{
		b[i]=a[i];
	}
}

void copy(double a[],double b[],int n)
{
	for(int i=0;i<n;i++)
	{
		b[i]=a[i];
	}
}

void copy(char a[],char b[],int n)
{
	for(int i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[n]='\0';
}
