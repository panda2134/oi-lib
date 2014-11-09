#include "oi-lib.h"
bool OIlib::isprime(int n)
{
    if(n==0||n==1)
        return false;
    for(int i=2;i*i<=n;i++)
        if(!(n%i))
            return false;
    return true;
}
bool OIlib::odd(int n)
{
	return n%2; 
}
bool OIlib::even(int n)
{
	return !(n%2); 
}
void OIlib::swapnum(int & a,int & b)
{
	a+=b;
	b=a-b;
	a-=b;
}
void OIlib::swapnum(double & a,double & b)
{
	double c;
	c=a;
	a=b;
	b=c;
}
int OIlib::gcd(int a,int b)
{
	int r;
	if(a<b)
		swapnum(a,b);
	r=b;
	while(r)
	{
		r=a%b;
		a=b;
	    b=r;
	}
	return a;
}
