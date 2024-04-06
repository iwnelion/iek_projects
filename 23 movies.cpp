#include <iostream>
#include <sstream>
using namespace std;

struct movies_t{
	string title;
	int year;
} films[3];
void printmovie (movies_t movie);
int main(){
	string mystr;
	int n;
	
	for(n=0;n<3;n++){
		cout<<"enter title: ";
		getline(cin,films[n].title);
		cout<<"enter year: ";
		getline(cin,mystr);
		stringstream(mystr)>>films[n].year;
	}
	
	cout<<endl<<"you have entered these movies: "<<endl;
	
	for(n=0;n<3;n++)
		printmovie(films[n]);
	system("pause");
}
void printmovie(movies_t movie){
	cout<<movie.title;
	cout<<" ("<<movie.year<<") "<<endl;
}
