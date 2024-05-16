#include <iostream>
using namespace std;

class Student{
		int id;
		char name[20];
	public:
		void getstudent(){
			cout<<"enter stuid: ";
			cin>>id;
			cout<<endl<<"enter name: ";
			cin>>name;
		}
		void printstudent(){
			cout<<"id: "<<id<<endl;
			cout<<"name: "<<name<<endl;
		}
};
class grades:public Student{
	protected:
		int grade1, grade2, grade3;
	public:
		void getGrades(){
			cout<<endl;
			cout<<"enter course1-grade1: ";
			cin>>grade1;
			cout<<"enter course2-grade2: ";
			cin>>grade2;
			cout<<"enter course3-grade3: ";
			cin>>grade3;
			cout<<endl;
		}
		void printGrades(){
			cout<<"course1-grade1: "<<grade1<<endl;
			cout<<"course2-grade2: "<<grade2<<endl;
			cout<<"course3-grade3: "<<grade3<<endl;
		}
};
class result:public grades{
		int total;
		float avg;
	public:
		int show(){
			total=grade1+grade2+grade3;
			avg=total/3.0;
			cout<<"total: "<<total<<endl;
			cout<<"avg: "<<avg<<endl;
		}
};
int main(){
	result r;
	r.getstudent();
	r.getGrades();
	r.printGrades();
	r.show();
	
	system("pause>0");
}







