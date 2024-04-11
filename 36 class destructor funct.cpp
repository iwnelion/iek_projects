#include <iostream>
using namespace std;

class Line{
	public:
		int getLength( void );
		Line( int len );		//simple constructor
		Line( const Line &obj);	//copy constructor
		~Line();				//destructor
	private:
		int *ptr;
};

//member functions definitions including constructor
Line::Line(int len){
	cout<<"normal constructor allocating ptr"<<endl;
	
	//allocate memory for the pointer
	ptr=new int;
	cout<<"value of ptr: "<<ptr<<endl;
	*ptr=len;
}

Line::Line(const Line &obj){
	cout<<"copy constructor allocating ptr"<<endl;
	ptr=new int;
	*ptr=*obj.ptr;				//copy the value
}

Line::~Line(void){
	cout<<"freeing memory!"<<endl;
	delete ptr;
	//return *ptr;
}

void display(Line obj){
	cout<<"length of value: "<<obj.getLength()<<endl;
}

int main(){
	Line line(10);
	
	display(line);
	system("pause>0");
}
