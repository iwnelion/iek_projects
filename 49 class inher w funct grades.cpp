#include <iostream>
using namespace std;

class Student{
		int id;
		char name[20];
	public:
		void getstudent(){
			cout<<"enter student id: ";
			cin>>id;
			cout<<"enter student name: ";
			cin>>name;
		}
		void printstudent(){
			cout<<"student id: "<<id<<endl;
			cout<<"student name: "<<name<<endl;
		}
};
class Grades{
	protected:
		int grade1, grade2, grade3;
	public:
		void getGrades(){
			cout<<"enter course1-grade1: ";
			cin>>grade1;
			cout<<"enter course2-grade2: ";
			cin>>grade2;
			cout<<"enter course3-grade3: ";
			cin>>grade3;
		}
		void printGrades(){
			cout<<"grade for course1: "<<grade1<<endl;
			cout<<"grade for course2: "<<grade2<<endl;
			cout<<"grade for course3: "<<grade3<<endl;
		}
};
class result:public Student, public Grades{
		int total;
		float avg;
	public:
		void show(){
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
