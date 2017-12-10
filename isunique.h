int isunique(char c[])
{
	for(int i=0;c[i]!='\0';i++)
	{
		for(int k=i+1;c[k]!='\0';k++)
		{
			if(c[k]==c[i])
				return 0;
		}
	}
	return 1;
}