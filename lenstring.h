//length of a string 
int lenstring(char string[])
{
	int i;
	int count=0;
	while(string[i]!=0)
	{
		count++;
		i++;
	}
	return count;
}