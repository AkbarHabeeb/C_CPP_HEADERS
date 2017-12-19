int min(int a[],int n)
{
    int min=a[0];
    int i;
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    return min;
}
double min(double aa[],int n)
{
    double min=aa[0];
    int i;
    for(i=1;i<n;i++)
    {
        if(aa[i]<min)
            min=aa[i];
    }
    return min;
}

