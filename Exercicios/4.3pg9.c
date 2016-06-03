#include <stdio.h>
#include <math.h>

void bloco (int n, int *ret) {
	
	int
		par = 0,
		impar = 0,
		num;
		
	scanf ("%d", &num);
	-- n;
	while (n != 0) {
		if (num % 2 == 0) {
			while (num % 2 == 0 && n != 0) {
				scanf ("%d", &num);
				-- n;
			}
			if (par == 0)
				par = 1;
			if (n == 0 && num % 2 == 0)
				*ret = 0;
		}
		
		else {
			while (num % 2 != 0 && n != 0) {
				scanf ("%d", &num);
				-- n;
			}
			if (impar == 0)
				impar = 1;
			if (n == 0 && num % 2 != 0)
				*ret = 1;
		}
	}
	if ((par == 1 && impar == 1) ||
	 (impar == 1 && num % 2 == 0) || 
	 (par == 1 && num % 2 != 0) )
		*ret = -1;
	else{
		if (par == 1 || (par == 0 && impar == 0 && num % 2 == 0))
			*ret = 0;
		if (impar == 1 || (par == 0 && impar == 0 && num % 2 != 0))
			*ret = 1;
	}
}

int main () {

	int
		n_pira = 0,
		m = 1,
		soma = 0,
		i,
		n;
	
	printf ("entre com n:");
	scanf ("%d", &n);
	printf ("entre com os valores:");

	while (n > soma && n_pira == 0) {
		bloco (m, &i);
		soma += m;
		++ m;
		if (i == 0 && n > soma) {
			bloco (m, &i);
			soma += m;
			++ m;
			if (i != 1)
				n_pira = 1;
		}
		else {
			if (i == 1 && n > soma) {
				bloco (m, &i);
				soma += m;
				++ m;
				if (i != 0)
					n_pira = 1;
			}
		}
	}

	if (n_pira == 0)
		printf ("a sequencia e piramidal %d-alternante\n", m - 1);
	else
		printf ("a sequencia nao e piramidal\n");
	return 0;
}
