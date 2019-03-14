#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,a[100],map[10000]={0},temp;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	vector<int> ans;
	
	for(int i=0;i<n;i++){
		temp=a[i];
		while(temp!=1){
			if(temp%2==0){
				temp=temp/2;
				map[temp]=1;
			}
			else{
				temp=(3*temp+1)/2;
				map[temp]=1;
			}
		}//end while
	}//end for
	
	for(int i=0;i<n;i++){
		if(map[a[i]]==0)
			ans.push_back(a[i]);
		
	}
	sort(ans.begin(),ans.end());
	for(int i=ans.size()-1;i>0;i--)
		cout<<ans[i]<<" ";
	cout<<ans[0];
	
	return 0;
} 
