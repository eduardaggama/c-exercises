#include <stdio.h>
#include <stdlib.h>

int main (void){

int altura;
int base;
int area;

printf("qual é a altura do triângulo?\n");
scanf ("%d", &altura);

printf("qual é a base do triângulo?\n");
scanf ("%d", &base);

area = (base * altura) / 2;

printf("a área total do triângulo é %d", area);
}
