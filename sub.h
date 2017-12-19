int sub(int a[][10],int b[][10],int c[][10],int row,int col)
{
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
    {
        c[i][j]=a[i][j]-b[i][j];
    }
    }
}

