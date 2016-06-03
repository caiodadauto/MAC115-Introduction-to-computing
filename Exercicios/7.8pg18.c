#include<stdio.h>
#define MAX 500

void inicializa (int C[][MAX], int lin, int col){
    int
        i,
        j;

    for (i = 0; i < lin; ++ i) {
        for (j = i + 1; j < col; ++ j)
            C[i][j] = -1;
    }
    for (i = 0; i < lin; ++ i)
        C[i][0] = 1;
    for (i = 0; i < lin; ++ i)
        C[i][i] = 1;
}

int main () {
    int
        i,
        n,
        j,
        A[MAX][MAX];

    printf ("Entre com o n: ");
    scanf ("%d", &n);
    inicializa (A, n, n);

    for (i = 0; i < n; ++ i) {
        for (j = 0; j < n && A[i][j] + A[i][j + 1] != 0; ++ j)
            A[i + 1][j + 1] = A[i][j] + A[i][j + 1];
    }

    printf ("Triângulo de Pascal para %d linha(s): \n", n);
    for (i = 0; i < n; ++ i) {
        for (j = 0; j <= i; ++ j)
            printf ("%4d\t", A[i][j]);
        printf ("\n");
    }
    return 0;
}
