#include <stdio.h>

int main()
{
float prof=0, grapta=0, mesos_oros=0;
printf("Δώσε μου την βαθμολογία στα προφορικά \n");
scanf("%f",&prof);
printf("Δώσε μου την βαθμολογία στα γραπτά \n");
scanf("%f",&grapta);
mesos_oros=(prof+grapta)/2;
printf("Ο μέσος όρος είναι: %f \n", mesos_oros);
    return 0;
}