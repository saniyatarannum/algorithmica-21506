#include<iostream>
using namespace std;
int main(){
float tax,tip,cost,total;
cout<<"enter the cost of meal:";
cin>>cost;
tax=cost*0.18;
tip=cost*0.5;
total=tax+tip+cost;
cout<<"total bill is:"<<total;
return 0;
}
