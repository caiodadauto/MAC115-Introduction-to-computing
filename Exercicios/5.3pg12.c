#include<stdio.h>

int divide (int *m, int *n, int d);

int divide (int *m, int *n, int d) { 

	if (*m % d == 0 || *n % d == 0) {
		if (*m % d == 0)
			*m /= d;
		if (*n % d == 0)
			*n /= d;
		return 1;
	}
	else
		return 0;
}

int main () {
	int
		i,
		divisor = 0,
		mmc = 1,
		primo = 0,
		m,
		n,
		d = 2;
		
	printf ("entre com os valores de m e n: ");
	scanf ("%d%d", &m, &n);
	
	while (m != 1 || n != 1) {
		while (primo == 0) {
			for (i = 1; i <= d; ++i) {
				if (d % i == 0)
					++ divisor;
			}
			if (divisor == 2)
				primo = 1;
			else
				++ d;
			divisor = 0;
		}
		while (divide (&m, &n, d)) {
			mmc *= d;
		}
		++ d;
		primo = 0;
	}
	printf ("\no mmc é %d\n", mmc);
	return 0;
}
