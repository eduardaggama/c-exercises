#include <stdio.h>
#include <Stdlib.h>

int main() {

int num, i;

printf("digite um número");
scanf("%d", &num);

i = 1;

    while(i < num){
            printf("%d\n", i);
            i = i * 2;
    }
system("pause");
}
