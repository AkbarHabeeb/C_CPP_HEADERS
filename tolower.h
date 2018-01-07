//To convert the uppercase string to lowercase string
std::string tolower(std::string str)
{
	int i;
for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		   str[i]+=32;
	}
   return str;
}
