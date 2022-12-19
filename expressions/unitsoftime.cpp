#include<iostream>
using namespace std;
int main(){
    int mm,d,hh,n,ss,day,h,m;
    cout<<"enter the seconds:";
    cin>>n;
    m=60;
    h=60*m;
    d=24*h;
    d=n/day;
    n=n%day;
    hh=n/h;
    n=n%h;
    mm=n/m;
    n=n%m;
    ss=n;
    printf("%d:%02d:%02d:%02d",d,hh,mm,ss);
}