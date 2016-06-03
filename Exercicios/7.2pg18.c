#include<stdio.h>
#define MAX 200

/*void inicializa (int W[][MAX]) {
    int
        i,
        j;

    for (i = 0; i < MAX; ++ i) {
        for (j = 0; j < MAX; ++ j)
            W[i][j] = 0;
}*/

void escrita (int C[][MAX], int lin, int col){
    int
        i,
        j;

    for (i = 0; i < lin; ++ i) {
        printf("entre com os valores da linha %d", i + 1);
        for (j = 0; j < col; ++ j)
            scanf ("%d", &C[i][j]);
    }
}

int main () {
    int
        i,
        p,
        k,
        m,
        n,
        j,
        P[MAX][MAX],
        B[MAX][MAX],
        A[MAX][MAX];

    for (i = 0; i < MAX; ++ i) {
        for (j = 0; j < MAX; ++ j)
            P[i][j] = 0;
    }
    printf ("entre com o m, n e p: ");
    scanf ("%d%d%d", &m, &n, &p);
    escrita (A, m, n);
    escrita (B, n, p);

    for (k = 0; k < p; ++ k) {
        for (i = 0; i < m; ++ i) {
            for (j = 0; j < n; ++ j)
                P[i][k] += A[i][j] * B[j][k];
        }
    }
    for (i = 0; i < m; ++ i) {
        for (j = 0; j < p; ++ j)
            printf ("%d ", P[i][j]);
        printf ("\n");
    }
    return 0;
}
