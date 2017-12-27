//gcd of numbers
int gcd(int lcm1,int lcm2)
{
     	if(lcm1==lcm2)
     	   return lcm1;
     	if(lcm1>lcm2)
     	 return gcd(lcm1-lcm2,lcm2);
     	return gcd(lcm1,lcm2-lcm1);
}