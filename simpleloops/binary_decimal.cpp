#include<iostream>
using namespace std;
int main()
{
    long bin,dis,dec=0,base=1,rem;
    cout<<"enter binary value:";
    cin>>bin;
    dis=bin;
    while(bin!=0)
    {
    rem=bin%10;
    dec=dec+(rem*base);
    base=base*2;
    bin=bin/10;
    }
    cout<<"Decimal equivalent for binary "<<dis<<" is "<<dec;
    
}