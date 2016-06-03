#include<stdio.h>

void somabit (long b1, long b2, long *vaium, long *soma);

void somabit (long b1, long b2, long *vaium, long *soma) { 
	if (b1 == 0 && b2 == 0) {
		*soma = 0;
		*vaium = 0;
	}		
	if ((b1 == 1 && b2 == 0) || (b1 == 0 && b2 == 1)) {
		*soma = 1;
		*vaium = 0;
	}		
	if (b1 == 1 && b2 == 1) {
		*soma = 0;
		*vaium = 1;
	}
}

int main () {
	long
		i,
		auxvai = 0,
		soma = 0,
		aux1,
		aux2,
		vaium = 0,
		bitfinal = 0,
		num1,
		num2;

inicio:

	printf ("entre com dois numeros em binário: ");
	scanf ("%ld%ld", &num1, &num2);

	aux1 = num1;
	aux2 = num2;
	i = 1;
	while (aux1 / 10 != 0 || aux1 % 10 != 0 || aux2 / 10 != 0 || aux2 % 10 != 0) {
		if (vaium == 1) {
			somabit (aux1 % 10, 1, &auxvai, &bitfinal);
			somabit (aux2 % 10, bitfinal, &vaium, &bitfinal);
			if (auxvai == 1)
				vaium = auxvai;
		}
		else
			somabit (aux1 % 10, aux2 % 10, &vaium, &bitfinal);
		soma += bitfinal * i;
		aux1 /= 10;
		aux2 /= 10;
		i *= 10;
	}
	if (vaium == 1)
		soma += 1 * i;
	printf ("%ld + %ld = %ld\n", num1, num2, soma);
	goto inicio;
	return 0;
}
