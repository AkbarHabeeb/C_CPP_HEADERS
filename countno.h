int countno(char c[])
{
	int countt=0;
	for(int i=0;c[i]!='\0';i++)
	{
		if(c[i]>='0' && c[i]<='9')
			countt++;
	}
	return countt;
}