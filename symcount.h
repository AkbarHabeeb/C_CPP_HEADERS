int symcount(char a[],int n)
{int count=0,flag=0;
for(int i=0;i<n;i++)
{
	if((a[i]>='A' && a[i]<='Z')||(a[i]>='a' && a[i] <='z'))
	flag=0;
	else if(a[i]>='0' && a[i]<='9')
	flag=0;
	else
	count++;
}
return count;
}
