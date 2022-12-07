#include<iostream>
using namespace std;
int main(){
float i,y,m;
cout<<"enter the measurements in feet:";
cin>>i>>y>>m;
float inches =i*12;
float yards=y/3;
float miles=m/5280;
cout<<"feet to inches:"<<inches<<"\n";
cout<<"feet to yards:"<<yards<<"\n";
cout<<"feet to miles:"<<miles<<"\n";
return 0;
}
