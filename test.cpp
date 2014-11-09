#include<iostream>
#include "oi-lib.h"
using namespace std;
using namespace OIlib;
int main(){
    int a,b;
    double da,db;
    cin>>a>>b>>da>>db;
    swapnum(a,b);
    swapnum(da,db);
    cout<<a<<' '<<b<<' '<<gcd(a,b)<<' '<<da<<' '<<db<<endl;
    return 0;
}

