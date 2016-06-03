#include<stdio.h>
#define MAX 100

int main () {
    float
        x[MAX],
        y[MAX],
        produto = 0;
    int
        i,
        n;

    printf ("entra com n :");
    scanf ("%d", &n);
    printf ("entre com as n componentes do vetor x :");
    for (i = 0; i < n; ++ i)
        scanf ("%f", &x[i]);

    printf ("entre com os n elementos do vetor y :");
    for (i = 0; i < n; ++ i)
        scanf ("%f", &y[i]);

    for (i = 0; i < n; ++ i)
        x[i] *= y[i];
    for (i = 0; i < n; ++ i)
        produto += x[i];

    printf ("O produto escalar entre os vetores x e y é %.2f\n", produto);
    return 0;
}
