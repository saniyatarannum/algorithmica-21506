#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter the string:";
    cin>>str;
    if(str.length()==6){
        if((str[0]>='A'&& str[0]<='Z')&&(str[1]>='A'&& str[1]<='Z')&&(str[2]>='A'&& str[2]<='Z')&&(str[3]>=0)&&(str[4]>=0)&&(str[5]>=0)){
            cout<<"older license plate"<<"\n"<<"valid";
    }
    else{
        cout<<"not valid";
    }
    }
    else if(str.length()==7){
            if((str[0]>=0)&&(str[1]>=0)&&(str[2]>=0)&&(str[3]>=0)&&(str[4]>='A'&& str[4]<='Z')&&(str[5]>='A'&& str[5]<='Z')&&(str[6]>='A'&& str[6]<='Z')){
            cout<<"newer license plate"<<"\n"<<"valid";
    }
    else{
        cout<<"not valid";
    }
    }
    else{
        cout<<"invalid";
    }

}