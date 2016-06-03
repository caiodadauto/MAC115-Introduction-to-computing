#include <stdio.h>

void cont (int valor, int *n_dig, int *first) {

	while (valor % 10 != 0 && valor / 10 != 0) {
		printf ("\n%d %d %d\n", valor, *n_dig, *first);
		++ *n_dig;
		valor /= 10;
	}
	/*printf ("\n%d %d %d\n", valor, *n_dig, *first);*/	
	*first = valor;
	/*printf ("\n%d %d %d\n", valor, *n_dig, *first);*/
}

int main () {
	int
		num,
		primeiro,
		digito,
		n;
		
	printf ("entre com o numero de valores da sequencia: ");
	scanf ("%d", &n);
	printf ("entre com os valores da sequencia: ");
	
	for ( ; n > 0; -- n) {
		digito = 1;
		scanf ("%d", &num);
		cont (num, &digito, &primeiro);
		printf ("\n%d = N. digitos - %d e 1 digito - %d\n", num, digito, primeiro);
	}
	return 0;
}
