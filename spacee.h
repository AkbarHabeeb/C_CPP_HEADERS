int space(char s[]){
    int i,count=0;
for(i=0;s[i]!='\0';i++)
       {
                if(s[i]==' ')
                {
                        count++;
                }
       }
       return count;
}
