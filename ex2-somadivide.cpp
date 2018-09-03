#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main (void){

int valor;
int valor2;
int valor3;

printf("digite o valor \n");
scanf("%d", &valor);

if(valor > 10) {
    valor2 = valor / 2;
    printf("o valor final foi %d", valor2);
}
else{
    valor3 = valor * 2;
    printf("o valor final foi %d", valor3);
}
}
