#include <stdio.h>
#include <stdlib.h>

int main (void){

int nascimento;
int ano;
int idade;
int idadefut;

printf("quando você nasceu?\n");
scanf("%d", &nascimento);

printf("em que ano estamos?\n");
scanf("%d", &ano);

idade = ano - nascimento;
printf("você tem %d anos ", idade);
idadefut = 2020 - nascimento;
printf("e em 2020 você terá %d", idadefut);

}
