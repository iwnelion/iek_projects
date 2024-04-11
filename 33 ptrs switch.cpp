#include <iostream>
using namespace std;

void printnumber(int* numberptr){
	cout<<*numberptr<<endl;
}

void printchar(char* charptr){
	cout<<*charptr<<endl;
}

void printany(void*ptr, char type){
	switch(type){
		case 'i':cout<<*((int*)ptr)<<endl; break;
		case 'c':cout<<*((char*)ptr)<<endl; break;
	}
}

int main(){
	char letter='a';
	int number=14;
	
	printnumber(&number);
	printchar(&letter);
	
	printany(&number, 'i');
	printany(&letter, 'c');
	
	system("pause>0");
}
