#include <iostream>
using namespace std;
int main(){
	int values[10];
	int j;
	int louiza=5;
	
	cout<<"louiza="<<louiza<<endl;
	cout<<"bye louiza"<<endl;
	int k;
	for(k=0;k<5;k++){
		cout<<"the values of k are: "<<k<<endl;
		
	}
	cout<<"THE VALUE OF K ARE FINISHED"<<endl;
	
	int sum=0;
	int i;
	while(i<5){
		sum=sum+1;
		cout<<"sum="<<sum<<endl;
		i++;
	}
	cout<<"THE SUM IS FOUND"<<endl;
	
	int a[2][2];
	for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		cout<<"enter the num: a["<<i<<"]["<<j<<"]=";
		cin>>a[i][j];
	}
}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
		}
	}
	
	
	
	
	
	
	
	return 0;
}
