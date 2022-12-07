#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
float vi,vf,a,d;
cout<<"enter the initial speed , acceleration and distance:";
cin>>vi>>a>>d;
vf=sqrt((vi*vi)+2*a*d);
cout<<"the final speed is:"<<vf;
return 0;

}
