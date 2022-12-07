#include<iostream>
using namespace std;
int main(){
 int x,y,z;
 cout<<"enter the sides of the triangle:";
 cin>>x>>y>>z;
 if(x==y && y==z && z==x){
    cout<<"the triangle is equilateral";
 }
 else if(x==y || x==z || y==z){
    cout<<" triangle is isosceles";

 }
 else
    cout<<" triangle is scalene";
}
