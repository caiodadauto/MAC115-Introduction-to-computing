#include<math.h>
#include<stdio.h>

int main () {
	int
		n,
		i,
		aprovado = 0,
		reprovado = 0;
	float
		p1,
		p2,
		p3,
		media_a,
		media_c = 0;
	
	printf ("entre com o numero de alunos: ");
	scanf ("%d", &n);
	printf ("entre com as 3 notas de cada aluno sequencialmente: ");
	
	for (i = n ; i > 0; --i) {
		scanf ("%f%f%f", &p1, &p2, &p3);
		media_a = (p1 + p2 + p3) / 3;
		printf ("media do aluno 1 %f\n", media_a);
		if (media_a < 5)
			++reprovado;
		else
			++aprovado;
		media_c += media_a / n;
	}
	printf ("\nO numero de aprovados foi de %d e de reprovados foi de %d. A media da sala foi de %f\n"
		, aprovado, reprovado, media_c);
    return 0;
}
