#include<iostream>
using namespace std;
int main(){
string s;
cout<<"enter a month";
cin>>s;
if(s=="february"){
        cout<<"28 or 29 days";
}
else if(s=="april"||s=="june"||s=="september"||s=="november"){
    cout<<"30 days";
}
else{
    cout<<"31 days";
}



}
