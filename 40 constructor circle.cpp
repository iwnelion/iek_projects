#include <iostream>
using namespace std;

class Circle{
	float r;
	public:
		Circle(){
		r=5;
	}
	Circle(float r){
		(*this).r=r;
	}
	void ShowArea(){
		cout<<"area: "<<3.14*r*r<<endl;
	}
};

int main(){
	Circle c1;
	
	Circle c2(10);
	
	c1.ShowArea();	//78.5
	c2.ShowArea();	//314
	
	system("pause>0");
}
