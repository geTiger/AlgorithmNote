#include<bits/stdc++.h>

using namespace std;

/*
һ��ʼû�������������飬Ȼ����һ�������飬���ƶ�������ݼ��ϣ����г�ʱ��
����ʵ�������Ѵ���������һ��ֱ������������ݼ��ɡ�

��������Ҫע�⣬m��ֵ�ܿ��ܻ����n����m��nȡ��
������ǽ�βû�пո� 

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
