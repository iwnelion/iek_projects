#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Δώστε τρείς ακέραιους αριθμούς: ");
    scanf("%d%d%d", &num1,&num2,&num3); //διαβάζει και τους 3 αριθμούς σε μία γραμμή
    
    //Εάν το num1 είναι  μεγαλύτερο από το num2, τότε το num1 είναι ο μεγαλύτερος αριθμός 
    if (num1>=num2) 
        printf("%d είναι ο μεγαλύτερος αριθμός", num1);
    else if(num2>=num3)
        printf("%d είναι ο μεγαλύτερος αριθμός", num2);
    else 
        printf("%d είναι ο μεγαλύτερος αριθμός", num3);

    return 0;
}