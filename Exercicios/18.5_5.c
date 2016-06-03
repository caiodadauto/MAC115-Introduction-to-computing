#include<stdio.h>

int main () {
	int
		pass = 0,
		i,
		g,
		j,
		t,
		k,
		seq[300];
		
	printf ("entre com o numero de k: ");
	scanf ("%d", &k);
	
	printf ("entre com os valores da sequencia: ");
	for (i = 0; i < k; ++ i) 
		scanf ("%d", &seq[i]);
		
	for (i = 0; i < k; ++ i) {
	
		for (j = i + 1; j < k; ++ j){
			if (seq[i] == seq[j]) {
				pass = 1;
				for (t = j - 1, g = j + 1; (t != i) && (g < k); -- t, ++g) {
					if (seq [t] != seq[g] && pass != 0)
						pass = 0;
				}	
			}
			if (pass == 1 && j != k - 1) 
				printf ("i = %d e m = %d\n", i, (j - i));
			pass = 0;
		}
	}
	return 0;
}
