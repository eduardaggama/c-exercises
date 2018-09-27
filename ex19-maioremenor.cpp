#include <stdio.h>
#include <stdlib.h>

int main(){
int num;
int maior;
int menor;

for (int i = 0; i <= 10; i++){
printf("digite um número:");
scanf("%d", &num);

if(num > maior){
    maior = num;
}

if(num < menor){
    menor = num;
}

}
printf("o maior número é %d \n", maior);
printf("o menor número é %d", menor);
return 0;
}
