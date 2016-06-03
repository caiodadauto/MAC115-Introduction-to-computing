#include<math.h>
#include<stdio.h>

int main () {

	int
		n;
	float
		x,
		y,
		d;
		
	printf ("entre com o numero de pontoos: ");
	scanf ("%d", &n);
	printf ("entre com o valor dos pontos separados por espaço e x e y respecvamente: ");
	
	for ( ; n > 0; --n) {
		scanf ("%f%f", &x, &y);
		d = (pow (x, 2)) + (pow (y, 2));
		if (d <= 1)
			printf ("ponto (%f, %f) pertence a H\n", x, y);
		else
			printf ("ponto (%f, %f) nao pertence a H\n", x, y);
	}	
	
    return 0;
}
