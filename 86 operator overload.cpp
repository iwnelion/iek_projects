#include <iostream>
using namespace std;

class stu{
		int id;
		char name[20];
	public:
		friend void operator >>(istream &in, stu &s){
			cout<<"enter id: ";
			in>>s.id;					//in instead of cin
			cout<<"enter name: ";
			in>>s.name;					//in instead of cin
		}
		friend void operator <<(ostream &out, stu &s){
			cout<<"id: "<<s.id<<endl;
			cout<<"name: "<<s.name<<endl;
		}
};
int main(){
	stu s;
	cin>>s;
	cout<<s;
	
	system("pause>0");
}
