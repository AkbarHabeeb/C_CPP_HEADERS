int asc(int a[],int n)
{
    int n1,n2,tem;
    for(n1=0;n1<n-1;n1++)
    {
        for(n2=0;n2<n-1;n2++)
        {
            if(a[n2]>a[n2+1])
            {
                tem=a[n2];
                a[n2]=a[n2+1];
                a[n2+1]=tem;
            }
        }
    }
}
int des(int a[],int n)
{
    int n1,n2,tem;
    for(n1=0;n1<n-1;n1++)
    {
        for(n2=0;n2<n-1;n2++)
        {
            if(a[n2]<a[n2+1])
            {
                tem=a[n2];
                a[n2]=a[n2+1];
                a[n2+1]=tem;
            }
        }
    }
}
