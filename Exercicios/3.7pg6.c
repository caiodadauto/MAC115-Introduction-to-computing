#include<math.h>
#include<stdio.h>

int main () {
	int
		i;
	double
		x,
		termo,
		ep,
		comp,
		sen = 0;
		
	printf ("entre com o valor de ep e x: ");
	scanf ("%lf%lf", &ep, &x);
	
	termo = comp = x;
	i = 1;
	while (comp > ep) {
		sen += termo;
		termo *= ((-1) * x * x) / ((2 * i) * (2 * i + 1));
		++i;
		comp = termo;
		if (comp < 0)
			comp *= -1;
	}

	printf ("o valor de sen (%f) e %f\n", x, sen);
    return 0;
}
