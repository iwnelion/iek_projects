#include <iostream>
#include <string>
using namespace std;

template <class T>
void show(T a){
	cout<<a<<endl;
}
int main(){
	int num=500;
	float f=3.5;
	char chr[20]="Char array";
	string str="String";
	int *p1=&num;
	float *p2=&f;
	show(num);
	show(f);
	show(chr);
	show(str);
	show(&num);
	show(p1);
	show(&p1);
	
	system("pause>0");
}
