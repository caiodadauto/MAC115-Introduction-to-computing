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
        j,
        cont,
        A[MAX][MAX];

    printf ("Entre com o n: ");
    scanf ("%d", &n);
    escrita (A, n, n);

    for (i = 0; i < n; ++ i) {
        cont = 0;
        for (j = 0; j < n; ++ j) {
            if (A[i][j] == 0)
                ++ cont;
        }
        if (cont != n - 1) {
            printf ("Não é permutação.\n");
            return 0;
        }
    }

    for (i = 0; i < n; ++ i) {
        cont = 0;
        for (j = 0; j < n; ++ j) {
            if (A[j][i] == 0)
                ++ cont;
        }
        if (cont != n - 1) {
            printf ("Não é permutação.\n");
            return 0;
        }
    }

    printf ("A matriz: \n");
    for (i = 0; i < n; ++ i) {
        for (j = 0; j < n; ++ j)
            printf ("%d\t", A[i][j]);
        printf ("\n");
    }
    printf ("É permutação!\n");
    return 0;
}
