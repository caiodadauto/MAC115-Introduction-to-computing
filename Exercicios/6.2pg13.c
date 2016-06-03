#include<stdio.h>
#define MAX 200

int main () {
    int
        v[MAX],
        i,
        j,
        n;

    printf ("entre com o numero de alunos (<100): ");
    scanf ("%d", &n);
    for (i = 0, j = 1; i < (2 * n); i += 2, ++ j) {
        v[i] = j;
        printf ("entre com a nota do aluno %d: ", j);
        scanf ("%d", &v[i + 1]);
    }
    printf ("\n\nAluno \t Nota\n");
    for (i = 0; i < (2 * n); i += 2) {
        printf ("%d \t %d\n", v[i], v[i + 1]);
    }
    return 0;
}
