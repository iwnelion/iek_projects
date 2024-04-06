#include <iostream>
using namespace std;

struct person{					//person: the name of the struct
		char name[50];
		int age;
		float salary;
	};

void displayData(person);		//function declaration

int main(){
person p;
cout<<"enter full name: ";
cin.get(p.name,50);
cout<<"enter age: ";
cin>>p.age;
cout<<"enter salary: ";
cin>>p.salary;
//function call with struct variable as an argument
displayData(p);
system("pause");
}
void displayData(person p){
cout<<endl<<"displaying information: "<<endl;
cout<<"name: "<<p.name<<endl;
cout<<"age: "<<p.age<<endl;
cout<<"salary: "<<p.salary<<endl;
}
