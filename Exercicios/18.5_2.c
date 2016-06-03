#include<stdio.h>

int main () {
	int
		i,
		n,
		escalar = 0,
		x[50],
		y[50],
		soma[50];
		
	printf ("entre com o valor n de elementos: ");
	scanf ("%d", &n);
	
	printf ("entre com os valores (inteiros) de x: ");
	for (i = 0; i < n; ++ i)
		scanf ("%d", &x[i]);
		
	printf ("entre com os valores (inteiros) de y: ");
	for (i = 0; i < n; ++ i)
		scanf ("%d", &y[i]);
		
	for (i = 0; i < n; ++ i) 
		soma [i] = x[i] * y[i];
		
	for (i = 0; i < n; ++ i) 
		escalar += soma[i];
		
	printf ("o produto escalar de x . y é %d\n", escalar);
	return 0;
}
