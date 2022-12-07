#include<iostream>
using namespace std;
int main(){
int r;
cout<<"enter the radius for circle:";
cin>>r;
cout<<"enter the radius for sphere:";
cin>>r;
float area =3.14*r*r;
float vol=(4*3.14*r*r*r)/3;
cout<<"area of circle is :"<< area<<"\n";
cout<<"volume of spehere is:"<<vol;
return 0;
 }
