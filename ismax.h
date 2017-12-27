//ismaximum - int 
bool ismax(int a[],int n,int maximum)
{
		int max=a[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		 max=a[i];
	}
	if(max==maximum)
	   return 1;
	else
	   return 0;
}

//ismaximum- double
bool ismax(double aa[],int n,double maximum)
{
    double max=aa[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(max<aa[i])
		 max=aa[i];
	}
	if(max==maximum)
	   return 1;
	else
	   return 0;
}

//ismaximum- float
bool ismax(float aaa[],int n,float maximum2)
{
    float max=aaa[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(max<aaa[i])
		 max=aaa[i];
	}
	if(max==maximum2)
	   return 1;
	else
	   return 0;
}
