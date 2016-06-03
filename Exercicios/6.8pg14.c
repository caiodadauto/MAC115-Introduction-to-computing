#include<stdio.h>
#define MAX 200

int semrep (int *t, int k) {
    int
        i,
        j;
    for (i = 0; i < k; ++ i) {
        for (j = i + 1; t[i] == t[j]; ++ j);
        if (j != i + 1)
        t[i + 1] = t[j];
    }
    return j;
}

void ordena (int *p, int k) {
    int
        aux,
        j,
        i;

    for (i = 1; i < k; ++ i) {
        aux = p[i];
        for (j = i - 1; j >= 0 && aux < p[j]; -- j)
            p[j+ 1] = p[j];
        p[j + 1] = aux;
    }
}

int main () {
    int
        i,
        k,
        j,
        n,
        m,
        r[MAX],
        v[MAX],
        b[MAX];

    printf ("entre com m: ");
    scanf ("%d", &m);
    printf ("entre com n: ");
    scanf ("%d", &n);
    printf ("entre com uma sequencia de m numeros: ");
    for (i = 0; i < m; ++ i)
        scanf ("%d", &v[i]);
    printf ("entre com uma sequencia de n numeros: ");
    for (i = 0; i < n; ++ i)
        scanf ("%d", &b[i]);

    for (i = 0; i < n + m; ++ i) {
        if (i < m)
            r[i] = v[i];
        else
            r[i] = b[i - m];
    }

    oredena (r, m + n)
    k = semrep (r, m + n)
    for (i = 0; i < k; ++ i) {
        if (i < k -1)
            printf ("%d ", r[i]);
        else
            printf ("%d\n\n", r[i]);
    }
    return 0;
}
