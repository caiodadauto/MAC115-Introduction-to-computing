#include <stdio.h>

int main () {
	int 
		n = 0,
		k = 0,
		temp = 0,
		potencia = 1;

	printf ("entre com um numero n a ser elevado a um numero k: ");
	scanf ("%d", &n);
	printf ("entre com o valor de k: ");
	scanf ("%d", &k);
	temp = k;

	while (k>0) {
		potencia = potencia * n;
		k = k - 1;
		}
	
	printf ("O resultado de %d^%d e %d\n", n, temp, potencia);

	return 0;
}
