#include<stdio.h>
#include<stdlib.h>

int main(){
    float maior;
    float x, y, z;

    printf("digite o primeiro valor\n");
    scanf("%f", &x);
    maior = x;

    printf("digite o segundo valor\n");
    scanf("%f", &y);

    if (y > maior) maior = y;
    printf("digite o terceiro valor\n");
    scanf("%f", &z);

    if (z > maior) maior = z;
    printf("o maior valor eh %f\n", maior);
    system("pause");
}
