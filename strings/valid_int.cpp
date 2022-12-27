#include<bits/stdc++.h>
using namespace std;
bool isInteger(string s){
    int i;
    for(i=1;i<s.length();i++){
        if(s[0]=='+'||s[0]=='-'){
            return true;
        }
            if(s[i]>='0' && s[i]<='9'){
                return true;
            }
            else if(s[i]>='a'||s[i]<='z'){
                return false;
            }
    }
}
int main(){
    string s;
    cout<<"enter a string:";
    cin>>s;
    if(isInteger(s)){
        cout<<"the string is a valid integer.";
    }
    else{
        cout<<"the string is not a valid integer.";
}
}