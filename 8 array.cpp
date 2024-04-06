#include <iostream>
using namespace std;

int main(){
	int values[5];
	int i;
	//entering the array elements
	cout<<"give me 5 numbers: "<<endl;
	for(i=0;i<5;i++){
		cin>>values[i];
	}
	
	//printing the array elements
	cout<<"the numbers are: "<<endl;
	for(i=0;i<5;i++){
		cout<<values[i]<<endl;
	}
	return 0;
}
