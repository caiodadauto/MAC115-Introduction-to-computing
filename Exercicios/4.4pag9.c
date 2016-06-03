#include <stdio.h>

int primo (int m) {
	int
		i,
		divisor = 0;
	
	for (i = 1; i <= m; ++ i) {
		if (m % i == 0)
			++ divisor;
	}
	if (divisor == 2)
		return 1;
	else
		return 0;
}

int main () {
	int
		n, 
		soma = 0,
		eh_primo = 0;
	
	printf ("entre com n: ");
	scanf ("%d", &n);
	
	for ( ; n > 0; -- n) {
		eh_primo = primo (n);
		if (eh_primo) 
			soma += n;	
	}

	printf ("a soma ds n numeroos primos eh %d\n", soma);
	return 0;
}
