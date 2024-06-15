#include <iostream>
#include <math.h>
using namespace std;
//inheritance

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
			cout<<endl;
		}
		void printstu(){
			cout<<"---PRINTING DATA---"<<endl;
			cout<<"stuid: "<<id<<endl;
			cout<<"student name: "<<name;
		}
};
class details:public Student{
		float height, weight;
	public:
		void detailsData(){
			getstu();
			cout<<"enter height: ";
			cin>>height;
			cout<<"enter weight: ";
			cin>>weight;
			cout<<endl;
			
		}
		void printDetailsData(){
			printstu();
			cout<<endl;
			cout<<"height: "<<height<<endl;
			cout<<"weight: "<<weight<<endl;
		}
		void bmi(){
			float b=(weight/pow(height,2));
			cout<<"bmi: "<<b<<endl;
		}
};
int main(){
	details d;
//	d.getstu();
	d.detailsData();
//	d.printstu();
	d.printDetailsData();
	d.bmi();
	
	system("pause>0");
}
