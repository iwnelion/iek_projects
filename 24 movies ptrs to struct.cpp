#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct movies_t{
	string title;
	int year;
};

int main(){
	string mystr;
	movies_t amovie;
	movies_t * pmovie;
	pmovie = &amovie;
	
	cout<<"enter title: ";
	getline(cin,pmovie->title);		//-> is a dereference operator that's used w pointers to objects that have members
//this operator serves to access the members of an object directly from its address
//pmovie is the same with (*pmovie).
//both pmovie->title and (*pmovie).title access the member title of the data structure pointed 
//by a ptr called pmovie
	cout<<"enter year: ";
	getline(cin,mystr);
	(stringstream) mystr>>pmovie->year;
	
	cout<<"you have entered: "<<endl;
	cout<<pmovie->title;
	cout<<" ("<<pmovie->year<<")"<<endl;
	return 0;
}
