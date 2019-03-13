#include<iostream>
#include<string>

using namespace std;

int main(){
	string num;
	getline(cin,num);
	int n=num.size(),temp,sum=0;
	

	for(int i=0;i<n;i++){
		temp=num[i]-'0';
		sum+=temp;
	}
	
	int digit[3],top=0;
	int yushu;
	while(yushu!=-1){
		yushu=sum%10;
		digit[top++]=yushu;
		sum=sum/10;
		if(sum==0)
			yushu=-1;
	}
	for(int k=top-1;k>0;k--){
		switch(digit[k]){
			case 0:cout<<"ling ";break;
			case 1:cout<<"yi ";break;
			case 2:cout<<"er ";break;
			case 3:cout<<"san ";break;
			case 4:cout<<"si ";break;
			case 5:cout<<"wu ";break;
			case 6:cout<<"liu ";break;
			case 7:cout<<"qi ";break;
			case 8:cout<<"ba ";break;
			case 9:cout<<"jiu ";break;
		}
	}
	switch(digit[0]){
		case 0:cout<<"ling";break;
		case 1:cout<<"yi";break;
		case 2:cout<<"er";break;
		case 3:cout<<"san";break;
		case 4:cout<<"si";break;
		case 5:cout<<"wu";break;
		case 6:cout<<"liu";break;
		case 7:cout<<"qi";break;
		case 8:cout<<"ba";break;
		case 9:cout<<"jiu";break;
	}
	return 0;
} 
