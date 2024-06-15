#include <iostream>
using namespace std;
//hybrid inheritance: multiple inheritance
//hybrid means: hierarchical and multiple

class student{
		int idno;
		char name[20];
	public:
		void getstu(){
			cout<<"enter st.id: ";
			cin>>idno;
			cout<<"enter st.name: ";
			cin>>name;
			cout<<endl;
		}
};
class grades{
	protected:						//private members are not inherited
		int math, physics, chemistry;
	public:
		void getgrades(){
			cout<<"math: ";
			cin>>math;
			cout<<"physics: ";
			cin>>physics;
			cout<<"chemisty: ";
			cin>>chemistry;
			cout<<endl;
		}
};
class sports{
	protected:
		int sportsgrade;
	public:
		void getsports(){
			cout<<"sports: ";
			cin>>sportsgrade;
			cout<<endl;
		}
};
class result:public student, public grades, public sports{
		float total;
		int avg;
	public:
		void show(){
			total=math+physics+chemistry;
			avg=total/3.0;
			cout<<"total: "<<total<<endl;
			cout<<"avg: "<<avg<<endl;
			cout<<"avg + sports: "<<avg+sportsgrade<<endl;
		}
};
int main(){
	result r;
	r.getstu();
	r.getgrades();
	r.getsports();
	r.show();
	
	system("pause>0");
}
