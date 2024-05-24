#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

class triangle{
		double s1, s2, s3, total, area;
	public:
		void set(){
			cout<<"a: ";
			cin>>s1;
			cout<<"b: ";
			cin>>s2;
			cout<<"c: ";
			cin>>s3;
			total=(s1+s2+s3)/2;
			area=sqrt(total*(total-s1)*(total-s2)*(total-s3));
		}
		void show(){
			cout<<"total: "<<total<<endl;
			cout<<"area: "<<area<<endl;
		}
};
int main(){
	triangle a, *p = &a;
	p->set();
	p->show();
	
	system("pause>0");
}
