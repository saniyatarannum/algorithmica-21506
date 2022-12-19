#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"enter a number:";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(j=n;j>i;j--){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    for(i=0;i<n;i++){
        for(j=1;j<n-i;j++){
            cout<<" ";
        }
        for(k=0;k<=i;k++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    return 0;
}