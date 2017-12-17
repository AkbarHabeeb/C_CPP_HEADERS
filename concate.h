std::string concate(char a[],char b[])
{
int i,j;
	char c[30];
	for(i=0;a[i]!='\0';i++)
	 c[i]=a[i];
	for(j=0;b[j]!='\0';j++)
	 c[i+j]=b[j];
	 
	 c[i+j]='\0';
	 return  std::string(c);
}
