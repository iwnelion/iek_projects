#include <iostream>
using namespace std;

class Account{
	private:
		int accno;
		char name[20];
	public:
		void getacc(){
			cout<<"enter accno: ";
			cin>>accno;
			cout<<"enter name: ";
			cin>>name;
		}
		void printacc(){
			cout<<"accno: "<<accno<<endl;
			cout<<"name: "<<name<<endl;
		}
};
class Saving:public Account{
		float balance;
	public:
		void getbalance(){
			cout<<"enter balance: ";
			cout<<endl;
			cin>>balance;
			if (balance<500)
				cout<<"min.balance 500 euro"<<endl;
			else
				cout<<"account created"<<endl;
		}
};
class CurrentAccount:public Account{
		float balance;
	public:
		void getbalance(){
			cout<<"enter balance: "<<endl;
			cin>>balance;
			if (balance<1000)
				cout<<"min balance 1000"<<endl;
			else
				cout<<"account created"<<endl;
		}
};
int main(){
	int op;
	cout<<"1 is for "<<" savings account"<<endl;
	cout<<"2 is for "<<" current account";
	cout<<endl;
	cout<<"enter an option: ";
	cin>>op;
	if (op==1){
		Saving s;
		s.getacc();
		s.getbalance();
	}
	else if (op==2){
		CurrentAccount c;
		c.getacc();
		c.getbalance();
}
	else
		cout<<"invalid solution";
		
	system("pause>0");
}
