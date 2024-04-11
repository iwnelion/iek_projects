#include <iostream>
using namespace std;

class Student{
	private:
		int id;
		char name[20];
	public:
		void getstu(){
			cout<<"enter stuid: ";
			cin>>id;
			cout<<"enter student name: ";
			cin>>name;
		}
		void printstudent(){
			cout<<"student id: "<<id<<endl;
			cout<<"student name: "<<name<<endl;
		}
};

class Details:public Student{
		float height, weight;
	public:
		void DetailsData(){
			getstu();
			cout<<"enter height: ";
			cin>>height;
			cout<<"enter weight: ";
			cin>>weight;
			cout<<endl;
		}
		void PrintDetailsData(){
			printstudent();
			cout<<"the height: "<<height<<endl;
			cout<<"the weight: "<<weight<<endl;
		}
};

int main(){
	Details d;
	
	d.DetailsData();
	
	d.PrintDetailsData();
	
	system("pause>0");
}
