#include <iostream>
using namespace std;
//friend classes w more than 1 objects

class Author{
		char aname[20];
		friend class Book;
};
class Book{
		char bname[20];
		float prize;
		Author a;			//creates an obj of type Author
	public:
		void getdata(){
			cout<<"enter author name: ";
			cin>>a.aname;
			cout<<"enter book name: ";
			cin>>bname;
			cout<<"enter prize: ";
			cin>>prize;
		}
		void printdata(){
			cout<<endl<<"--DISPLAYING DATA--"<<endl;
			cout<<"author name: "<<a.aname<<endl;
			cout<<"book name: "<<bname<<endl;
			cout<<"prize: "<<prize<<endl;
		}
};
int main(){
	Book b;
	b.getdata();
	b.printdata();
	
	system("pause>0");
}
