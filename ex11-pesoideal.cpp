#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float altura, resultm, resultf;
    char sexo;

   printf("informe a sua altura.\n");
   scanf("%f", &altura);
   fflush(stdin);
   printf("informe o sexo (m/f).\n");
   scanf("%c", &sexo);


if(sexo == 'm' || sexo == 'M'){
    resultm = (72.7*altura)-58;
    printf("\no peso ideal eh %f", resultm);
}else if (sexo == 'F' || sexo == 'f'){
    resultf = (62.1*altura)-44.7;
    printf("\n peso ideal eh %f", resultf);
}else{
    printf("resposta invalida.");
    }

}
