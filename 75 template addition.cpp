#include <iostream>
using namespace std;

template <typename T>
void show(T a, T b){
	cout<<"the addition is: "<<a + b<<endl;
}
int main(){
	int num1=500, num2=300;
	float f1=3.5, f2=8.3;
	
	show(num1, num2);
	show(f1,f2);
	
	return 0;
}
