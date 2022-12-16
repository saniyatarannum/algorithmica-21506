#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    cout<<" ";
    for(k=1;k<=10;k++){
        cout<<k<<"  ";
    }
    cout<<"\n";
    for(i=1;i<=10;i++){
        cout<<i<<"  ";
        for(j=1;j<=10;j++){
            cout<<i*j<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}