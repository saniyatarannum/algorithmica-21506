#include<iostream>
using namespace std;
int main(){
int w;
cout<<"enter the range of wavelenghth:";
cin>>w;
if(w>=380&&w<450){
    cout<<"violet";
}
 else if(w>=450&&w<495){
    cout<<"blue";
}
 else if(w>=495&&w<570){
    cout<<"green";
}
 else if(w>=570&&w<590){
    cout<<"yellow";
}
 else if(w>=590&&w<620){
    cout<<"orange";
}
else if(w>=620&&w<=750){
    cout<<"red";
}
else{
    cout<<"error";
}
}
