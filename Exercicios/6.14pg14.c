#include<stdio.h>
#include<math.h>
#define MAX 200000

int main () {
    int
        n,
        i,
        j,
        k,
        aux,
        aux1,
        v[MAX],
        u[MAX];

    printf ("entre com n: ");
    scanf ("%d", &n);

    v[0] = 0;
    v[1] = u[0] = u[1] = 1;
    i = 1;
    for (k = 0; k < i; ){
        if (u[k] + u[k + 1] <= n) {
            aux = u[k] + u[k + 1];
            aux1 = v[k] + v[k + 1];
            for (j = i + 1; j - k > 0; -- j) {
                u[j] = u[j - 1];
                v[j] = v[j - 1];
            }
            u[k + 1] = aux;
            v[k + 1] = aux1;
            ++ i;
        }
        else
            ++ k;
    }
    for (j = 0; j <= i; ++ j) {
        if (j != i)
            printf ("%d/%d; ", v[j], u[j]);
        else
            printf ("%d/%d\n", v[j], u[j]);
    }
    return 0;
}
