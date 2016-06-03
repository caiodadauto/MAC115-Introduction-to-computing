#include <stdio.h>
#include <math.h>

int encaixa (int a, int b) {

	int
		auxb,
		auxa,
		caxa = 1;
		
	auxb = b;
	auxa = a;
	while (b != 0) {
		if (a % 10 != b % 10)
			caxa = 0;
		a /= 10;
		b /= 10;
	}
	if (auxb == 0 && auxa % 10 != 0)
		caxa = 0;
		
	return caxa;
}

int main () {
	
	int
		aux,
		temp,
		seg = 0,
		a,
		b;
	
	printf ("entre com dois numeros: ");
	scanf ("%d%d", &a, &b);
	
	if (a < b) {
		b = a + b;
		a = b - a;
		b = b - a;
	}
	
	aux = a;	
	while (a > b) {
		temp = encaixa (a, b);
		if (temp)
			seg = 1;
		a /= 10;
	}
	
	if (seg == 1)
		printf ("\n%d é segmento de %d\n", b, aux);
	else
		printf ("\n%d nao é segmento de %d\n", b, aux);
	return 0;
}
