#include <stdio.h>

int main () {
    int
        n,
        k = 1;

    float
        soma = 0;

    printf ("Entre com o valor do inteiro n: ");
    scanf ("%d", &n);
    
    for ( ; n >= 1; --n, ++k) {
        soma += (float) k / n;
    }

    printf ("A soma e %.3f\n", soma);

    return 0;
}
