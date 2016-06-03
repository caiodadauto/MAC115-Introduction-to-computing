#include<stdio.h>
#include<math.h>
#define MAX 200

int main () {
    int
        i,
        grau,
        po[MAX];

    printf ("entra com o grau do polinomio: ");
    scanf ("%d", &grau);
    printf ("entra com os coeficientes do polinomio em ordem crescente de grau: ");
    for (i = 0; i <= grau; ++ i)
        scanf ("%d", &po[i]);

    for (i = 0; i <= grau; ++ i) {
        po[i] *= i;
        if (i != grau && po[i] != 0)
            printf ("%d*x^%d\t", po[i], (i - 1));
        if (i == grau && po[i] !=0)
            printf ("%d*x^%d\n", po[i], (i - 1));
    }
    return 0;
}
