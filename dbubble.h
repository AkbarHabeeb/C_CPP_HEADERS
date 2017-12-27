//bubble sort descending
void dbubble(int dnb[],int nb1)
{
	int n1,n2,element;
	for(n1=0;n1<nb1-1;n1++)
	{
		 for(n2=0;n2<nb1-n1-1;n2++)
		 {
		 	if(dnb[n2]<dnb[n2+1])
		 	{
		 		element=dnb[n2];
		 		dnb[n2]=dnb[n2+1];
		 		dnb[n2+1]=element;
			 }
       		}
    	}
}