#include<stdio.h>

int main () {
	float
		soma = 0;
	int
		aux,
		n = 10000;
	
	for ( ; n  > 0; --n) {
		if (n % 2 == 0) {
			aux = -1 * n;
			soma += 1.0 / aux;
		}	
		else
			soma += 1.0 / n;
	}
	
	printf ("o valor da soma e %f\n", soma);
    return 0;
}
