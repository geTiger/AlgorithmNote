#include<bits/stdc++.h>

using namespace std;

struct student{
	string name,num;
	int sorce;
};

int main(){
	student stu[1000];
	int n,maxID=0,minID=0,minSorce,maxSorce;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>stu[i].name>>stu[i].num>>stu[i].sorce;
	}
	minSorce=stu[0].sorce;
	maxSorce=stu[0].sorce;
	for(int i=0;i<n;i++){
		if(stu[i].sorce<minSorce){
			minSorce=stu[i].sorce;
			minID=i;
		}
		
		if(stu[i].sorce>maxSorce){
			maxSorce=stu[i].sorce;
			maxID=i;
		}		
	}
	cout<<stu[maxID].name<<" "<<stu[maxID].num<<endl;
	cout<<stu[minID].name<<" "<<stu[minID].num;
	
	
	return 0;
} 
