#include <iostream>
using namespace std;

	struct person{
		char name[50];
		int age;
		float salary;
	};
int main(){
	person p1;
	cout<<"enter full name: ";
	cin.get(p1.name, 50);
	cout<<"enter age: ";
	cin>>p1.age;
	cout<<"enter salary: ";
	cin>>p1.salary;
	
	cout<<"displaying information: "<<endl;
	cout<<"----------------------"<<endl;
	
	cout<<"name: "<<p1.name<<endl;
	cout<<"age: "<<p1.age<<endl;
	cout<<"salary: "<<p1.salary;	
	return 0;
}
