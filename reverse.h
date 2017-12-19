std::string rev(char a[])
{
    char reverse[50];
    int i=-1;
    int j=0;
    while(a[++i]!='\0');
    while(i>=0)
        reverse[j++]=a[--i];
    reverse[j]='\0';
    return reverse;
}
