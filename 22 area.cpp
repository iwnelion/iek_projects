#include <iostream>
using namespace std;

struct GFG{
	int x;
	int y;
};

struct square{
	struct GFG left;
	struct GFG right;
};

void area_square(struct square s){
	int area = (s.right.x) * (s.left.x);
	cout<<area<<endl;
}

int main(){
	struct square s = {{4,4},{4,4}};
	area_square(s);
	return 0;
}
//16
