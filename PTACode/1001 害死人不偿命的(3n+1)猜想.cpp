#include<iostream>

using namespace std;

int main(){
  int num,step=0;
  cin>>num;
  while(num!=1){
    if(num%2==0){
      num/=2;
      step++;
    }
    else{
      num=(3*num+1)/2;
      step++;
    }
  }
  cout<<step; 
  return 0;
  
}
