#include<stdio.h>
#define MAX 200

void escrita (int C[][MAX], int lin, int col){
    int
        i,
        j;

    printf ("Escrita de uma matriz %dx%d\n\n", lin, col);
    for (i = 0; i < lin; ++ i) {
        printf("Entre com os valores da linha %d: ", i + 1);
        for (j = 0; j < col; ++ j) {
            scanf ("%d", &C[i][j]);
        }
    }
}

int main () {
    int
        i,
        n,
        j,
        aux = 0,
        soma = 0,
        A[MAX][MAX];

    printf ("Entre com o n: ");
    scanf ("%d", &n);
    escrita (A, n, n);

    for (i = 0; i < n; ++ i)
        soma += A[i][i];

    for (i = 0; i < n; ++ i )
        aux +=  A[i][n - 1 - i];
    if (soma != aux) {
        printf ("Não é quadrado mágico\n");
        return 0;
    }
    aux = 0;

    for (i = 0; i < n; ++ i) {
        for (j = 0; j < n; ++ j)
            aux +=  A[i][j];
        if (soma != aux) {
            printf ("Não é quadrado mágico\n");
            return 0;
        }
        aux = 0;
    }

    for (i = 0; i < n; ++ i) {
        for (j = 0; j < n; ++ j)
            aux += A[j][i];
        if (soma != aux) {
            printf ("Não é quadrado mágico\n");
            return 0;
        }
        aux = 0;
    }

    printf ("A matriz: \n");
    for (i = 0; i < n; ++ i) {
        for (j = 0; j < n; ++ j)
            printf ("%d\t", A[i][j]);
        printf ("\n");
    }
    printf ("É quadrado mágico\n");
    return 0;
}
