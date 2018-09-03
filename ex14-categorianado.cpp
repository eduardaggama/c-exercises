#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;


    printf("qual eh a sua idade?\n");
    scanf("%d", &idade);

    if(7 > idade && idade > 5){
        printf("a sua categoria eh infantil a");
    }
    if(10 > idade && idade > 8){
        printf("a sua categoria eh infantil b");
    }
    if (13 > idade && idade > 11){
        printf("a sua categoria eh juvenil a");
    }

    if(17 > idade && idade > 14){
        printf("a sua categoria eh juvenil b");
    }
    if (idade > 18){
        printf("a sua categoria eh senior");
    }
    system("pause");
}
