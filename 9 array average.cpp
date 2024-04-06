#include <iostream>
using namespace std;

int main(){
	int marks[10], i, n, sum=0, average;
	cout<<"emter a number of elements: ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"enter numbers: "<<i+1<<endl;
		cin>>marks[i];
		sum+=marks[i];
		cout<<"sum="<<sum<<endl;
	}
	average=sum/n;
	cout<<"average = "<<average;
	return 0;
}
