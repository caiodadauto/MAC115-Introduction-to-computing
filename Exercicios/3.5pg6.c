#include<math.h>
#include<stdio.h>

int main () {
	float
		a,
		b,
		delta,
		c;
		
	printf ("entre com os valores de a b c:");
	scanf ("%f%f%f", &a, &b, &c);
	
	delta = pow (b, 2) - (4 * a * c);
	if (delta < 0) {
		printf ("COMPLEXAS\n");
		printf ("%f 	(real)\n", ((-1) * b) / (2 * a));
		printf ("+/-%f		(imaginaria)\n", (sqrt ((-1) * delta)) / (2 * a));
	}	
	if (delta == 0) {
		printf ("DUPLA\n");
		printf ("%f\n", ((-1) * b) / (2 * a));
	}
	if (delta > 0) {
		printf ("REAIS DISTINTAS\n");
		printf ("%f\n", (((-1) * b) + sqrt (delta)) / (2 * a));
		printf ("%f\n", (((-1) * b) - sqrt (delta)) / (2 * a));
	}
    return 0;
}
