#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int nextPrime(int n){
    int prime=n;
    int count=0;
    while(count!=1)
    {
        prime=prime+1;
        if(isPrime(prime))
        {
            count=1;
        }
    }
    return prime;
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<nextPrime(n);
}