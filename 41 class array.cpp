//not finished by me
#include <iostream>
#include <string.h>

using namespace std;

class stu{
	char name[20];
	char course[20];
	float fee;
	public:
		stu(char name[20], char course[20], float fee){
			memset(this->name, '\0', 20);
			memset(this->course, '\0', 20);
			
			strncpy(this->name, name, strlen(name));
			strncpy(this->course, course, strlen(course));
			
			
			
			this->fee = fee;
		}
		stu(char name[20], char course[20]) : stu(name, course, 0.0) {}
		void printData(){
			cout<<"name: "<<name<<"   "<<"course: "<<course<<endl;
			//cout<<"name: "<<name<<"   "<<"course: "<<course<<"   "<<"fee: "<<fee<<endl;
		}
};
int main(){
	stu st1("antonis","c++");
	stu st2("antonis","c++",99.99);
	st1.printData();
	st2.printData();
	system("pause>0");
}
