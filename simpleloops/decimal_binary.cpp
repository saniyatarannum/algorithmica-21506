#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,dis;
    string result;
    cout<<"enter the decimal value:";
    cin>>n;
    dis=n;
    while(n!=0)
    {
        rem=n%2;
        result+=to_string(rem);
        n=n/2;

    }
    cout<<"Binary Equivalent to decimal "<<dis<<" is ";
    for(int i=result.length()-1;i>=0;i--)
    {
        cout<<result[i];
    }

}