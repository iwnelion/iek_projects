#include <iostream>
using namespace std;

class Youtuber{
	int x;
	public:
		Youtuber(int x):x{x}{
			cout<<"youtuber"<<endl;
		}
};
class Engineer{
	int y;
	public:
		Engineer(int y):y{y}{
			cout<<"engineer"<<endl;
	}
};

class Peter:public Engineer, public Youtuber{
	public:
		Peter(int x, int y): Youtuber(x), Engineer(y){
			cout<<"peter "<<endl;
		}
};

int main(){
	Peter p1(10,20);
	
	system("pause>0");
}
