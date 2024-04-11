//DOESN'T WORK
#include <iostream>
using namespace std;

int main(){
	int nc, nr, r, c;
	cout<<"enter number of rows: ";
	cin>>nr;
	cout<<"enter number of columns: ";
	cin>>nc;
	
	//create memory for the rows
	int **p=new int* [nr];
	//create memory allocation for nc
	for(r=0;r<nr;r++){
		p[r]=new int[nc];
	}
	cout<<"enter the values of rows and columns: "<<endl;
	for(r=0;r<nr;r++){
		for(r=0;r<nc;r++)
			cin>>p[r][c];
	}
	cout<<"the values are: "<<endl;
	for(r=0;r<nr;r++){
		for(c=0;c<nc;c++){
			cout<<p[r][c]<<endl;
		}
	for(r=0;r<nr;r++){
		delete[] p[r];
		{delete[] p;
		p=NULL;}
	}
	}
	//system("pause<0");
	return 0;
}
