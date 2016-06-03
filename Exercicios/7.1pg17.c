#include<stdio.h>
#include<math.h>
#define MAX 200

int main () {
    int
        i,
        m,
        n,
        j,
        P[MAX],
        V[MAX],
        A[MAX][MAX];

    for (i = 0; i < MAX; ++ i)
        P[i] = 0;
    printf ("entre com o m e n: ");
    scanf ("%d%d", &m, &n);
    for (i = 0; i < m; ++ i) {
        printf ("entre com os valores da linha %d: ", i);
        for (j = 0; j < n; ++ j)
            scanf ("%d", &A[i][j]);
    }
    printf ("entre com o n numeros: ");
    for (i = 0; i < n; ++ i)
        scanf ("%d", &V[i]);

    for (i = 0; i < m; ++ i) {
        for (j = 0; j < n; ++ j)
            P[i] += A[i][j] * V[j];
    }
    for (i = 0; i < m; ++ i)
        printf ("\t%d\n", P[i]);
    return 0;
}
