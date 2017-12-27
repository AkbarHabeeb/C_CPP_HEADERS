//uppercase_count
int uppercase(char newword[])
{
	int i,count=0;
	while(newword[i]!='\0')
	{
	if(newword[i]>=65 && newword[i]<=90)
	     count++;
	     i++;
	 }
  return count;
}
