#include<bits/stdc++.h>
using namespace std;
bool isCollinear(int x1,int y1,int x2,int y2,int x3,int y3){
    int a;
    a = x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if(a==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<<"enter the values:";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(isCollinear(x1,y1,x2,y2,x3,y3)){
        cout<<"The points are collinear.";
    }
    else{
        cout<<"The points are not collinear.";
    }
}