#include <iostream>
using namespace std;

int main(){
	int i=1;
	int number=3;
	cout<<"the value of number before the loop: "<<number<<endl;
	while(i<=4){
		number=number+5;
		cout<<"i: "<<i<<" and number: "<<number<<endl;
		i++;
	}
	cout<<"the value of number after the loop: "<<number<<endl;
	
	system("pause>0");
}
