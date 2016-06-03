#include <stdio.h>
#include <math.h>

int contadigito (int n, int d) {

	int
		n_d = 0;

	while (n > 0) {
		if (n % 10 == d) 
			++ n_d;
		n /= 10;
	}
	return n_d;
}

int main () {
	int
		aux,
		per = 1,
		num_a,
		num_b,
		a,
		b;
		
	printf ("entre com o valor de a e b, respectivamente: ");
	scanf ("%d%d", &a, &b);

	aux = b;
	while (b > 0 && per) {
		num_a = contadigito (a, b % 10);
		if (num_a == 0)
			per = 0;
		num_b = contadigito (aux, b % 10);
		if (num_a != num_b)
			per = 0;
		b /= 10;
	}
	
	if (per == 0)
		printf ("%d é nao permutação de %d", a, b);
	else
		printf ("%d é permutação de %d\n", a, aux);
	return 0;
}
