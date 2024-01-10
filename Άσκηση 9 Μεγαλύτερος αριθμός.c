#include <stdio.h>

int main()
{
int num1,num2;

printf("Δώστε δύο ακέραιους αριθμούς: ");
scanf("%d%d", &num1,&num2); //διαβάζει και τους δύο αριθμούς

if (num1>=num2) {
    printf("%d είναι ο μεγαλύτερος αριθμός.",num1);
}else{
    printf("%d είναι ο μεγαλύτερος αριθμός.",num2);
}
    return 0;
}