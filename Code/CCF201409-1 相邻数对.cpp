#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int map[100][100]={0};//��ͼ,��ÿһС���鿴�����Ϊ1�ĵ�λ���������10000����λ 

int main(){
	int n,x1,y1,x2,y2,ans=0;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>x1>>y1>>x2>>y2;
		for(int j=x1;j<x2;j++){
			for(int k=y1;k<y2;k++){
				map[j][k]=1;
			}
		}
	}
	
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			if(map[i][j]==1)
				ans++;
		}
	}
	
	cout<<ans;
	return 0;
} 
