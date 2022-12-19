#include<bits/stdc++.h>
using namespace std;
bool isPerfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(isPerfect(n)){
        cout<<"The number "<<n<<" is a perfect number."<<"\n";
    }
    else{
        cout<<"The number "<<n<<" is not a perfect number."<<"\n";
    }
    cout<<"The perfect numbers between 1 and 10000 are:"<<"\n";
    for(int i=1;i<=10000;i++){
        if(isPerfect(i)){
            cout<<i<<" ";
        }
    }
}