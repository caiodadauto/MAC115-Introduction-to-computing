#include <stdio.h>

int main () {
    int
        k,
        N;

    float
        x,
        soma,
        termo,
        termo_ant;

    /*          Aproxima um valor para cos(x)       */

    printf ("Entre com o valor de x (em radianos): ");
    scanf ("%f", &x);
    printf ("Entre com o valor de N: ");
    scanf ("%d", &N);

    soma = k = termo_ant = 1;
    for ( ; N > 0; --N) {
        termo = - termo_ant * ((x * x) / ((2 * k) * (2 * k - 1)));
        ++k;
        soma += termo;
        termo_ant = termo;
    }

    printf ("O cos(%g) vale : %f\n", x, soma);

    return 0;
}
