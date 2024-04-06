#include <iostream>
using namespace std;

int main(){
	struct{
		string brand;
		string model;
		int year;
	} myCar1, myCar2;
	
	myCar1.brand="bmw";
	myCar1.model="x5";
	myCar1.year=1999;
	
	myCar2.brand="ford";
	myCar2.model="mustang";
	myCar2.year=1969;
	
	cout<<myCar1.brand<<" "<<myCar1.model<<" "<<myCar1.year<<endl;
	cout<<myCar2.brand<<" "<<myCar2.model<<" "<<myCar2.year<<endl;
	system("pause>0");
}
