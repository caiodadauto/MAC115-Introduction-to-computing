#include<stdio.h>
#include<math.h>
#define MAX 200

int main () {
    int
        i,
        j,
        n,
        m,
        q[MAX],
        r[MAX],
        p[MAX];

    for (i = 0; i < MAX; ++ i)
        r[i] = 0;
    printf ("entre com o grau do polinomio: ");
    scanf ("%d", &n);
    printf ("entre com os coeficientes de P(X) em ordem crescente de grau: ");
    for (i = 0; i <= n; ++ i)
        scanf ("%d", &p[i]);
    printf ("entre  como grau do segundo polinomio: ");
    scanf ("%d", &m);
    printf ("entre como oos coeficientes de Q(X) em ordem crescente de grau: ");
    for (i = 0; i <= m; ++ i)
        scanf ("%d", &q[i]);

    for (i = 0; i <= n; ++ i) {
        for (j = 0; j <= m; ++ j)
            r[i + j] += p[i] * q[j];
    }

    printf ("Q(X) * P(X) = ");
    for (i = 0; i <= n + m; ++ i) {
        if (i != n + m)
            printf ("(%d*x^%d) + ", r[i], i);
        else
            printf ("(%d*x^%d)\n", r[i], i);
    }
    return 0;
}
