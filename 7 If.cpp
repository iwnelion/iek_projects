#include <iostream>
using namespace std;
int main()
{ 
     int x,n,p;
     //POSITIVE NEGATIVE OR ZERO
     /*cout<<"Give a number:";
     cin>>x;
     if(x>0){
     	cout<<"x is positive.";
	 }
	 else if(x<0){
	 	cout<<"x is negative.";
	 }
	 else {
	 	cout<<"x is zero";
	 } */
	 
	 
	 //COUNTDOWN WITH BREAK OR CONTINUE
	 /*for(n=10; n>0; n--){
	 	//cout<<n<<", ";							//IF CONTINUE, HIDE THIS LINE
	 	if (n==3){
	 		//cout<<"countdown aborted!"; break;
	 		cout<<"countdown aborted!"; continue;
		 }
		 cout<<n<<", ";							//CONTINUE
	 } */
	 
	 //FOR COUNTDOWN SKIPPING 6,5,4
	 for(p=10; p>0; p--){
	 	if(p<7 && p>3){
			 continue;
		 } cout<<p<<" , ";
	 }
	return 0;
}
