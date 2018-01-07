//to check whether the array is sorted in ascending order
bool issortasc(int arr[], int n)
{
	int i;
	if(n==0 || n==1)
	return true;
	for(i=1;i<n;i++)
	{
		if(arr[i-1]>arr[i])
		  return false;
		  break;
	}
	return true;
}
