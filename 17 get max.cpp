#include <iostream>
using namespace std;

int getmax(int numbers[], int size){		//max funct
	int max = numbers[0];
	for(int i=1;i<=5;i++){
		if (numbers[i] > max)
			max=numbers[i];
	}
	return max;
}

int getmin(int numbers[], int size){		//min funct
	int min = numbers[0];
	for(int i=1;i<=5;i++){
		if (numbers[i] < min)
			min=numbers[i];
	}
	return min;
}

void getmaxmin(int numbers[], int size, int* min, int* max){		//max and min funct with pointers
	for(int i=1;i<=5;i++){
		if (numbers[i] > *max)
			*max=numbers[i];
		if (numbers[i] < *min)
			*min=numbers[i];
	}
}

int main(){
	int numbers[]={7,3,0,90,34,65};
	cout<<"max: "<<getmax(numbers,5)<<endl;			//max: 90
	cout<<"min: "<<getmin(numbers,5)<<endl<<endl;	//min: 0
	
	cout<<"max: "<<getmaxmin(&max);
	
	return 0;
}









