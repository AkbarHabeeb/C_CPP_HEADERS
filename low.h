int lower(char s[])
{
    int i,count=0;
for(i=0;i<s[i]!='\0';i++)
       {
                if(s[i]>='a'&&s[i]<='z')
                {
                        count++;
                }
       }
       return count;

}
