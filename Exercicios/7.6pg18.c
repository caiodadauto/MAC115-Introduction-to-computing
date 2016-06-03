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
        n,
        m,
        j,
        cont_lin,
        cont_col,
        A[MAX][MAX];

    printf ("Entre com o n e m: ");
    scanf ("%d%d", &n, &m);
    escrita (A, m, n);

    cont_lin = m;
    for (i = 0; i < m; ++ i) {
        for (j = 0; j < n && A[i][j] == 0; ++ j);
        if (j != n)
            -- cont_lin;
    }

    cont_col = n;
    for (i = 0; i < n; ++ i) {
        for (j = 0; j < m && A[j][i] == 0; ++ j);
        if (j != m)
            -- cont_col;
    }

    printf ("A matriz: \n");
    for (i = 0; i < n; ++ i) {
        for (j = 0; j < n; ++ j)
            printf ("%d\t", A[i][j]);
        printf ("\n");
    }
    printf ("Possui %d linhas nula(s) e %d colunas nula(s)\n", cont_lin, cont_col);
    return 0;
}
