#include <stdio.h>
#include <stdlib.h>
int main(void) {
	 int i, x;
  int div = 0;

  do{
    printf("digite um número inteiro e positivo: ");
    scanf("%d", &x);
  }
  while (x <= 0);

  for (i = 1; i <= x; i++){
    if (x % i == 0){
     div++;
    }
  }

  if (div == 2){
    printf("é primo", x);}
  else{
    printf("não é primo", x);}

    system("pause");
    return 0;
}
