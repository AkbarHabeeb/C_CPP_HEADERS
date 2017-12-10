int log(int n,unsigned int r)
{
   return (n > r-1)? 1 + log(n/r, r): 0;
}//always need to secify the base also