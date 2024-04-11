#include <iostream>
using namespace std;

class Youtuber{
	int x;
	public:
		Youtuber(){
			cout<<"youtuber"<<endl;
		}
};
class Engineer{
	int y;
	public:
		Engineer(){
			cout<<"engineer"<<endl;
	}
};

class Peter:public Engineer, public Youtuber{
	public:
		Peter(){
			cout<<"peter "<<endl;
		}
};

int main(){
	Peter p1;
	
	system("pause>0");
}
