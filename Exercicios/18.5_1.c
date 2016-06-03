#include<stdio.h>

int main () {
	int
		i,
		j,
		m,
		n;
	float
		p[20],
		q[40],
		produto[60];
		
	printf ("\n	Entre com o grau (< 20) do polinômio p e com o grau (< 40) de q: ");
	scanf ("%d%d", &n, &m);
	printf ("\n");
	
	for (i = 0; i < 60; ++ i) {
		produto[i] = 0;
	}
	for (i = 0; i <= n; ++ i) {
		printf ("	Entre, para o polinomio p, com o coeficiente de x^%d: ", i);
		scanf ("%f", &p[i]);	
	}
	for (i = 0; i <= m; ++i) {
		printf ("	Entre, para o polinomio q, com o coeficiente de x^%d: ", i);
		scanf ("%f", &q[i]);	
	}
	for (i = 0; i <= n; ++ i) {
		for (j = 0; j <= m; ++ j){
			produto[i+j] += ( p[i] * q[j] );
		} 
	}
	printf ("\n	p(x) * q(x) = ");
	for (i = 0; i <= (m+n); ++ i) {
		if (i != (m+n))
			printf ("%.1f * x^%d + ", produto[i], i);
		else
			printf ("%.1f * x^%d.\n\n", produto[i], i);
	
	}
	return 0;
}
