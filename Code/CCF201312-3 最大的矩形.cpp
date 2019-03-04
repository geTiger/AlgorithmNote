#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,area=0,temp,a;
	cin>>n;
	vector<int> num;
	
	
	for(int i=0;i<n;i++){
		cin>>temp;
		num.push_back(temp);
	}
	
	for(int i=0;i<n;i++){
		int h=num[i];
		for(int j=i;j<n;j++){
			if(num[j]<h)
				h=num[j];
			a=(j-i+1)*h;
			if(a>area)
				area=a;
		}	
	}
	cout<<area;
	return 0;
} 
