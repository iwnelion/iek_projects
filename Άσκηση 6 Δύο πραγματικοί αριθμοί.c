#include <stdio.h>

int main()
{
double x,y,product;
printf("Δώστε δύο πραγματικούς αριθμούς: ");
scanf("%lf%lf",&x,&y); //διαβάζω με μία εντολή και τους 2

//Πολλαπλασιασμός
product=x*y;

//%.2lf εμφανίζει έναν αριθμό μέχρι 2 δεκαδικά ψηφία
printf("Ο πολλαπλασιασμός είναι %.2lf", product);

    return 0;
}