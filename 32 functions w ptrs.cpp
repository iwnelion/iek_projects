#include <iostream>
using namespace std;

void printNumber(int* numptr){
	cout<<*numptr<<endl;
}

void printCharacter(char* charptr){
	cout<<*charptr<<endl;
}

int main(){
	int number=5;
	printNumber(&number);
	
	char letter='a';
	printCharacter(&letter);
	
	system("pause>0");
}
