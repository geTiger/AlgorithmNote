#include<bits/stdc++.h>


using namespace std;

/*
1.���С��N����������.
2.��1����ɨ������prime[i]-prime[i-1]=2,ans++. 
*/
int main(){
	vector<int> prime;
	int n,isPrime,j,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		j=2;
		isPrime=1;
		while(j<=sqrt(i)&&(isPrime)){
			if(i%j==0){
				isPrime=0;
				break;
			}
			j++;
		}
		if(isPrime)
			prime.push_back(i);
	}
	
	for(int i=1;i<prime.size();i++){
		if((prime[i]-prime[i-1])==2)
			ans++;
	}
	cout<<ans;

} 
