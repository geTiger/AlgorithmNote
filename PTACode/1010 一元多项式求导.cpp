#include<bits/stdc++.h>

using namespace std;

/*
������Ҫע���������Ϊ0 0��ʱ�����������ɡ�
���⻹������޿ո� 
*/
int main(){
	int ratio,index;
	
	scanf("%d %d",&ratio,&index); 
	if(index==0){
		printf("0 0");
		return 0;
	}
	else
		printf("%d %d",ratio*index,index-1);
	
	while(scanf("%d %d",&ratio,&index)!=EOF){
		if(index!=0)
			printf(" %d %d",ratio*index,index-1);
	}
	
	return 0;		
} 
