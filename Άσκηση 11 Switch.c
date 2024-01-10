#include <stdio.h>

int main()
{
    int num;
    printf("Δώστε έναν ακέραιο αριθμό: ");
    scanf("%d", &num);
    switch (num) {
            case 1:
                printf("Κυριακή");
                break;
            case 2:
                printf("Δευτέρα");
                break;
            case 3:
                printf("Τρίτη");
                break;
            case 4:
                printf("Τετάρτη");
                break;
            case 5:
                printf("Πέμπτη");
                break;
            case 6:
                printf("Παρασκευή");
                break;
            case 7:
                printf("Σάββατο");
                break;
            default:
                printf("Λάθος αριθμός");
                break;

    }

    return 0;
}