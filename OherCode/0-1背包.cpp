#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;//��Ʒ�����ͱ�������
	cin>>n>>m;
	vector<int> w(n),v(n),dp(m);//vector�Զ���ʼ������ΪmֵȫΪ0������,�ʲ���Ҫ���ֶ�����߽�ֵ�� 
	for(int i=0;i<n;i++){
		cin>>w[i];
	}
	for(int i=0;i<n;i++)
		cin>>v[i];
	
	for(int i=1;i<=n;i++){
		for(int j=m;j>=w[i];j--){
			dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
		}
	}
	
	int max=0;
	for(int i=0;i<=m;i++){
		if(dp[i]>max)
			max=dp[i];
	}
	cout<<max;
	return 0;
}

/*
input:

5 8
3 5 1 2 2
4 5 2 1 3

output

10


*/
