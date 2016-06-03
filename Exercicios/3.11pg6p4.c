#include<stdio.h>

int main () {
	float
		somap = 0,
		soman = 0,
		soma = 0;
	int
		aux,
		n = 10000;
	
	for ( ; n  > 0; --n) {
		if (n % 2 == 0) {
			aux = -1 * n;
			somap += 1.0 / aux;
		}	
		else
			soman += 1.0 / n;
	}
	
	soma = somap + soman;
	printf ("o valor da soma e %f\n", soma);
    return 0;
}
