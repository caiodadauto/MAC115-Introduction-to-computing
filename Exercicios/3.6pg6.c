#include<math.h>
#include<stdio.h>

int main () {
	int
		n,
		i;
	double
		x,
		termo,
		cos = 0;
		
	printf ("entre com o valor de n e x: ");
	scanf ("%d%lf", &n, &x);
	
	termo = 1;
	for (i = 1; i <= n; ++i) {
		cos += termo;
		printf ("%f\n", cos);
		termo *= ((-1) * x * x) / ((2 * i) * (2 * i - 1));
		printf ("%f\n", termo);
	}

	printf ("o valor de cos (%f) calculado ate o enesimo termo e %f\n", x, cos);
    return 0;
}
