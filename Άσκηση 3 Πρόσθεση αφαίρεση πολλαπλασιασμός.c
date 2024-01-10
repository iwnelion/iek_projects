#include <stdio.h>

int main()
{
    int num1=0,num2=0,sum=0;
    printf("Δώσε μου τον πρώτο αριθμό \n");
    scanf("%d", &num1);
    printf("Δώσε μου τον δεύτερο αριθμό \n");
    scanf("%d", &num2);
    sum=num1+num2;
    printf("Το άθροισμα τους είναι: %d \n", sum);
    sum=num1-num2;
    printf("Η αφαίρεση τους είναι: %d \n", sum);
    sum=num1*num2;
    printf("Ο πολλαπλασιασμός τους είναι: %d \n", sum);

    return 0;
}