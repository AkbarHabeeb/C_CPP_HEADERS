//issparse [matrix]
bool issparse(int row, int col,int ab[][10])
{
	int count=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(ab[i][j]==0)
			 count++;
		}
	}
	return(count>((row*col)/2));
}
