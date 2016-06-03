#include<stdio.h>

int main () {
	float
		soma = 0;
	int
		i,
		aux,
		n;
		
	printf ("entre com o valor de n: ");
	scanf ("%d", &n);
	
	aux = n;
	for (i = 1; i <= aux; ++i, --n)
		soma += (float) i / n;
	
	printf ("o valor da soma e %f", soma);
    return 0;
}
