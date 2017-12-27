//lcm of numbers
int lcm(int l[],int lcmno)
{
    int i,ans,j;
    for(i=0;i<lcmno-1;i++)
    {
    	j=i+1;
	ans=(l[i]*l[(j)])/gcd(l[i],l[j]);
	l[j]=ans;
    }
 return ans;
}