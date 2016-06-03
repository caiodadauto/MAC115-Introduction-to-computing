#include<stdio.h>
#define MAX 200

void escrita (int C[][MAX], int lin, int col){
    int
        i,
        j;

    printf ("Escrita de uma matriz %dx%d\n\n", lin - 2, col - 2);
    for (i = 1; i < lin - 1; ++ i) {
        printf("Entre com os valores da linha %d: ", i);
        for (j = 1; j < col - 1; ++ j)
            scanf ("%d", &C[i][j]);
    }
    i = 0;
        for (j = 0; j < col; ++ j)
            C[i][j] = -1;

    i = lin - 1;
        for (j = 0; j < col; ++ j)
            C[i][j] = -1;

    i = 0;
        for (j = 0; j < lin; ++ j)
            C[j][i] = -1;

    i = col - 1;
        for (j = 0; j < lin; ++ j)
            C[j][i] = -1;
}

int main () {
    int
        i,
        n,
        m,
        j,
        palavra = 1,
        A[MAX][MAX];

    printf ("Entre com o m e n: ");
    scanf ("%d%d", &m, &n);
    escrita (A, m + 2, n + 2);

    for (i = 1; i < m + 1; ++ i) {
        for (j = 1; j < n + 1; ++ j) {
            if (A[i][j] == 0 && A[i][j + 1] != -1 && A[i][j - 1] == -1) {
                A[i][j] = palavra;
                ++ palavra;
            }
        }
    }

    for (i = 1; i < n + 1; ++ i) {
        for (j = 1; j < m + 1; ++ j) {
            if (A[j][i] == 0 && A[j + 1][i] != -1 && A[j - 1][i] == -1) {
                A[j][i] = palavra;
                ++ palavra;
            }
        }
    }
    for (i = 1; i < m + 1; ++ i) {
        for (j = 1; j < n + 1; ++ j)
            printf ("%2d\t", A[i][j]);
        printf ("\n");
    }
    return 0;
}
