#include<iostream>

using namespace std;
const int N=13;
char isbn[N];

int main(){
	int sum=0;
	int s;//Ê¶±ğÂë 
	for(int i=0;i<N;i++)
		cin>>isbn[i];
	sum+=(isbn[0]-'0')
	for(int i=2;i<5;i++)
		sum+=(isbn[i]-'0')*i;
	for(int i=6;i<11;i++)
		sum+=(isbn[i]-'0')*(i-1);
	
	s=sum%11;
	if(s==10){
	
		if(isbn[12]=='X')
			cout<<"Right";
		else{
			for(int i=0;i<N-1;i++)
				cout<<isbn[i];
			cout<<"X";
		}
	}
	else{
		if(s==(isbn[12]-'0'))
			cout<<"Right";
		else{
			for(int i=0;i<N-1;i++)
				cout<<isbn[i];
			cout<<s;
		}
			
	}
	return 0;
} 
