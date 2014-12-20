#ifdef DEBUG
#include<iostream>
#endif
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
void swapint(int & a,int & b)
{
	a+=b;
	b=a-b;
	a-=b;
}
int gcd(int a,int b)
{
	int r;
	if(a<b)
		swapint(a,b);
	r=b;
	while(r)
	{
		r=a%b;
		a=b;
	    b=r;
	}
	return a;
}
