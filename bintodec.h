//To convert the binary number to decimal number
int bintodec(int num)
{
	int binary, decimal=0, base=1,rem;
	while(num>0)
	{
		rem=num%10;
		decimal+=rem*base;
		num/=10;
		base*=2;
	}
	return decimal;
}
