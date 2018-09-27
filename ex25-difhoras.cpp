#include <stdio.h>
#include <stdlib.h>
int main(void) {
	float hora1, hora2;
	float result;

	printf("digite o primeiro horário: ");
	scanf("%f", &hora1);

	printf("digite o segundo horário: ");
	scanf("%f", &hora2);

	if(hora1 > hora2){result = hora1 - hora2;
	printf("a diferença é %.2f", result);
	}
	if(hora2 > hora1){result = hora2 - hora1;
	printf("a diferença é %.2f", result);
	}

system("pause");
}
