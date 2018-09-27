#include <stdio.h>
#include <stdlib.h>

int main(){
    float idade, altura, media, cont;
    media = 0;
    cont = 0;
    
    printf ("idade: ");
    scanf ("%f", &idade);

    while (idade > 0){
          printf ("altura: ");
          scanf ("%f", &altura);
          
          if (idade >50){
             cont++;
             media =  media + altura ;
          }

          printf ("idade: ");
          scanf ("%f", &idade);
    }
    media = media/cont;
    printf ("a média de altura das pessoas com mais de 50 anos é: %.2f", media);
}
