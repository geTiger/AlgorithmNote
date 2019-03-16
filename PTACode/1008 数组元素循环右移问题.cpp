#include<bits/stdc++.h>

using namespace std;

/*
一开始没看到不能另开数组，然后开了一个新数组，把移动后的数据加上，运行超时。
但其实这个题你把存新数组那一步直接用来输出数据即可。

两个点需要注意，m的值很可能会大于n所以m对n取余
另外就是结尾没有空格 

*/
int main() {
	int array[100];
	int n, m;
	cin >> n >> m;
	m=m%n;
	for (int i = 0; i<n; i++) {
		cin >> array[i];
	}
	
	for(int i=n-m;i<n;i++)
		cout<<array[i]<<" ";
	for(int i=0;i<n-m-1;i++)
		cout<<array[i]<<" ";
	cout<<array[n-m-1];


	return 0;
}
