double cos(double n)
{
	n = n * (3.142 / 180.0); //degrees to radian
	return (1- (n*n)/2 + (n*n*n*n)/24 -(n*n*n*n*n*n)/720 );
}