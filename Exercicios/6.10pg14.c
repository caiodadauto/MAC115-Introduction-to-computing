#include<stdio.h>
#include<math.h>
#define MAX 200

int main () {
    int
        i,
        j,
        k,
        grau,
        P,
        po[MAX],
        ponto[MAX];

    printf ("entra com o grau do polinomio: ");
    scanf ("%d", &grau);
    printf ("entra com os coeficientes do polinomio em ordem crescente de grau: ");
    for (i = 0; i <= grau; ++ i)
        scanf ("%d", &po[i]);
    printf ("entre com o numero de pontos a ser calculados: ");
    scanf ("%d", &k);
    printf ("entre com diferentes valores para x: ");
    for (i = 0; i < k; ++ i)
        scanf ("%d", &ponto[i]);

    printf ("X\tP(X)\n");
    for (j = 0; j < k; ++ j) {
        for (i = 0; i <= grau; ++ i)
            P += po[i] * pow(ponto[j], i);
        printf ("%d\t%d\n", ponto[j], P);
        P = 0;
    }
    return 0;
}
