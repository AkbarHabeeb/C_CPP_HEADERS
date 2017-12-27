//To delete a char in string.
std::string chardelete(std::string str,char ch)
{
	int i,j=0;
	int size=0;
	char ch1;
	char str1[10];
	for(i=0;str[i]!='\0';i++)
	{
		size+=1;
	}
	for(i=0;i<size;i++)
	{
		if(str[i]!=ch)
		{
			ch1=str[i];
			str1[j]=ch1;
			j++;
		}
	}
	str1[j]='\0';
	return str1;
}