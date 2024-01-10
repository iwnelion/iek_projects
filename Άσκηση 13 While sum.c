#include <stdio.h>

int main()
{
    int i, limit,sum=0;
    i=1;
    printf("Δωσε ενα θετικο αριθμο\n");
    scanf("%d", &limit);
    while (i<=limit){
            sum=sum+i;
            i++;
    }

printf("%d", sum);
    return 0;
}