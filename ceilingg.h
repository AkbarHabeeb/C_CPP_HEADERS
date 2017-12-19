double ceil(double f)
{
    int v;
    v=f<0?-int(-f)-1:int(f);
    return int(v+1);
}
