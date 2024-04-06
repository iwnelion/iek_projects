#include <iostream>
using namespace std;

const int CITY=2;
const int WEEK=7;

int main(){
	int temperature[CITY][WEEK];
	int i,j;
	for(i=0;i<CITY; i++){
		for(j=0;j<WEEK;j++){
			cout<<"CITY:		"<<i+1<<"	Day:		"<<j+1<<endl;
			cin>>temperature[i][j];
		}
	}
	cout<<"Displaying values:"<<endl;
	for(i=0; i<CITY; i++){
		for(j=0; j<WEEK; j++){
			cout<<"City: "<<"  "<<i+1<< "  "<<"Day: "<<"  "<<j+1<<"   "<<"Temperature is:  "<<temperature[i][j]<<endl;
		}
	}
	return 0;
}
