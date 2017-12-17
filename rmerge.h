void join(int *a, int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
	// Merge the two parts into temp[].
	while (i <= mid && j <= high)
	{
		if (a[i] > a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
 
	// Insert all the remaining values from i to mid into temp[].
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 
	// Insert all the remaining values from j to high into temp[].
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
 
 
	// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
 
// A function to split array into two parts.
void rmerge(int *a, int low, int high)
{
	int mid;
	//std::cout<<"inside rmerge";
	if (low < high)
	{
		mid=(low+high)/2;
		// Split the data into two half.
		rmerge(a, low, mid);
		rmerge(a, mid+1, high);
 
		// Merge them to get sorted output.
		join(a, low, high, mid);
	}
}

