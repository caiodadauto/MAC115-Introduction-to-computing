#include<math.h>
#include<stdio.h>

int main () {

	int
		n,
		n_pontos = 0;
	float
		x,
		y;
		
	printf ("entre com o numero de pontoos: ");
	scanf ("%d", &n);
	printf ("entre com o valor dos pontos separados por espaço e x e y respecvamente, com (x; y)\
	podendo ser negativo: ");
	
	for ( ; n > 0; --n) {
		scanf ("%f%f", &x, &y);
		if (x == 0 && y <= 0 ) {
			if (((y + pow (x, 2) + 2 * x - 3) <= 0) && ((y + pow (x, 2) - 2 * x - 3) <= 0)) {
				++n_pontos;
				printf ("o ponto (%f; %f) pertence a H\n", x, y);
			}	
			else
				printf ("o ponto (%f; %f) nao pertence a H\n", x, y);
		}		
		else
			printf ("o ponto (%f; %f) nao pertence a H\n", x, y);
	}
	printf ("\n o numero de pontos pertencente a H e %d\n", n_pontos);	
	
    return 0;
}
