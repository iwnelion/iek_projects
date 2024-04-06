#include <iostream>
using namespace std;

int main(){
	int var=5;
	cout<<"var: "<<var<<endl;
	cout<<"address of var: "<<&var<<endl<<endl;

//pointer * and memory allocation &
	int* pc;
	int c;
	c=5;
	cout<<"c: "<<c<<endl;		//5
	pc=&c;		//shows the memory allocation of c-->0x6f....
	*pc=c;		//pointer to c-->5
	cout<<"*pc: "<<*pc<<endl;	//5
	cout<<"pc: "<<pc<<endl<<endl;//0x6f....
	
//changing *pc(: the pointer of c) to 1, c changes to 1 as well
	*pc=1;
	cout<<"*pc: "<<*pc<<endl;	//1
	cout<<"&pc: "<<&pc<<endl;	//0x6f...
	cout<<"c: "<<c<<endl;		//1 (bc the pointer of it is now 1)
	cout<<"&c: "<<&c<<endl;		//0xffd....
	cout<<"pc: "<<pc<<endl<<endl;//0xffd.... (same as &c)
	
//printing vars by using pointers and dereferencing them
	int k=5;
	int d=-15;
	int *g;
	g=&k;
	cout<<"*g: "<<*g<<endl;		//5
	g=&d;
	cout<<"*g: "<<*g<<endl;//-15
	return 0;
}









