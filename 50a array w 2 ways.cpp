#include <iostream>
using namespace std;
//NOT THE SAME RESULT

int main(){
	int a[5];
	*a=10;
	cout<<"a[0]= "<<a[0]<<endl;
	cout<<"&a[0]= "<<&a[0]<<endl;
	//cout<<0x6ffdf0<<endl;
	
	system("pause>0");
}

/*
int main(){
	int a[]={10,12,32,9,8};
	int sum=0, *p;
	//for (p=&a[0];p<=&a[4];p++)
	for(p=a;p<=a+4;p++)
		sum+=*p;
		cout<<*(a+1)<<endl;
		cout<<(a+1)<<endl;
		cout<<"sum= "<<sum<<endl;
		
	system("pause>0");
*/
