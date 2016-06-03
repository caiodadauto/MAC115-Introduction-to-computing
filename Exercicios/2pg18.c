#include <stdio.h>

int main () {
	float
		num = 0,
		temp = 0,
		fatorial = 1;

	printf ("Insira um numero n positivo e diferente 0: ");
	scanf ("%f", &num);

	while (num <= 0) {
		printf ("NUMERO POSITIVO E DIFERENTE DE 0, nao sabe ler nao !??\n");
		printf ("Insira um numero n positivo e diferente 0: ");
		scanf ("%f", &num);
	}

	temp = num;

	while (temp != 0) {
		fatorial = fatorial * temp;
		temp = temp -1;
	}

	printf ("%f! = %f\n", num, fatorial);

	return 0;
}
