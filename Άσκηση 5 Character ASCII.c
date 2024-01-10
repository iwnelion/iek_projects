#include <stdio.h>

int main()
{
char ch;
printf("Δώσε μου έναν χαρακτήρα: ");
scanf("%c",&ch);

//%d εμφανίζει την ακέραια τιμή του χαρακτήρα (ASCII τιμή)
//%c εμφανίζει τον χαρακτήρα
printf("Η ASCII τιμή του χαρακτήρα είναι %c = %d", ch, ch);

    return 0;
}