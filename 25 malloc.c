#include <stdio.h>
#include <stdlib.h>

//PROGRAM IN C
int main(void){
	int* ptr;
	ptr=(int*)malloc(sizeof(int));
	
	if (ptr == NULL)
		printf("memory insufficient\n");
	else{
		free(ptr);
		printf("memory freed\n");
	}
}
//memory freed
