#include<bits/stdc++.h>
using namespace std;
void decode(char c){
	int i=c;
	cout<<i<<"\n";
}
void encode(int n){
	char c=char(n);
	cout<<c<<"\n";
}
int main(){
	char c;
	cout<<"enter the character:";
	cin>>c;
	decode(c);
	int n;
	cout<<"enter the integer:";
	cin>>n;
	encode(n);
}