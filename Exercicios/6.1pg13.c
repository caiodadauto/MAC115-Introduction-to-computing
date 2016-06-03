#include<stdio.h>
#define MAX 100

int main () {
    int
        i,
        n,
        v[MAX];

    printf ("entre com n: ");
    scanf ("%d", &n);
    printf ("entre com a sequencia de n numeros: ");

    for (i = n - 1; i >= 0; -- i)
        scanf ("%d", &v[i]);
    for (i = 0; i < n; ++ i) {
        if ( i != n - 1)
            printf ("%d ", v[i]);
        else
            printf ("%d\n", v[i]);
    }
    return 0;
}
