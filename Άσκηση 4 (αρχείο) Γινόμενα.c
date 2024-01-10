#include <stdio.h>

int main() {
int i,arithmos,ginomeno=1,plithos,zero=0;
printf("how many numbers r u gonna gimme? ");
scanf("%d",&plithos);

while (plithos<2) {
    printf("wrong try. try again. ");
    scanf("%d",&plithos);
}

for (i=1;i<=plithos;i++) {
    printf("gimme number %d: ",i);
    scanf("%d",&arithmos);
        if (arithmos!=0) {
            ginomeno=ginomeno*arithmos;
        } else {
            zero=zero+1;
        }
}
        if (zero>0) {
            printf("zeros: %d\n",zero);
        }
        if (zero==plithos) {
            ginomeno=0;
        } else {
            printf("ginomeno is %d.", ginomeno);
        }

return 0;
}
