#include <iostream>
using namespace std;

class Youtuber{
	int x;
	public:
		Youtuber(int x):x{x}{
			cout<<"youtuber"<<endl;
		}
		void work1(){
			cout<<"working on youtube"<<endl;
	}
};
class Engineer{
	int y;
	public:
		Engineer(int y):y{y}{
			cout<<"engineer"<<endl;
	}
	void work2(){
		cout<<"working on youtube"<<endl;
	}
};

class Peter:public Engineer, public Youtuber{
	public:
		Peter(int x, int y): Youtuber(x), Engineer(y){
			cout<<"peter "<<endl;
		}
};

int main(){
	Peter p1(1,2);
	p1.work1();
	p1.work2();
	
	system("pause>0");
}
