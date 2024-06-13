#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
//probably doesn't work like it's supposed to (?????)

int n=0;
class car{
	private:
		char name[40];
		double velocity;
		int z;
	public:
		void show(){
			cout<<"Obj. no "<<z<<" -> "<<name<<" Speed= "<<velocity<<endl;
		}
		car(char s[20], int v=0) : velocity(v), z(n++){
			strcpy(name, s);
			cout<<"Construct "<<name<<endl;
		}
		~car(){
			cout<<"Destruct "<<name<<endl;
		}
		car operator=(car b){		//overloading operator =
			velocity=b.velocity;
			return *this;
		}
};
int main(){
	{
		car a("volvo ");
		car b("fiat ");
		car c("renault ", 40);
		car d("mazda ", 100);
		
		a=car(c);
		a.show();
		b.show();
		c.show();
		d.show();
		
		b=a;
		cout<<endl;
		a.show();
		b.show();
		c.show();
		d.show();
		
		a=b=c=d;
		cout<<endl;
		a.show();
		b.show();
		c.show();
		d.show();
	}
	system("pause>0");
}
