#include<stdio.h>
#define MAX 200

int main () {
    int
        i,
        n,
        r[MAX],
        num[MAX],
        num1[MAX];

    for (i = 0; i < MAX; ++ i)
        r[i] = num[i] = num1[i] = 0;

    printf ("entra com n: ");
    scanf ("%d", &n);
    printf ("entre com n numeros: ");
    for (i = 1; i <= n; ++ i)
        scanf ("%d", &num[i]);
    printf ("entre com mais n numeros: ");
    for (i = 1; i <= n; ++ i)
        scanf ("%d", &num1[i]);

    for (i = n; i >= 0; -- i) {
        r[i] += num[i] + num1[i];
        if (r[i] >= 10) {
            r[i - 1] = r[i] / 10;
            r[i] = r[i] % 10;
        }
    }
    for (i = 0; i <= n; ++ i) {
        if (i != n)
            printf ("%d ", r[i]);
        else
            printf ("%d\n",r[i]);
    }
    return 0;
}
