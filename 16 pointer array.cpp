#include <iostream>
using namespace std;

int main(){
	int data[5];
	cout<<"enter elements: "<<endl;
	for(int i=0;i<5;i++)
		cin>>data[i];
		
	cout<<"you entered: "<<endl;
	for(int i=0;i<5;i++)
		cout<<*(data+i)<<endl;
	return 0;
}
