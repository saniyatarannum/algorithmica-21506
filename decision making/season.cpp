#include<iostream>
using namespace std;
int main(){
string m;
int d;
cout<<"enter the month and date:";
cin>>m>>d;
if(m=="january" || m=="february"){
    cout<<"spring";
}
else if(m=="april"||m=="may"){
    cout<<"summer";
}
else if(m=="july"||m=="august"){
    cout<<"fall";
}
else if(m=="october" || m=="november"){
    cout<<"winter";
}
else if(m=="december"){
    if(d>=21){
        cout<<"spring";
    }
    else{
        cout<<"winter";
    }
}
else if(m=="march"){
    if(d<=20){
        cout<<"spring";
    }
    else{
        cout<<"summer";
    }
}
else if(m=="june"){
    if(d<=21){
        cout<<"summer";
    }
    else{
        cout<<"fall";
    }
}
else if(m=="september"){
    if(d>=22){
        cout<<"winter";
    }
    else{
        cout<<"fall";
    }
}
else{
    cout<<"input is not valid";
}
}
