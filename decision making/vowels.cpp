#include<iostream>
using namespace std;
int main(){
string s;
cout<<"enter the letter:";
cin>>s;
if(s=="a"||s=="e"||s=="i"||s=="o"||s=="u"){
    cout<<" the letter is vowel";
}
else if(s=="y"){
    cout<<"the letter is sometimes vowel or sometimes consonent";
}
else
    cout<<"the letter is consonant";
}
