#include<stdio.h>

int main () {

    int
        soma = 0,
        n,
        seq,
        divisor,
        i = 0,
        n_divisores;
        
        
    printf ("\n Entre com o tamanho da sequencia: ");
    scanf ("%d", &seq);

    for (; seq > 0; -- seq) {

        if (i == 0) {
            printf ("\n Entre com o valor do primeiro numero da sequencia: ");
            scanf ("%d", &n);
            ++ i;
        }
        else {
            printf (" Entre com o proximo numero da sequencia: ");
            scanf ("%d", &n);
        }

        for (divisor = 1; divisor <= n; ++ divisor) {
            if (n % divisor == 0)
                ++ n_divisores;
            }

        if (n_divisores == 2)
            soma = soma + n;

        n_divisores = 0;
    }

    printf ("\n A soma dos numeros primos dentre os numeros da sequencia eh %d\n\n", soma); 

    return 0;
}
