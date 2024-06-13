#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;
using std::ostream;
using std::strcpy;

template <class T>
void show(T a){
	cout<<a<<endl;
}
class person{
	private:
		char name[40];
	public:
		person(char *s){
			strcpy(name, s);
		}
		friend ostream &operator<< (ostream &os, const person &b);
};
ostream &operator << (ostream &os, const person &b){
	os<<b.name;
	return os;
};
int main(){
	person person1="Pan";
	int num=500;
	float f=3.5;
	char str[20]="Char array";
	show(num);
	show(f);
	show(str);
	show(person1);
	show(&person1);
	show(sizeof(person1));		//40
	return 0;
}

