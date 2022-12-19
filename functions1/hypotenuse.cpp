#include<bits/stdc++.h>
using namespace std;
int gethypotenuse(int a,int b){
    return sqrt((a*a)+(b*b));
}
int main(){
    int a,b;
    cout<<"enter a number:";
    cin>>a>>b;
    cout<<gethypotenuse(a,b);
}