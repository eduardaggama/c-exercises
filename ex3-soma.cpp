#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void)
{
    int num1;
    int num2;
    int num3;
    int num4;
    int aaa;


   printf("digite um numero \n");
   scanf("%d", &num1);
    printf("digite um numero\n");
   scanf("%d", &num2);
    printf("digite um numero\n");
   scanf("%d", &num3);
    printf("digite um numero\n");
   scanf("%d", &num4);

   aaa = (num1 + num2 + num3 + num4) ;

   printf("a soma foi %d", aaa);
}
