#include <iostream>
using namespace std;

class Distance{
	private:
		int meters;
	public:
		Distance(){
			meters=0;
		}
		void enter_value(){
			cout<<"enter meters: ";
			cin>>meters;
			cout<<"meters: "<<meters<<endl;
		}
		void displayData(){
			cout<<"meters values: "<<meters<<endl;
		}
		friend void addValues(Distance &d);
};		
void addValues(Distance &d){
	d.meters=d.meters+5;
}
int main(){
	Distance d1;
	d1.enter_value();
	d1.displayData();
	cout<<endl<<endl;
	addValues(d1);
	d1.displayData();
	
	system("pause>0");
}
