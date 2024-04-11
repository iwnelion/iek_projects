#include <iostream>
using namespace std;

int main(){
	int size;
	cout<<"enter size: ";
	cin>>size;
	//int array[size]
	int* myArray = new int[size];
	for(int i;i<size;i++){
		cout<<"ARRAY["<<i<<"]=";
		cin>>myArray[i];
	}
	for (int i=0;i<size;i++){
		//cout<<myArray[i]<<"	";
		cout<<*(myArray+i)<<"	";
	}
	delete[] myArray;
	myArray=NULL;
	return 0;
}
