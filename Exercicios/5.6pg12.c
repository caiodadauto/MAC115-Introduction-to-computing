#include<stdio.h>

void valor (int k, int *f, int *g) {
	int
		f_aa = 2,
		f_a = 1,
		g_aa = 1,
		g_a = 2;

	if (k == 1 || k == 2) {
		if (k == 1) {
			*f = 2;
			*g = 1;
		}
		if (k == 2) {
			*f = 1;
			*g = 2;	
		}
	}
	else {
		k -= 2;
		for ( ; k > 0; -- k) {
			*f = 2 * f_a + g_aa;
			*g = g_a + 3 * f_aa;
			f_aa = f_a;
			f_a = *f;
			g_aa = g_a;
			g_a = *g;
		}
	}
}

int main () {
	int k, f, g;

	printf ("entre com k:");
	scanf ("%d", &k);
	
	valor (k, &f, &g);
	printf ("%d f e %d g", f, g);
	return 0;
}
