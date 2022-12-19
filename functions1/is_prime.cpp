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
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(isPrime(n)){
        cout<<"number is a prime number.";
    }
    else{
        cout<<"number is not a prime number.";
    }
}