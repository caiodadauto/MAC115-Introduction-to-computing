#include<stdio.h>

int main () {

    int
        m,
        n,
        n3,
        i,
        impar,
        soma;      

    printf ("Entre com o valor de m: ");
    scanf ("%d", &m);

    for (n = 1; n <= m; ++ n) {
        soma = 0;
        impar = -1;
        n3 = n * n * n;

        while (soma != n3) {
            impar += 2;
            soma = impar;
            for (i = 1; i < n; ++ i) 
                soma += impar + (i * 2);
        }

        printf ("%d^3 = ", n);

        for (i = 0; i < n - 1; ++ i) {
            printf ("%d + ", impar + (i * 2));
        }
        printf ("%d\n", impar + (n - 1) * 2);
    }
    return 0;
}
