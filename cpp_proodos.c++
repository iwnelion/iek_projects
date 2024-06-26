#include <iostream>
#include <string>
using namespace std;

class person{
    private:
        int id;
        string name;
    public:
        void setData(){
            cout<<"Enter ID: ";
            cin>>id;
            cout<<"Enter name: ";
            cin>>name;
        }
        void printData(){
            cout<<"Displaying data: "<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
        }
};
class student: private person{
    private:
        string lesson;
        int fee;
    public:
        void setOtherData(){
            cout<<"Enter lesson: ";
            cin>>lesson;
            cout<<"Enter fee: ";
            cin>>fee;
        }
        void printOtherData(){
            cout<<"Lesson: "<<lesson;
            cout<<endl<<"Fee: "<<fee<<endl;
        }
};
int main(){
    person p1;
    student s1;
    p1.setData();
    s1.setOtherData();
    p1.printData();
    s1.printOtherData();

    return 0;
}