std::string replace(char s[],char c,char r)
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]==c)
		{
			s[i]=r;
		}
		i++;
	}
	return  std::string(s);
}
