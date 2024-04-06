#include <iostream>
using namespace std;

struct person{
	char name[50];
	int age;
	int salary;
};

person getData(person);
void displayData(person);
int main(){
	person p;
	person temp;
	temp=getData(p);
	p=temp;
	displayData(p);
	return 0;
}
person getData(person p){
	cout<<"enter full name: ";
	cin.get(p.name,50);
	cout<<"enter age: ";
	cin>>p.age;
	cout<<"enter salary: ";
	cin>>p.salary;
	return p;
}
void displayData(person p){
	cout<<endl<<"displaying information:"<<endl;
	cout<<"name: "<<p.name<<endl;
	cout<<"age: "<<p.age<<endl;
	cout<<"salary: "<<p.salary;
}
