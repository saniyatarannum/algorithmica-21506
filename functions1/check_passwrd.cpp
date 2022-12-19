#include<bits/stdc++.h>
using namespace std;
bool checkPassword(string pw){
    int upper=0,lower=0,num=0;
    if(pw.length()>=8){
        for(int i=0;i<pw.length();i++){
            if(pw[i]>='A' && pw[i]<='Z'){
                upper+=1;
            }
            else if(pw[i]>='a' && pw[i]<='z'){
                lower+=1;
            }
            else if(pw[i]>='0' && pw[i]<='9'){
                num+=1;
            }
        }
        if(upper>=1 && lower>=1 && num>=1){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
int main(){
    string pw;
    cout<<"enter the password:";
    cin>>pw;
    if(checkPassword(pw)){
        cout<<"password is good.";
    }
    else{
        cout<<"password is not good.";
    }
}