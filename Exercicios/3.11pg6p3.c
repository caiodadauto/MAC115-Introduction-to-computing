#include<stdio.h>

int main () {
	float
		soma,
		soman = 0,
		somap = 0;
	int
		aux,
		n;
	
	for (n = 1 ; n  <= 10000; ++n) {
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
