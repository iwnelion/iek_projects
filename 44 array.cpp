#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter array size: "<<endl;
	cin>>n;
	
	int *p=new int[n];
	cout<<"enter the numbers of the array: "<<endl;
	for (int i=0; i<n; i++)
		cin>>p[i];
	
	cout<<"display the numbers of the array: "<<endl;
	for(int i=0; i<n; i++)
		cout<<p[i]<<endl;
	delete p;
	
	system("pause>0");
}
