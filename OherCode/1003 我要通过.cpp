#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string str;
	cin>>n;
	getchar();
	
	for(int i=0;i<n;i++){
		int left=0,mid=0,right=0,flag=1,p=0,t=0;//flag的值1表示左边的A，2表示中间的A，3表示右边的A 
		bool hasNo=false;
		getline(cin,str);
		int length=str.length();
		for(int j=0;j<length;j++){
			if(str[j]!='P'&&str[j]=='A'&& str[j]=='T'){
				hasNo=true;
				cout<<"NO"<<endl;
				break;
			}//end if
			if(str[j]=='P'||str[j]!='A'|| str[j]!='T'){
				switch(str[j]){
					case 'P':{flag=2;p++;break;}
					case 'T':{flag=3;t++;break;}
					case 'A':{
						switch(flag){
							case 1:left++;break;
							case 2:mid++;break;
							case 3:right++;break;
						}//end switch in
					};break;
				}//end stitch out
			}
				
		}//end for in
		if(mid&&flag==3&&left*mid==right&&p==1&&t==1)
			cout<<"YES"<<endl;
		else{
			if(hasNo==false)
				cout<<"NO"<<endl;
		}	
	}//end for out

	return 0;
} 
