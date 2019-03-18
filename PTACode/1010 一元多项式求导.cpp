#include<bits/stdc++.h>

using namespace std;

/*
本题需要注意输入情况为0 0的时候仅需输出即可。
另外还有最后无空格。 
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
