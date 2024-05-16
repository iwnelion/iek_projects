#include <iostream>
using namespace std;

float sumnumbers(float a, float b){
	return a+b;
}
float sumnumbers(float a, float b, float c){
	return a+b+c;
}
int main(){
	cout<<sumnumbers(3.2,6.9)<<endl;
	cout<<sumnumbers(4.2,2.9,8.5)<<endl;
	
	system("pause>0");
}
