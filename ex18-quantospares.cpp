#include <stdio.h>
#include <stdlib.h>

int main(){
int par=0, num, i;

for (i=1; i<=10; i++) {

printf("informe um numero: ");
scanf("%d", &num);

if (num%2==0) {
par=par+1;
}
}
printf("pares: %d\n", par);
printf("impares: %d", 10-par);
printf("\n");
return 0;
}

