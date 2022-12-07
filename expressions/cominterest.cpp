#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    float dep,amt,interest,i;
    cout<<"enter the deposit  number:";
    cin>>dep;
    for(i=1;i<=3;i++){
        interest =dep*0.04;
         amt=dep+interest;
         cout<<"compound interest is :"<<amt<<"\n";
         dep=amt;
            }
    
    return 0;
}
