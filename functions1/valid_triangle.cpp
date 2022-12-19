#include<iostream>
using namespace std;
int isValidTriangle(int a,int b,int c){
    if((a>=b+c)||(c>=a+b)||(b>=c+a)){
        return false;
    }
    else{
        if((a<=0)||(b<=0)||(c<=0)){
            return false;
           
        }
         else{
                return true;
            }
    }
}
 int main(){
    int a,b,c;
    cout<<"enter the sides of the triangle:";
    cin>>a>>b>>c;
    cout<<isValidTriangle(a,b,c);
 }