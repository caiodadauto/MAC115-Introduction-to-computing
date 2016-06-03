#include <stdio.h>

int mdc (int d, int D) {
	int
		r;
	
	r = d % D;
	while ( r != 0) {
		d = D;
		D = r;
		r = d % D;
	}
	return D; 
}

int main () {
	int 
		a = 0,
		b = 1,
		num,
		n;
	
	printf ("entre com n: ");
	scanf ("%d", &n);
	printf ("entre com n numeros: ");
	scanf ("%d%d", &a, &b);
	num = mdc (a, b);
	n -= 2;
	
	for ( ; n > 0; -- n) {
		scanf ("%d", &b);	
		num = mdc (num, b);
	}

	printf ("o mdc dos n numeros eh %d\n", num);
	return 0;
}
