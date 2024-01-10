#include <stdio.h>

int main()
{
int num1,num2;

printf("Δώσε δύο ακέραιους αριθμούς: ");
scanf("%d%d", &num1,&num2); //διαβάζει και τους δύο αριθμούς

if (num1==num2)
    printf("Οι δύο αριθμοί είναι ίσοι.");

    return 0;
}