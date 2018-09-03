#include <stdio.h>
#include <stdlib.h>

int main (void){
int anos, salario;

printf("a quantos anos tu trampa aqui?\n");
scanf("%d", &anos);

printf("qual é o seu salário?");
scanf("%d", &salario);
if(anos > 5){
    salario = (salario / 100) * 120;
    printf ("o seu salário atualizado é R$ %d", salario);
} else {
salario = (salario / 100) * 110;
printf("o seu salário atualizado é R$ %d", salario);}

}
