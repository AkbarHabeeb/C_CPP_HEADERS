void toupper(char c[])
{
	for(int i=0;c[i]!='\0';i++)
	{
		if(c[i]>='a' && c[i]<='z')
			c[i]-=32;
	}
	return;
}