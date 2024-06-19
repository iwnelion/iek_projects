#include <iostream>
#include <string>
using namespace std;

class Hospital{
private:
    string Name;
    string Area;
    int Departments;
    int Docs;
public:
    Hospital(string name, string area, int departments, int docs){
        setName(name);
        setArea(area);
        setDepartments(departments);
        setDocs(docs);
    }
    void setName(string name){
        Name=name;
    }
    string getName(){
        return Name;
    }
    void setArea(string area){
        Area=area;
    }
    string getArea(){
        return Area;
    }
    void setDepartments(int departments){
        Departments=departments;
    }
    int getDepartments(){
        return Departments;
    }
    void setDocs(int docs){
        Docs=docs;
    }
    int getDocs(){
        return Docs;
    }
    void printData(){
        cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
        cout<<"---Displaying hospital data---"<<endl;
        cout<<"Hospital name: "<<Name<<endl;
        cout<<"Hospital area: "<<Area<<endl;
        cout<<"Number of departments: "<<Departments<<endl;
        cout<<"Number of doctors: "<<Docs<<endl;
    }
    ~Hospital(){
        cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
        cout<<"---Destructor is executed---"<<endl;
    }
};

int main(){
    Hospital h1("Attikon University General Hospital","Chaidari",20,300);
    h1.printData();

    return 0;
}
