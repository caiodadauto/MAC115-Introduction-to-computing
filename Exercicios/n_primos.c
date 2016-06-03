#include <stdio.h>
int main () {
    int
        n,
        k,
        primos = 0,
        nao_primos = 0,
        divisor;

    /*printf ("Digite o valor de n: ");
    scanf ("%d", &n);*/

    for ( n = 2; n <= 1000000; n++) {
    k = 1;
    divisor = 0;

        while (k <= n) {
            if (n % k == 0)
                divisor ++;
            k ++;
        }
        if (divisor == 2){
            printf ("\n%d e primo!\n", n);
            primos ++;
        }
        else { 
            printf ("\n%d nao e primo!\n", n);
            nao_primos ++;
        }
    }
    printf ("\nPrimos = %d      Nao primos = %d\n", primos, nao_primos);    
    return 0;
}
