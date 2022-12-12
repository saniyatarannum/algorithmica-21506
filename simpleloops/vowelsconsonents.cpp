#include<iostream>
using namespace std;
int main(){
   string s;
   int vowels=0,consonants=0;
    cout<<"enter a string:";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            vowels++;
        }
        else{
            consonants++;
        } 
    }
    cout<<"vowels:"<<vowels<<"\n"<<"consonants:"<<consonants;
    }