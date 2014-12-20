bool isprime(int n)
{
    if(n==0||n==1)
        return false;
    for(int i=2;i*i<=n;i++)
        if(!(n%i))
            return false;
    return true;
}
