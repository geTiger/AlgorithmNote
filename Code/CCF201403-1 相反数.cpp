#include<iostream>
#include<cstdio>

using namespace std;
const int N=500;
int num[N];

int main()
{
	int a;//Êı×Ö¸öÊı
	int ans=0; 
	if(scanf("%d",&a)&&a)
	{
		
		for(int i=0;i<a;i++)
		{
			cin>>num[i];	
		}
		for(int j=0;j<a;j++)
		{
			for(int k=j+1;k<a;k++)
			{
				if(num[j]==(-num[k]))
					ans++;
			}
		}
		cout<<ans;	
	} 
	return 0;
} 
