int count(char a[],char c)
{
	int countt=0;
	//printf("%c",c);
	for(int i=0;a[i]!='\0';i++)
	{
		
		if(a[i]==c)
			countt++;
	}
	return countt;
}
//while sending enclose char c in single quotes