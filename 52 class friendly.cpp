//NOT FINISHED!!!!!!!!!!!!!!
#include <iostream>
using namespace std;

class Author{
	char aname[20];
	friend class Book;
};
class Book{
	char bname[20];
	float prize;
	Author a;
public:
	void getdata(){
		cout<<"enter author name: ";
		cin>>a.aname;
		cout<<"enter book name: ";
		cin>>bname;
	}
};
