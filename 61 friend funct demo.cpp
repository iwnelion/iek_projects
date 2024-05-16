#include <iostream>
using namespace std;

class demo2;
class demo1{
	public:
		demo1():numA(5){}
	private:
		int numA;
friend int add(demo1, demo2);
};
class demo2{
	public:
		demo2():numB(9){}
	private:
		int numB;
friend int add(demo1, demo2);
};
int add(demo1 d1, demo2 d2){
	return(d1.numA+d2.numB);
}
int main(){
	demo1 d1;
	demo2 d2;
	cout<<"sum: "<<add(d1,d2);
	
	system("pause>0");
}
