//bubble sort ascending
void abubble(int anb[],int nb)
{
	int n1,n2,element;
	for(n1=0;n1<nb-1;n1++)
	{
		 for(n2=0;n2<nb-n1-1;n2++)
		 {
		 	if(anb[n2]>anb[n2+1])
		 	{
		 		element=anb[n2];
		 		anb[n2]=anb[n2+1];
		 		anb[n2+1]=element;
			 }
       		}
    	}
}