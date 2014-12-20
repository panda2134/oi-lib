bool isprime(int n)
{
    if(n==0||n==1)
        return false;
    for(int i=2;i*i<=n;i++)
        if(!(n%i))
            return false;
    return true;
}
bool odd(int n)
{
	return n%2; 
}
bool even(int n)
{
	return !(n%2); 
} 
