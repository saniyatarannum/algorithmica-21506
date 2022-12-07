#include<iostream>
using namespace std;
int main(){
string s;
int n;
cout<<"enter the position";
cin>>s>>n;
if((s=="a"||s=="c"||s=="e"||s=="g")&&((n<9)%2==0)){
   cout<<"the square is white";
}
else if((s=="b"||s=="d"||s=="f"||s=="h")&&((n<9)%2==1)){
    cout<<"the sqaure is white";
}
else if((s=="a"||s=="c"||s=="e"||s=="g")&&((n<9)%2==1)){
    cout<<"the square is black";
}
else if((s=="b"||s=="d"||s=="f"||s=="h")&&((n<9)%2==0)){
     cout<<"the square is black";
}
else{
    cout<<"invalid";
}

}
