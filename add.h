//add two matrices
void add(int a1[][10],int b1[][10],int c1[][10],int row1,int col1)
{
		for(int i=0;i<row1;i++)
		{
		for(int j=0;j<col1;j++)
		{
			c1[i][j]=a1[i][j]+b1[i][j];
		}
	}
}