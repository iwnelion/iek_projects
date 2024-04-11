#include <iostream>
using namespace std;

class Wall{
	private:
		double length;
		double height;
	public:
	Wall (double len, double hgt){
			length=len;
			height=hgt;
		}
		
	//copy constructor
	Wall(Wall &obj){
		length=obj.length;
		height=obj.height;
	}
	
	double calculateArea(){
		return length*height;
	}
};
int main(){
	Wall wall1(10.5, 8.6);
	//copy constructor of wall1 to wall2
	Wall wall2=wall1;
	
	cout<<"area of wall 1: "<<wall1.calculateArea()<<endl;
	cout<<"area of wall 2: "<<wall2.calculateArea();
	return 0;
}

