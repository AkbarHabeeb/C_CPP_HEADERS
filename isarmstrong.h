bool IsArmstrong(int n)
{
    int digit,sum;
    int num=n;
    while(n!=0)
    {
        digit=n%10;
        sum+=digit*digit*digit;
        n/=10;
    }
    if(sum==num)
        return 1;
    else
        return 0;

}
