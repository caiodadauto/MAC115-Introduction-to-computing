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
        k,
        l,
        m,
        n,
        j,
        A[MAX][MAX];

    printf ("Entre com o m e n: ");
    scanf ("%d%d", &m, &n);
    escrita (A, m, n);

    for (k = 0; k < m; ++ k) {
        for (l = 0; l < n; ++ l) {
            for (i = 0; i < m; ++ i) {
                for (j = 0; j < n; ++ j)
                    if (A[k][l] == A[i][j] && (k != i || l != j)) {
                        printf ("há valores repetidos.\n");
                        return 0;
                    }
            }
        }
    }
    printf ("não há valores repetidos.\n");
    return 0;
}
