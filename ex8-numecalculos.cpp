#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){

int num;
int quadr;
int cubo;
int result = 1;
float raiz;

printf("digite um número\n", num);
scanf("%d", &num);

quadr = num * num;
printf("%d elevado ao quadrado vale %d\n", num, quadr);

cubo = quadr * num;
printf("%d elevado ao cubo vale %d\n", num, cubo);

raiz = sqrt(num);
printf("a raiz quadrada de %d vale %f\n", num, raiz);

for (int i=0; i < 10; i++)
{
  result = result*num;
}
printf("o resultado da potência é %d", result);

}
