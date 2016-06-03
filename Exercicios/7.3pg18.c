#include<stdio.h>
#define MAX 200

void escrita (int C[][MAX], int lin, int col){
    int
        i,
        j;

    printf ("Escrita de uma matriz %dx%d\n\n", lin, col);
    for (i = 0; i < lin; ++ i) {
        printf("Entre com os valores da linha %d: ", i + 1);
        for (j = 0; j < col; ++ j)
            scanf ("%d", &C[i][j]);
    }
}

int main () {
    int
        i,
        m,
        n,
        j,
        P[MAX],
        X[MAX],
        B[MAX],
        A[MAX][MAX];

    for (i = 0; i < MAX; ++ i)
        P[i] = 0;

    printf ("Entre com o m e n: ");
    scanf ("%d%d", &m, &n);
    escrita (A, m, n);
    printf ("Entre com n valores: ");
    for (i = 0; i < n; ++ i)
        scanf ("%d", &X[i]);
    printf ("Entre com m valores: ");
    for (i = 0; i < n; ++ i)
        scanf ("%d", &B[i]);

    for (i = 0; i < m; ++ i) {
        for (j = 0; j < n; ++ j)
            P[i] += A[i][j] * X[j];
    }
    for (i = 0; i < m; ++ i) {
        if (P[i] != B[i]) {
            printf ("não é solução.\n");
            return 0;
        }
    }
    printf ("é solução.\n");
    return 0;
}
