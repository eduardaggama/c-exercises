#include <stdio.h>
#include <stdlib.h>

int main (){

int salario;
int salarioatual;

printf("digite o seu salario atual \n");
scanf("%d", &salario);

salarioatual = (salario / 100) * 125;

printf("o seu salario atualizado ficou %d", salarioatual);
}
