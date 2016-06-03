#include<stdio.h>

int main () {

    int
        m,
        n,
        X = 0,
        x,
        Y = 0,
        y,
        temp,
        i = 0,
        max;

    printf ("\n\nEntre com m e n: ");
    scanf ("%d%d", &m, &n);

    for (x = 0; x <= m; ++ x) {
    
        for (y = 0; y <= n; ++y) {
            temp = (x * y) - (x * x) + y;

            if (i == 0)
                temp = max;

            if (temp > max && i == 1) {
                Y = y;
                X = x;
                /* maximos parciais com seus respectivos pares ordenados */
                max = temp;
                printf ("\n%d (%d ; %d)\n", max, X, Y);
            }
        i = 1;
        }
    }

    printf ("\nO valor maximo eh %d para o par ordenado (%d ; %d)\n\n", max, X, Y);

    return 0;
}
