#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
using namespace std;
/*
vector 二维数组
把输入的字符串从前往后扫每个单词都放在一个一维vector中
倒叙输出，注意最后空格 
*/
int main(){
	vector<vector<char> > newStr;
	string str;
	int length,n=0;
	
	getline(cin,str);
	newStr.push_back(vector<char>());
	length=str.size();
	
	for(int i=0;i<length;i++){
		if(str[i]==' '){
			newStr.push_back(vector<char>());
			n++;
			continue;
		}
		newStr[n].push_back(str[i]);		
	}
	
	for(int i=n;i>0;i--){
		for(int j=0;j<newStr[i].size();j++){
			cout<<newStr[i][j];
		}
		cout<<" ";
	}
	for(int j=0;j<newStr[0].size();j++){
		cout<<newStr[0][j];
	}
	
	return 0;	
} 
