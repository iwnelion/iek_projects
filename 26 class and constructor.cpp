#include <iostream>
using namespace std;

//declare a class
class Wall{
	private:
		double length;

	public:
		//default constructor to initialize variable
		Wall(){
			length=5.5;
			cout<<"creating a wall."<<endl;
			cout<<"length= "<<length<<endl;
		}	
};

int main(){
	Wall wall;
	return 0;
}
