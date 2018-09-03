#include <stdio.h>
#include <stdlib.h>

//subtrai o menor valor do maior valor

int main (void){

int a, b, c;

printf("digite o primeiro número\n");
scanf ("%d", &a);

printf("digite o segundo número\n");
scanf ("%d", &b);

if(a > b)
{
 c = a - b;
 printf("o resultado é %d\n", c);
} else{
c = b - a;
printf("o resultado é %d\n", c);
}


}
