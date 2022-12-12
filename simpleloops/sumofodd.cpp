#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0,a=1;
    cout<<"enter a number:";
    cin>>n;
    for(i=0;i<n;i++){
        sum=sum+a;
        a=a+2;
    }
    cout<<sum;
}