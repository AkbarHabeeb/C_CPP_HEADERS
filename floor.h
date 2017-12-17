double floor(double v)
{
	return v<0 ? -int(-v)-1 : int(v);
}
