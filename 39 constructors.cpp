#include <iostream>
using namespace std;

class data{
	char* x{};
	int y{};
public:
	data(){
	}
	data(char* s) : x(s) {}
	data(int k) : y(k) {}
	data(char* s, int k) : x(s), y(k) {}	//*s points to char
	data(int k, char* s) : x(s), y(k) {}
	void show(){
		cout<<y<<" and "<<x<<endl;
	}
	void show1(){
		cout<<y<<endl;
	}
};

int main(){
	data a = data("greece",1);
	a.show();
	
	data b = data("italy",2);
	b.show();
	
	data c = data("england",3);
	c.show();
	
	data d = data("france",4);
	d.show();
	
	d = data("germany",5);
	d.show();
	
	system("pause>0");
}
