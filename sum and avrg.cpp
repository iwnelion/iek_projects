#include <iostream>
using namespace std;
int main(){
  int marks[10],i,n,sum=0,average;
  cout<<"Enter numbers of elements:";
  cin>>n;
  for(i=0; i<10; i++){
  	cout<<"Enter num:"<<i+1<<endl;
  	cin>>marks[i];
  	sum +=marks[i];
  	cout<<"Sum is:"<<sum<<endl;
  }	
  average=sum/n;
  cout<<"Average is:"<<average;
	
	
	
	
	return 0;
}
