#include <stdio.h>

int main () {

    /* -------------------------------------
        Aproximação de e^x com 
        precisão epsilon.
     ------------------------------------- */

    int
        k;

    float
        x,
        soma,
        t,
        t_comp,
        epl;

    printf ("Entre com o valor de x: ");
    scanf ("%f", &x);
    printf ("Entre com o valor de epl (maior que 0): ");
    scanf ("%f", &epl);

    t_comp = epl;
    t = soma = k = 1;
    while (t_comp >= epl) {
        t = t * (x / k);
        ++k;
        soma += t;
        t_comp = t;
        
        if (t_comp < 0)
            t_comp = -t_comp;
    }

    printf ("e^%.1f = %f\n", x, soma);

    return 0;
}
