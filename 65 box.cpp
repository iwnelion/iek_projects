#include <iostream>
using namespace std;

class box{
		int c;
		double length, height, width;
	public:
		box(int k=0, double l=2.0, double h=2.0, double w=2.0): length(l), height(h), width(w){			//constructor for box
			cout<<"box constructed: "<<k<<endl;
		}
		double volume(){
			return length=height*width;
		}
		int compare(box b){
			return this->volume() > b.volume();
		}
};
int main(){
	box box1(1, 3.3, 1.2, 1.5);
	box box2(2, 8.5, 6.0, 2.0);
	
	box *ptrbox;
	
	ptrbox=&box1;
	cout<<"volume of box 1: "<<ptrbox->volume()<<endl;
	
	ptrbox=&box2;
	cout<<"volume of box 2: "<<ptrbox->volume()<<endl;
	
	if(box1.compare(box2)){
		cout<<"box 2 is smaller than box 1"<<endl;
	}
	else{
		cout<<"box 1 is greater than box 2"<<endl;		//box 1 is
	}
	
	system("pause>0");
}
