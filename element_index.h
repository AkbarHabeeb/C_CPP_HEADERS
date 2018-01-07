//To find the index of an element in an array
int element_index(int a[], int n, int element)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(element==a[i])
		{
		   return i;
		   break;
	    }
   }
}
