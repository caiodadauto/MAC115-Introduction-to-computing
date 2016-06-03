#include<stdio.h>

int main () {
	int
		j,
		total = 0,
		n,
		k,
		peso[4],
		i;
	float
		media = 0,
		P,
		nota[100];
		
	printf ("Entre com o numero de alunos: ");
	scanf ("%d", &n);
	printf ("Entre com o numero de provas feitas por cada aluno: ");
	scanf ("%d", &k);
	printf ("Entre com o peso de cada prova: ");
	
	for (i = 0; i < 100; ++ i)
		nota[i] = 0;
	
	for (i = 0; i < k; ++ i) {
		scanf ("%d", &peso[i]);
		total += peso [i];
	}
	
	for (i = 0; i < n; ++ i) {
		printf ("entre com as notas do %d aluno: ", i + 1);
		for (j = 0; j < k; ++ j) {
			scanf ("%f", &P);
			nota[i] += ((P * peso[j]) / total);
		}
	}
	
	for (i = 0; i < n; ++ i) 
		media += (nota[i] / n);

	for (i = 0; i < n; ++ i)
		printf ("\nnota aluno %d - %f\n", i + 1, nota[i]);
	printf ("\nmedia da sala = %f\n", media);
	return 0;
}
