#include <stdio.h>
#include <stdlib.h>

int main ()
{
char senha[6] = "R10p5";
char digitar[20];
bool certo;
do{
    printf("tente a senha\n");
    fflush(stdin);
    scanf("%s", &digitar);
    certo = true;
    for (int i=0; i<6; i++)
        if(senha[i] != digitar[i])
            certo = false;
}while(!certo);{
    printf("acertou");
    }
system("pause");
}
