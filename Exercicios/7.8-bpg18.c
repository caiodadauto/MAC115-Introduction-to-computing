#include<stdio.h>
#define MAX 500

/*void inicializa (int C[][MAX], int lin, int col){
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
}*/

int main () {
    int
        i,
        n,
        j,
        soma,
        k,
        A[MAX];

    printf ("Entre com o n: ");
    scanf ("%d", &n);
    for (i = 0; i < n; ++ i)
        A[i] = 1;

    for (j = 0; j < n; ++ j) {
        soma = 0;
        for (i = 0; i < n - 1; ++ i) {
            if (A[i] != 0) {
                soma += A[i];
                A[n + i] = soma;
            }
        }
        for (k = 0; k < n; ++ k) {
            if (A[k] != 0)
                printf ("%d\t\n", A[k]);
            else
                printf ("\t\n");
        }
        for (k = 0; k <= j; ++ k)
            A[k] = 0;
        for (k = 0; k < n; ++ k)
            printf ("%d", A[k]);
        for (k = j + 1; k < n; ++ k)
            A[k] = A[n + (k - j - 1)];
    }
    return 0;
}
