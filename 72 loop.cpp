#include <iostream>
using namespace std;

int main(){
	int i;
	int number=3;
	cout<<"number before entering the loop: "<<number<<endl;
	for(i=1;i<=4;i++){
		cout<<"the "<<i<<" time entering the loop: "<<number<<endl;
		number=number+5;
		cout<<"inside the loop the value of i: "<<i<<"="<<"	"<<number<<endl;
	}
	cout<<"the last value out of the loop: "<<number<<endl;
	system("pause>0");
}
