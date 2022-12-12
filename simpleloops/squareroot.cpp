#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,guess,avg;
    cout<<"enter the number:";
    cin>>x;
    guess=x/2;
    while(abs(guess*guess-x)>=pow(10,-3)){
        guess=((guess+(x/guess))/2);
    }
    cout<<guess;
}