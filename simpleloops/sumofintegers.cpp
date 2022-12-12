#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"enter the integer:";
    cin>>n;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
cout<<"sum is :"<<sum;
}