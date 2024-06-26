#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        int id;
        float subject[5];
        string name;
    public:
        void getstu(){
            cout<<"Enter ID: "<<endl;
            cin>>id;
            cout<<"Enter subject: "<<endl;
            for(int i=0;i<5;i++){
                cin>>subject[i];
            }
            cout<<"Enter name: "<<endl;
            cin>>name;
        }
        void result(){
            cout<<"---DISPLAYING RESULT---"<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Subject: "<<endl;
            for(int i=0;i<5;i++){
                cout<<subject[i]<<endl;
            }
            int sum=0;
            for(int i=0;i<5;i++){
                sum+=subject[i];
            }
            cout<<"Sum: "<<sum<<endl;
            float avg=sum/5.0;
            cout<<"Average: "<<avg<<endl;
            cout<<"Name: "<<name<<endl;

            if(avg>=90 && avg<=100){
                cout<<"Aristos"<<endl;
            }
            else if(avg>=80 && avg<=90){
                cout<<"Poli Kalos"<<endl;
            }
            else if(avg>=70 && avg<=80){
                cout<<"Kalos"<<endl;
            }
            else if(avg>=60 && avg<=80){
                cout<<"Metrios"<<endl;
            }
            else if(avg<=60){
                cout<<"Kakos"<<endl;
            }
        }
};
int main(){
    Student s;
    s.getstu();
    s.result();

    return 0;
}