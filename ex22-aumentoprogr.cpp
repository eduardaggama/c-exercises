#include <stdio.h>
#include <stdlib.h>
int main(void) {
	float salario = 1000, aumento = 1.5/100;
	int i, inicio = 2005, hoje = 2018;

	for (i = inicio + 1; i <= hoje; i++) {
		salario = salario + (salario * aumento);
		printf("salário %i: %.2f - aumento de %.1f\% \n", i, salario, aumento * 100);
		aumento = 2 * aumento;
	}

	printf("salário hoje: %.2f", salario);
	return 0;
	system("pause");
}
