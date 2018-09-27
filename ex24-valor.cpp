#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	int valor, quadrado, cubo;
	float raiz;

	printf("digite um valor: ");
	scanf("%d", &valor);

	quadrado = valor * valor;
	cubo = quadrado * valor;
	raiz = sqrt(valor);


	printf("valor: %d\n", valor);
	printf("quadrado: %d\n", quadrado);
	printf("cubo: %d\n", cubo);
	printf("raiz: %.2f\n", raiz);

	system("pause");
}
