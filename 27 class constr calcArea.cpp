#include <iostream>
using namespace std;

class Wall{
	private:
		double length;
		double height;
	public:
		//parameterized constructor to initialize variables
		Wall(double len, double hgt){
			length=len;
			height=hgt;
		}
		double calculateArea(){
			return length*height;
		}
};
int main(){
	//create object and initialize data members
	Wall wall1(10.5, 8.6);
	Wall wall2(8.5, 6.3);
	cout<<"area of wall 1: "<<wall1.calculateArea()<<endl;
	cout<<"area of wall 2: "<<wall2.calculateArea();
	system("pause>0");
}
