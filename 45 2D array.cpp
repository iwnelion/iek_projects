#include <iostream>
using namespace std;

int main(){
	int nc, nr, r, c;
	cout<<"enter number of rows: ";
	cin>>nr;
	cout<<"enter number of columns: ";
	cin>>nc;
	
	//create memory for the rows
	int **p=new* [nr];
	//create memory allocation for nc
	for(r=0;r<nr;r++){
		p[r]=new int[nc];
	}
	cout<<"enter the values of rows and columns: "<<endl;
	for(r=0;r<nr;r++){
		for(r=0;r<nc;r++){
			
		}
	}
}
