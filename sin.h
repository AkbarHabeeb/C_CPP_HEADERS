double sin(double n)
{
	n = n * (3.142 / 180.0); //degrees to radian
	return (n- (n*n*n)/6 + (n*n*n*n*n)/120 -(n*n*n*n*n*n*n)/720*7 );
}
