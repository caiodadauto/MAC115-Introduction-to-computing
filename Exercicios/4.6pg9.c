#include <stdio.h>
#define PI 3.141592

double arctg (double x);
double angulo (double x, double y);

double arctg (double x) {
	int
		n = 1;
	double
		arctang,
		termo;
		
	arctang = termo = x;
	while (termo > 0.0001) {
		termo *= (-1) * x * x * (2 * n - 1) / (2 * n + 1);
		arctang += termo;
		++ n;
	}
	return arctang;
}

double angulo (double x, double y) {
	double
		ang;
	
	if (y < x)
		ang = (180 / PI) * arctg (y / x);
	else
		ang =  (180 / PI) * ((PI / 2) - arctg (x / y));
	return ang;
}

int main () {
	int
		n;
	double
		ang,
		max = 0,
		x,
		y;
		
	printf ("entre com o numero de pontos (x, y) a ser analisado: ");
	scanf ("%d", &n);
	printf ("entre com os valores dos pontos: ");

	for ( ; n > 0; -- n) {
		scanf ("%lf%lf", &x, &y);
		ang = angulo (x, y);
		if (ang > max)
			max = ang;
	}
	printf ("entre os pontos, o maior angulo formado com a abscissa eh %f\n", max);
	return 0;
}
