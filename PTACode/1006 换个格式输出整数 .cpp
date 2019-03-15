#include<bits/stdc++.h>

using namespace std;

int main(){
	int num,B=0,S=0,n;
	cin>>num;
	if(num>=100){
		n=num%10;
		num/=10;
		S=num%10;
		num/=10;
		B=num%10;
	}else if(num<100&&num>=10){
		n=num%10;
		num/=10;
		S=num;	
	}else if(num<10){
		n=num;
	}
	
	for(int i=0;i<B;i++)
		cout<<"B";
	for(int i=0;i<S;i++)
		cout<<"S";
	for(int i=1;i<=n;i++)
		cout<<i;
} 
